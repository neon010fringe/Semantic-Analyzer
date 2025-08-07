/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    INT_LITERAL = 259,             /* INT_LITERAL  */
    CHAR_LITERAL = 260,            /* CHAR_LITERAL  */
    ADDOP = 261,                   /* ADDOP  */
    MULOP = 262,                   /* MULOP  */
    RELOP = 263,                   /* RELOP  */
    MODOP = 264,                   /* MODOP  */
    ANDOP = 265,                   /* ANDOP  */
    ARROW = 266,                   /* ARROW  */
    BEGIN_ = 267,                  /* BEGIN_  */
    CASE = 268,                    /* CASE  */
    CHARACTER = 269,               /* CHARACTER  */
    ELSE = 270,                    /* ELSE  */
    END = 271,                     /* END  */
    ENDSWITCH = 272,               /* ENDSWITCH  */
    FUNCTION = 273,                /* FUNCTION  */
    INTEGER = 274,                 /* INTEGER  */
    IS = 275,                      /* IS  */
    LIST = 276,                    /* LIST  */
    OF = 277,                      /* OF  */
    OTHERS = 278,                  /* OTHERS  */
    RETURNS = 279,                 /* RETURNS  */
    SWITCH = 280,                  /* SWITCH  */
    WHEN = 281,                    /* WHEN  */
    REAL = 282,                    /* REAL  */
    IF = 283,                      /* IF  */
    THEN = 284,                    /* THEN  */
    ELSIF = 285,                   /* ELSIF  */
    ENDIF = 286,                   /* ENDIF  */
    FOLD = 287,                    /* FOLD  */
    ENDFOLD = 288,                 /* ENDFOLD  */
    NEGOP = 289,                   /* NEGOP  */
    OROP = 290,                    /* OROP  */
    LEFT = 291,                    /* LEFT  */
    RIGHT = 292,                   /* RIGHT  */
    NOTOP = 293,                   /* NOTOP  */
    HEXINT = 294,                  /* HEXINT  */
    REALIT = 295                   /* REALIT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "parser.y"

    CharPtr iden;
    Types type;

#line 109 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
