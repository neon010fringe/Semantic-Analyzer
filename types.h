// CMSC 430 Compiler Theory and Design
// Project 4 Skeleton
// UMGC CITE
// Summer 2023

// This file contains type definitions and the function
// prototypes for the type checking functions

#include "symbols.h"


typedef char* CharPtr;

enum Types {MISMATCH, INT_TYPE, CHAR_TYPE, NONE, REAL_TYPE };



void checkAssignment(Types lValue, Types rValue, string message);
Types checkWhen(Types true_, Types false_);
Types checkSwitch(Types case_, Types when, Types other);
Types checkCases(Types left, Types right);
Types checkArithmetic(Types left, Types right);

Types evaluateRelational(Types left, Types op, Types right);

Types checkList(Types first, Types second);

Types checkFold(Types direction, Types op, Types listType);

Types checkIf(Types thenType, Types elsifType, Types elseType);

Types checkLogical(Types left, Types right);

Types checkNegation(Types operand);

Types checkListTypeMatch(Types declared, Types initialized);

Types checkListIndexType(Types indexType);

Types checkRelational(Types left, Types right);

Types checkRemainder(Types left, Types right);

Types checkIfBranch(Types expected, Types actual);

Types checkDuplicateVariable(Symbols<Types> &table, char* lexeme, const char* kind);


