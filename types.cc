
// CMSC 430 Compiler Theory and Design
// Project 4 Skeleton
// UMGC CITE
// Summer 2023

// This file contains the bodies of the type checking functions

#include <string>
#include <vector>

using namespace std;

#include "types.h"
#include "listing.h"

#include "symbols.h"


void checkAssignment(Types lValue, Types rValue, string message) {
    if (lValue != MISMATCH && rValue != MISMATCH && lValue != rValue) {
        
        if (lValue == INT_TYPE && rValue == REAL_TYPE) {
            appendError(GENERAL_SEMANTIC, "Illegal Narrowing " + message);
        } 
        else {
            appendError(GENERAL_SEMANTIC, "Type Mismatch on " + message);
        }
    }
}


Types checkWhen(Types true_, Types false_) {
    if (true_ == MISMATCH || false_ == MISMATCH)
        return MISMATCH;
    if (true_ != false_) {
        appendError(GENERAL_SEMANTIC, "When Types Mismatch");
        return MISMATCH;  
    }
    return true_;
}


Types checkSwitch(Types case_, Types when, Types other) {
	if (case_ != INT_TYPE)
		appendError(GENERAL_SEMANTIC, "Switch Expression Not Integer");
	return checkCases(when, other);
}

Types checkCases(Types left, Types right) {
	if (left == MISMATCH || right == MISMATCH)
		return MISMATCH;
	if (left == NONE || left == right)
		return right;
	appendError(GENERAL_SEMANTIC, "Case Types Mismatch");
	return MISMATCH;
}

Types checkArithmetic(Types left, Types right) {
    if (left == MISMATCH || right == MISMATCH)
        return MISMATCH;
    if (left == INT_TYPE && right == INT_TYPE)
        return INT_TYPE;
    if (left == REAL_TYPE && right == REAL_TYPE)
        return REAL_TYPE;    
    if (left == INT_TYPE && right == REAL_TYPE)
        return REAL_TYPE;
    if (left == REAL_TYPE && right == INT_TYPE)
        return REAL_TYPE;            
    appendError(GENERAL_SEMANTIC, "Arithmetic Operator Requires Numeric Types");
    return MISMATCH;
}

Types evaluateRelational(Types left, Types op, Types right) {
    if ((left == INT_TYPE || left == REAL_TYPE) &&
        (right == INT_TYPE || right == REAL_TYPE)) {
        return INT_TYPE;  
    }
    if (left == CHAR_TYPE && right == CHAR_TYPE) {
        return INT_TYPE;  
    }
    appendError(GENERAL_SEMANTIC, "Invalid Types in Relational Expression");
    return MISMATCH;
}

Types checkList(Types first, Types second) {
    if (first == second)
        return first;  
    appendError(GENERAL_SEMANTIC, "List Element Types Do Not Match");
    return MISMATCH;
}

Types checkFold(Types direction, Types op, Types listType) {
    if (listType == CHAR_TYPE) {
        appendError(GENERAL_SEMANTIC, "Fold Requires A Numeric List");
        return MISMATCH;
    }
    return listType; 
}


Types checkLogical(Types left, Types right) {
	if (left == INT_TYPE && right == INT_TYPE)
 		 return INT_TYPE;
	appendError(GENERAL_SEMANTIC, "Logical operator requires integer operands");
    return MISMATCH;
}

Types checkNegation(Types operand) {
	if (operand == INT_TYPE || operand == REAL_TYPE)
		return operand;
	appendError(GENERAL_SEMANTIC, "Arithmetic Operator Requires Numeric Types");
	return MISMATCH;
}

Types checkListTypeMatch(Types declared, Types initialized) {
    if (declared != initialized) {
    appendError(GENERAL_SEMANTIC, "List Type Does Not Match Element Types");
        return MISMATCH;
    }
    return declared;
}

Types checkListIndexType(Types indexType) {
    if (indexType != INT_TYPE)
        appendError(GENERAL_SEMANTIC, "List Subscript Must Be Integer");
    return indexType;
}

Types checkRelational(Types left, Types right) {
    if (left == MISMATCH || right == MISMATCH)
        return MISMATCH;
    if ((left == CHAR_TYPE && (right == INT_TYPE || right == REAL_TYPE)) ||
        ((left == INT_TYPE || left == REAL_TYPE) && right == CHAR_TYPE)) {
        appendError(GENERAL_SEMANTIC, "Character Literals Cannot be Compared to Numeric Expressions");
        return MISMATCH;
    }
    return INT_TYPE; 
}

Types checkRemainder(Types left, Types right) {
	if (left == INT_TYPE && right == INT_TYPE)
		return INT_TYPE;
	appendError(GENERAL_SEMANTIC, "Remainder Operator Requires Integer Operands");
	return MISMATCH;	
}


Types checkIfBranch(Types expected, Types actual) {
    if (expected == MISMATCH || actual == MISMATCH)
        return MISMATCH;
    if (expected != actual)
        appendError(GENERAL_SEMANTIC, "If-Elsif-Else Type Mismatch");
    return expected; 
}


Types checkDuplicateVariable(Symbols<Types> &table, char* lexeme, const char* kind) {
    Types existing;
    if (table.find(lexeme, existing)) {
        string message = "Duplicate ";
        message += kind;
        message += " Variable";
        appendError(GENERAL_SEMANTIC, message.c_str());
        return MISMATCH;
    }
    return NONE; 
}


