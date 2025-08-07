/* CMSC 430 Compiler Theory and Design
   Project 4 Combined Parser with Semantic Actions
   UMGC CITE
   Summer 2023 */

%{
#include <string>
#include <vector>
#include <map>

using namespace std;

#include "types.h"
#include "listing.h"
#include "symbols.h"

int yylex();
Types find(Symbols<Types>& table, CharPtr identifier, string tableName);
void yyerror(const char* message);

Symbols<Types> scalars;
Symbols<Types> lists;

%}

%define parse.error verbose

%union {
    CharPtr iden;
    Types type;
}



%token <iden> IDENTIFIER
%token <type> INT_LITERAL CHAR_LITERAL
%token <type> ADDOP MULOP RELOP MODOP



%token ANDOP ARROW
%token BEGIN_ CASE CHARACTER ELSE END ENDSWITCH FUNCTION INTEGER IS LIST OF OTHERS
%token RETURNS SWITCH WHEN REAL IF THEN ELSIF ENDIF FOLD ENDFOLD NEGOP OROP LEFT RIGHT
	   NOTOP

	   
%token HEXINT REALIT

%type <type> list expressions body type statement_ statement cases case expression term 
             primary condition relation list_choice operator direction list_index 
             else_clause elsif_clauses if_statement function function_header 
             when_statement
            

%%

function:
    function_header optional_variable body
    {
        checkAssignment($1, $3, "Function Return");
    };


function_header: 
    FUNCTION IDENTIFIER RETURNS type ';' { $$ = $4; } | 
    FUNCTION IDENTIFIER parameter_list RETURNS type ';' { $$ = $5; } | 
    error ';' { $$ = MISMATCH; };



parameter_list:
    parameter_list ',' parameter |
    parameter;


parameter:
    IDENTIFIER ':' type;
    
    

type:
    INTEGER { $$ = INT_TYPE; } |
    CHARACTER { $$ = CHAR_TYPE; } |
    REAL { $$ = REAL_TYPE; };
    
    

optional_variable:
    variables |
    %empty;
    

variables:
    variables variable |
    variable;
    

variable:
    IDENTIFIER ':' type IS statement ';' {
    checkDuplicateVariable(scalars, $1, "Scalar");
    checkAssignment($3, $5, "Variable Initialization");
    scalars.insert($1, $3); } |
    
    IDENTIFIER ':' LIST OF type IS list ';' {
    checkDuplicateVariable(lists, $1, "List");
    if ($7 != MISMATCH)
        checkListTypeMatch($5, $7);
    lists.insert($1, $5);
};


list:
    '(' expressions ')' { $$ = $2; };
    
    

expressions:
    expressions ',' expression { $$ = checkList($1, $3); } |
    expression;
    
    

body:
    BEGIN_ statement_ END ';' { $$ = $2; };
    
    

statement_:
    statement ';' |
    error ';' { $$ = MISMATCH; };
    

statement:
    expression | 
    when_statement | 
    SWITCH expression IS cases OTHERS ARROW statement ';' ENDSWITCH
        { $$ = checkSwitch($2, $4, $7); } | 
    if_statement | 
    FOLD direction operator list_choice ENDFOLD
        { $$ = checkFold($2, $3, $4); };


if_statement:
    IF condition THEN statement_ elsif_clauses else_clause ENDIF
        { $$ = $4;  };
        

elsif_clauses:
    elsif_clauses ELSIF condition THEN statement_
        { $$ = $5;  } |
    %empty { $$ = NONE; };
    

else_clause:
	ELSE when_statement
        { $$ = checkIfBranch($$, $2); } |
    ELSE statement_
        { $$ = checkIfBranch($$, $2); } | 
    %empty
        { $$ = NONE; };


list_choice:
    '(' expressions ')' { $$ = $2; } |
    IDENTIFIER { $$ = find(lists, $1, "List"); };


operator:
    ADDOP { $$ = $1; } |
    MULOP { $$ = $1; } |
    RELOP { $$ = $1; } |
    '-'   { $$ = INT_TYPE; };


direction:
    LEFT  { $$ = INT_TYPE; } |
    RIGHT { $$ = REAL_TYPE; };


cases:
    cases case { $$ = checkCases($1, $2); } |
    case { $$ = $1; } |
    error ';' { $$ = MISMATCH; } |
    %empty { $$ = NONE; };
    

case:
    CASE INT_LITERAL ARROW statement ';' { $$ = $4; };
    

condition:
    condition ANDOP relation { $$ = checkLogical($1, $3); } |
    relation;
    

relation:
    '(' condition ')' { $$ = $2; } |
    NOTOP relation { $$ = checkLogical(NONE, $2); } |
	expression RELOP expression { $$ = checkRelational($1, $3); };
	
	

expression:
    expression ADDOP term { $$ = checkArithmetic($1, $3); } |
    expression RELOP term { $$ = evaluateRelational($1, $2, $3); } |
    expression OROP term { $$ = checkLogical($1, $3); } |
    NEGOP expression { $$ = checkNegation($2); } |
    NOTOP expression { $$ = checkLogical(NONE, $2); } |
    expression ANDOP term { $$ = checkLogical($1, $3); } |
    term;
    

term:
    term MULOP primary { $$ = checkArithmetic($1, $3); } |
    term MODOP primary { $$ = checkRemainder($1, $3); } |
    primary;


primary:
    '(' expression ')' { $$ = $2; } |
    INT_LITERAL |
    HEXINT { $$ = INT_TYPE; } |
    REALIT { $$ = REAL_TYPE; } |
    CHAR_LITERAL |
    list_index |
    IDENTIFIER { $$ = find(scalars, $1, "Scalar"); } |
    NEGOP primary { $$ = checkNegation($2); } |
    NOTOP primary { $$ = checkLogical(NONE, $2); };
    
    
list_index:   
	 IDENTIFIER '(' expression ')' {
        checkListIndexType($3);         
        $$ = find(lists, $1, "List");   
    };
    


when_statement:
    WHEN condition ',' expression ':' expression
        { $$ = checkWhen($4, $6); };
    

%%

Types find(Symbols<Types>& table, CharPtr identifier, string tableName) {
    Types type;
    if (!table.find(identifier, type)) {
        appendError(UNDECLARED, tableName + " " + identifier);
        return MISMATCH;
    }
    return type;
}

void yyerror(const char* message) {
    appendError(SYNTAX, message);
}

int main(int argc, char *argv[]) {
    firstLine();
    yyparse();
    lastLine();
    return 0;
}

