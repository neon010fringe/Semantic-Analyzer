Semantic-Analyzer

CMSC 430 – Project 4
This project involves extending a compiler’s semantic analysis phase using Bison and Flex.

Project Overview

The compiler performs semantic checks on a custom programming language. These checks include:

- Type checking for expressions and assignments
- Scope resolution and duplicate declaration errors
- Enforcing type rules for arithmetic, list usage, conditionals, and control flow

All semantic errors are reported in the compilation listing immediately after the line in which they occur.

Technologies Used

- C++
- Flex (Lexical Analyzer)
- Bison (Parser & Semantic Analyzer)
- Linux / Unix shell tools
- Custom Symbol Table and Type Checker

Semantic Checks Implemented

- Type mismatch on variable initialization
- Undeclared or duplicate variables/lists
- Remainder operator type enforcement
- Fold expression type validation
- When/Switch/If expression type rules
- Character/numeric comparison restrictions
- List element and subscript validation
- Real to integer narrowing error detection

How to Build & Run


make
./compile < testfile.txt


