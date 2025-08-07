/* CMSC 430 Compiler Theory and Design
   Project 4 Combined Scanner
   UMGC CITE
   Summer 2023 */

/* This file contains the flex input file */

%{
#include <cstdio>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

#include "types.h"
#include "listing.h"
#include "tokens.h"
%}

%option noyywrap

ws        [ \t\r]+


comment         "//".*\n
dash_comment    "--".*\n



line      (\r\n|\n|\r)

id        [a-zA-Z](([a-zA-Z0-9])|(_[a-zA-Z0-9])|(__[a-zA-Z0-9]))*
digit     [0-9]
dec       {digit}+
hex       \#[a-fA-F0-9]+

char1     '[^'\\]'
char2     '\\[btnrf]'

punc      [\(\),:;]
realit    [0-9]*\.[0-9]+([eE][+-]?[0-9]+)?

%%

{ws}        { ECHO; }

{comment}      { ECHO; nextLine(); }
{dash_comment} { ECHO; nextLine(); }

{line}      { ECHO; nextLine(); }

"+"        { ECHO; return(ADDOP); }
"-"        { ECHO; return(ADDOP); }
"*"        { ECHO; return(MULOP); }
"/"        { ECHO; return(MULOP); }
"%"        { ECHO; return(MODOP); }
"^"        { ECHO; return(ADDOP); }
"="        { ECHO; return(RELOP); }
"<"        { ECHO; return(RELOP); }
">"        { ECHO; return(RELOP); }
"<="       { ECHO; return(RELOP); }
">="       { ECHO; return(RELOP); }
"<>"       { ECHO; return(RELOP); }
"~"        { ECHO; return(NEGOP); }
"|"        { ECHO; return(OROP); }
"!"        { ECHO; return(NOTOP); }
"&"        { ECHO; return(ANDOP); }
"=>"       { ECHO; return(ARROW); }

begin      { ECHO; return(BEGIN_); }
case       { ECHO; return(CASE); }
character  { ECHO; return(CHARACTER); }
end        { ECHO; return(END); }
endswitch  { ECHO; return(ENDSWITCH); }
function   { ECHO; return(FUNCTION); }
integer    { ECHO; return(INTEGER); }
is         { ECHO; return(IS); }
list       { ECHO; return(LIST); }
of         { ECHO; return(OF); }
others     { ECHO; return(OTHERS); }
returns    { ECHO; return(RETURNS); }
switch     { ECHO; return(SWITCH); }
when       { ECHO; return(WHEN); }
real       { ECHO; return(REAL); }
if         { ECHO; return(IF); }
then       { ECHO; return(THEN); }
else       { ECHO; return(ELSE); }
elsif      { ECHO; return(ELSIF); }
endif      { ECHO; return(ENDIF); }
fold       { ECHO; return(FOLD); }
left       { ECHO; return(LEFT); }
right      { ECHO; return(RIGHT); }
endfold    { ECHO; return(ENDFOLD); }

{id}        { ECHO; yylval.iden = (CharPtr)malloc(yyleng + 1); 
              strcpy(yylval.iden, yytext); return(IDENTIFIER); }
{dec}       { ECHO; yylval.type = INT_TYPE; return(INT_LITERAL); }
{hex}       { ECHO; yylval.type = INT_TYPE; return(HEXINT); }
{realit}    { ECHO; yylval.type = REAL_TYPE; return(REALIT); }
{char1}     { ECHO; yylval.type = CHAR_TYPE; return(CHAR_LITERAL); }
{char2}     { ECHO; yylval.type = CHAR_TYPE; return(CHAR_LITERAL); }
{punc}      { ECHO; return(yytext[0]); }

. {
    appendError(LEXICAL, "Invalid character: " + std::string(yytext));
    lexicalErrors++;
}

%%
