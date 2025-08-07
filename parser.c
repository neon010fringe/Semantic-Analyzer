/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "parser.y"

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


#line 91 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INT_LITERAL = 4,                /* INT_LITERAL  */
  YYSYMBOL_CHAR_LITERAL = 5,               /* CHAR_LITERAL  */
  YYSYMBOL_ADDOP = 6,                      /* ADDOP  */
  YYSYMBOL_MULOP = 7,                      /* MULOP  */
  YYSYMBOL_RELOP = 8,                      /* RELOP  */
  YYSYMBOL_MODOP = 9,                      /* MODOP  */
  YYSYMBOL_ANDOP = 10,                     /* ANDOP  */
  YYSYMBOL_ARROW = 11,                     /* ARROW  */
  YYSYMBOL_BEGIN_ = 12,                    /* BEGIN_  */
  YYSYMBOL_CASE = 13,                      /* CASE  */
  YYSYMBOL_CHARACTER = 14,                 /* CHARACTER  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_END = 16,                       /* END  */
  YYSYMBOL_ENDSWITCH = 17,                 /* ENDSWITCH  */
  YYSYMBOL_FUNCTION = 18,                  /* FUNCTION  */
  YYSYMBOL_INTEGER = 19,                   /* INTEGER  */
  YYSYMBOL_IS = 20,                        /* IS  */
  YYSYMBOL_LIST = 21,                      /* LIST  */
  YYSYMBOL_OF = 22,                        /* OF  */
  YYSYMBOL_OTHERS = 23,                    /* OTHERS  */
  YYSYMBOL_RETURNS = 24,                   /* RETURNS  */
  YYSYMBOL_SWITCH = 25,                    /* SWITCH  */
  YYSYMBOL_WHEN = 26,                      /* WHEN  */
  YYSYMBOL_REAL = 27,                      /* REAL  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_THEN = 29,                      /* THEN  */
  YYSYMBOL_ELSIF = 30,                     /* ELSIF  */
  YYSYMBOL_ENDIF = 31,                     /* ENDIF  */
  YYSYMBOL_FOLD = 32,                      /* FOLD  */
  YYSYMBOL_ENDFOLD = 33,                   /* ENDFOLD  */
  YYSYMBOL_NEGOP = 34,                     /* NEGOP  */
  YYSYMBOL_OROP = 35,                      /* OROP  */
  YYSYMBOL_LEFT = 36,                      /* LEFT  */
  YYSYMBOL_RIGHT = 37,                     /* RIGHT  */
  YYSYMBOL_NOTOP = 38,                     /* NOTOP  */
  YYSYMBOL_HEXINT = 39,                    /* HEXINT  */
  YYSYMBOL_REALIT = 40,                    /* REALIT  */
  YYSYMBOL_41_ = 41,                       /* ';'  */
  YYSYMBOL_42_ = 42,                       /* ','  */
  YYSYMBOL_43_ = 43,                       /* ':'  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* '-'  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_function = 48,                  /* function  */
  YYSYMBOL_function_header = 49,           /* function_header  */
  YYSYMBOL_parameter_list = 50,            /* parameter_list  */
  YYSYMBOL_parameter = 51,                 /* parameter  */
  YYSYMBOL_type = 52,                      /* type  */
  YYSYMBOL_optional_variable = 53,         /* optional_variable  */
  YYSYMBOL_variables = 54,                 /* variables  */
  YYSYMBOL_variable = 55,                  /* variable  */
  YYSYMBOL_list = 56,                      /* list  */
  YYSYMBOL_expressions = 57,               /* expressions  */
  YYSYMBOL_body = 58,                      /* body  */
  YYSYMBOL_statement_ = 59,                /* statement_  */
  YYSYMBOL_statement = 60,                 /* statement  */
  YYSYMBOL_if_statement = 61,              /* if_statement  */
  YYSYMBOL_elsif_clauses = 62,             /* elsif_clauses  */
  YYSYMBOL_else_clause = 63,               /* else_clause  */
  YYSYMBOL_list_choice = 64,               /* list_choice  */
  YYSYMBOL_operator = 65,                  /* operator  */
  YYSYMBOL_direction = 66,                 /* direction  */
  YYSYMBOL_cases = 67,                     /* cases  */
  YYSYMBOL_case = 68,                      /* case  */
  YYSYMBOL_condition = 69,                 /* condition  */
  YYSYMBOL_relation = 70,                  /* relation  */
  YYSYMBOL_expression = 71,                /* expression  */
  YYSYMBOL_term = 72,                      /* term  */
  YYSYMBOL_primary = 73,                   /* primary  */
  YYSYMBOL_list_index = 74,                /* list_index  */
  YYSYMBOL_when_statement = 75             /* when_statement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   207

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  161

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,     2,     2,    42,    46,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    41,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    65,    66,    67,    72,    73,    77,    82,
      83,    84,    89,    90,    94,    95,    99,   104,   113,   118,
     119,   124,   129,   130,   134,   135,   136,   138,   139,   144,
     149,   151,   155,   157,   159,   164,   165,   169,   170,   171,
     172,   176,   177,   181,   182,   183,   184,   188,   192,   193,
     197,   198,   199,   204,   205,   206,   207,   208,   209,   210,
     214,   215,   216,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   232,   240
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "INT_LITERAL", "CHAR_LITERAL", "ADDOP", "MULOP", "RELOP", "MODOP",
  "ANDOP", "ARROW", "BEGIN_", "CASE", "CHARACTER", "ELSE", "END",
  "ENDSWITCH", "FUNCTION", "INTEGER", "IS", "LIST", "OF", "OTHERS",
  "RETURNS", "SWITCH", "WHEN", "REAL", "IF", "THEN", "ELSIF", "ENDIF",
  "FOLD", "ENDFOLD", "NEGOP", "OROP", "LEFT", "RIGHT", "NOTOP", "HEXINT",
  "REALIT", "';'", "','", "':'", "'('", "')'", "'-'", "$accept",
  "function", "function_header", "parameter_list", "parameter", "type",
  "optional_variable", "variables", "variable", "list", "expressions",
  "body", "statement_", "statement", "if_statement", "elsif_clauses",
  "else_clause", "list_choice", "operator", "direction", "cases", "case",
  "condition", "relation", "expression", "term", "primary", "list_index",
  "when_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      66,   -23,    19,    77,    86,   -83,    13,   -83,    52,    84,
      86,   -83,    63,   161,   -17,   -83,   147,    16,   -83,   -83,
     161,   -83,   -83,   -83,    78,   161,   122,   114,   111,   105,
     104,   -83,   -83,    31,    59,    59,    -7,    31,    31,   -83,
     -83,    31,   144,   130,   -83,   141,   133,   -83,   -83,   -83,
     -83,   -83,   132,   -83,   161,    76,   -83,    31,   135,    59,
      59,   108,   -83,   148,     3,   -83,   -83,    32,   141,   -83,
     141,   -83,    37,   149,   -83,    83,    83,    83,    83,    83,
      83,   -83,   157,   150,    99,   156,   -83,   148,     4,   118,
      59,    31,    31,    16,   -83,   -83,   -83,   -83,     9,   -83,
     -83,    83,    83,   133,   133,   133,   133,   -83,   -83,   138,
     -83,   -83,   151,   185,    10,   -83,   -83,   -83,   129,   141,
     123,   -83,   -83,    31,   160,   -83,   -83,    31,   153,   -83,
     184,   186,   -83,    31,    53,   117,   141,   -83,   136,   -83,
      76,    76,   141,    16,    59,   165,    31,   -83,   -83,   158,
     159,   -83,   167,    56,   -83,   141,   -83,   187,    16,   -83,
     -83
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    13,     5,     0,     1,     0,     0,
      12,    15,     0,     0,     0,     7,     0,     0,     2,    14,
       0,    10,     9,    11,     0,     0,     0,     0,     0,     0,
      69,    64,    67,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,     0,    27,    24,    59,    62,    68,    25,
       8,     3,     0,     6,     0,     0,    23,     0,     0,     0,
       0,     0,    49,     0,     0,    41,    42,     0,    56,    62,
      57,    62,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,    51,    57,     0,     0,
       0,     0,     0,     0,    37,    38,    39,    40,     0,    63,
      21,     0,     0,    53,    54,    58,    55,    60,    61,     0,
      16,    72,     0,     0,     0,    44,    50,    48,     0,    52,
      54,    31,    36,     0,     0,    70,    71,     0,     0,    45,
       0,     0,    43,     0,    34,     0,    20,    28,     0,    17,
       0,     0,    73,     0,     0,     0,     0,    35,    18,     0,
       0,    33,    25,     0,    29,    19,    47,     0,     0,    26,
      30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   -83,   -83,   176,   113,   -83,   -83,   193,   -83,
      79,   -83,   -82,   -49,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,    91,   -32,   -44,   -33,   109,   -28,   -83,    64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    14,    15,    24,     9,    10,    11,   128,
     135,    18,    42,    43,    44,   134,   145,   124,    98,    67,
     114,   115,    61,    62,    45,    46,    47,    48,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    63,    63,    64,    68,    70,    83,    25,    72,    69,
      71,   121,   122,    90,    90,    86,    12,    29,     5,    30,
      31,    32,     6,   113,    84,    26,    87,    89,    88,    65,
      66,    71,    93,   131,    30,    31,    32,    13,    94,    95,
      96,    33,    34,    75,    35,    76,   117,    77,    36,   116,
      37,   107,   108,   123,    38,    39,    40,    63,   118,   119,
      41,   151,    30,    31,    32,    37,    90,     1,   143,    38,
      39,    40,    78,   125,   126,    41,   160,     7,    97,    30,
      31,    32,    99,   144,     2,   158,    30,    31,    32,     8,
     136,   149,   150,    37,   136,    16,    17,    59,    39,    40,
     142,    33,    34,    60,    35,    75,    20,    76,    36,    77,
      37,    63,   153,   155,    38,    39,    40,   101,    90,    51,
      41,   102,    39,    40,    75,    12,    92,    41,    77,    28,
      79,    55,    80,    50,    78,    75,    54,    76,    52,    77,
      79,    75,    80,    76,   111,    77,    56,    75,    57,    76,
      91,    77,   -59,    78,    75,    85,    92,   112,    77,   146,
      73,    21,   147,    99,    78,   -59,    22,    82,    27,   113,
      78,    74,   133,    81,    23,    21,    78,   109,   146,   -46,
      22,   148,   127,    78,   103,   104,   105,   106,    23,   130,
     100,   110,   129,   137,   139,   140,   154,   141,   -32,   156,
     157,   120,    53,    19,   159,   132,   138,   152
};

static const yytype_uint8 yycheck[] =
{
      33,    34,    35,    35,    37,    38,    55,    24,    41,    37,
      38,    93,     3,    10,    10,    59,     3,     1,    41,     3,
       4,     5,     3,    13,    57,    42,    59,    60,    60,    36,
      37,    59,    29,    23,     3,     4,     5,    24,     6,     7,
       8,    25,    26,     6,    28,     8,    90,    10,    32,    45,
      34,    79,    80,    44,    38,    39,    40,    90,    91,    92,
      44,   143,     3,     4,     5,    34,    10,     1,    15,    38,
      39,    40,    35,   101,   102,    44,   158,     0,    46,     3,
       4,     5,    45,    30,    18,    29,     3,     4,     5,     3,
     123,   140,   141,    34,   127,    43,    12,    38,    39,    40,
     133,    25,    26,    44,    28,     6,    43,     8,    32,    10,
      34,   144,   144,   146,    38,    39,    40,    34,    10,    41,
      44,    38,    39,    40,     6,     3,     8,    44,    10,    16,
       7,    20,     9,    20,    35,     6,    22,     8,    25,    10,
       7,     6,     9,     8,    45,    10,    41,     6,    44,     8,
      42,    10,    29,    35,     6,    20,     8,     1,    10,    42,
      16,    14,    45,    45,    35,    42,    19,    54,    21,    13,
      35,    41,    43,    41,    27,    14,    35,    20,    42,    23,
      19,    45,    44,    35,    75,    76,    77,    78,    27,     4,
      41,    41,    41,    33,    41,    11,    31,    11,    31,    41,
      41,    92,    26,    10,    17,   114,   127,   143
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    18,    48,    49,    41,     3,     0,     3,    53,
      54,    55,     3,    24,    50,    51,    43,    12,    58,    55,
      43,    14,    19,    27,    52,    24,    42,    21,    52,     1,
       3,     4,     5,    25,    26,    28,    32,    34,    38,    39,
      40,    44,    59,    60,    61,    71,    72,    73,    74,    75,
      52,    41,    52,    51,    22,    20,    41,    44,    71,    38,
      44,    69,    70,    71,    69,    36,    37,    66,    71,    73,
      71,    73,    71,    16,    41,     6,     8,    10,    35,     7,
       9,    41,    52,    60,    71,    20,    70,    71,    69,    71,
      10,    42,     8,    29,     6,     7,     8,    46,    65,    45,
      41,    34,    38,    72,    72,    72,    72,    73,    73,    20,
      41,    45,     1,    13,    67,    68,    45,    70,    71,    71,
      72,    59,     3,    44,    64,    73,    73,    44,    56,    41,
       4,    23,    68,    43,    62,    57,    71,    33,    57,    41,
      11,    11,    71,    15,    30,    63,    42,    45,    45,    60,
      60,    59,    75,    69,    31,    71,    41,    41,    29,    17,
      59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    50,    50,    51,    52,
      52,    52,    53,    53,    54,    54,    55,    55,    56,    57,
      57,    58,    59,    59,    60,    60,    60,    60,    60,    61,
      62,    62,    63,    63,    63,    64,    64,    65,    65,    65,
      65,    66,    66,    67,    67,    67,    67,    68,    69,    69,
      70,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    74,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     5,     6,     2,     3,     1,     3,     1,
       1,     1,     1,     0,     2,     1,     6,     8,     3,     3,
       1,     4,     2,     2,     1,     1,     9,     1,     5,     7,
       5,     0,     2,     2,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     0,     5,     3,     1,
       3,     2,     3,     3,     3,     3,     2,     2,     3,     1,
       3,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     4,     6
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* function: function_header optional_variable body  */
#line 59 "parser.y"
    {
        checkAssignment((yyvsp[-2].type), (yyvsp[0].type), "Function Return");
    }
#line 1539 "parser.tab.c"
    break;

  case 3: /* function_header: FUNCTION IDENTIFIER RETURNS type ';'  */
#line 65 "parser.y"
                                         { (yyval.type) = (yyvsp[-1].type); }
#line 1545 "parser.tab.c"
    break;

  case 4: /* function_header: FUNCTION IDENTIFIER parameter_list RETURNS type ';'  */
#line 66 "parser.y"
                                                        { (yyval.type) = (yyvsp[-1].type); }
#line 1551 "parser.tab.c"
    break;

  case 5: /* function_header: error ';'  */
#line 67 "parser.y"
              { (yyval.type) = MISMATCH; }
#line 1557 "parser.tab.c"
    break;

  case 9: /* type: INTEGER  */
#line 82 "parser.y"
            { (yyval.type) = INT_TYPE; }
#line 1563 "parser.tab.c"
    break;

  case 10: /* type: CHARACTER  */
#line 83 "parser.y"
              { (yyval.type) = CHAR_TYPE; }
#line 1569 "parser.tab.c"
    break;

  case 11: /* type: REAL  */
#line 84 "parser.y"
         { (yyval.type) = REAL_TYPE; }
#line 1575 "parser.tab.c"
    break;

  case 16: /* variable: IDENTIFIER ':' type IS statement ';'  */
#line 99 "parser.y"
                                         {
    checkDuplicateVariable(scalars, (yyvsp[-5].iden), "Scalar");
    checkAssignment((yyvsp[-3].type), (yyvsp[-1].type), "Variable Initialization");
    scalars.insert((yyvsp[-5].iden), (yyvsp[-3].type)); }
#line 1584 "parser.tab.c"
    break;

  case 17: /* variable: IDENTIFIER ':' LIST OF type IS list ';'  */
#line 104 "parser.y"
                                            {
    checkDuplicateVariable(lists, (yyvsp[-7].iden), "List");
    if ((yyvsp[-1].type) != MISMATCH)
        checkListTypeMatch((yyvsp[-3].type), (yyvsp[-1].type));
    lists.insert((yyvsp[-7].iden), (yyvsp[-3].type));
}
#line 1595 "parser.tab.c"
    break;

  case 18: /* list: '(' expressions ')'  */
#line 113 "parser.y"
                        { (yyval.type) = (yyvsp[-1].type); }
#line 1601 "parser.tab.c"
    break;

  case 19: /* expressions: expressions ',' expression  */
#line 118 "parser.y"
                               { (yyval.type) = checkList((yyvsp[-2].type), (yyvsp[0].type)); }
#line 1607 "parser.tab.c"
    break;

  case 21: /* body: BEGIN_ statement_ END ';'  */
#line 124 "parser.y"
                              { (yyval.type) = (yyvsp[-2].type); }
#line 1613 "parser.tab.c"
    break;

  case 23: /* statement_: error ';'  */
#line 130 "parser.y"
              { (yyval.type) = MISMATCH; }
#line 1619 "parser.tab.c"
    break;

  case 26: /* statement: SWITCH expression IS cases OTHERS ARROW statement ';' ENDSWITCH  */
#line 137 "parser.y"
        { (yyval.type) = checkSwitch((yyvsp[-7].type), (yyvsp[-5].type), (yyvsp[-2].type)); }
#line 1625 "parser.tab.c"
    break;

  case 28: /* statement: FOLD direction operator list_choice ENDFOLD  */
#line 140 "parser.y"
        { (yyval.type) = checkFold((yyvsp[-3].type), (yyvsp[-2].type), (yyvsp[-1].type)); }
#line 1631 "parser.tab.c"
    break;

  case 29: /* if_statement: IF condition THEN statement_ elsif_clauses else_clause ENDIF  */
#line 145 "parser.y"
        { (yyval.type) = (yyvsp[-3].type);  }
#line 1637 "parser.tab.c"
    break;

  case 30: /* elsif_clauses: elsif_clauses ELSIF condition THEN statement_  */
#line 150 "parser.y"
        { (yyval.type) = (yyvsp[0].type);  }
#line 1643 "parser.tab.c"
    break;

  case 31: /* elsif_clauses: %empty  */
#line 151 "parser.y"
           { (yyval.type) = NONE; }
#line 1649 "parser.tab.c"
    break;

  case 32: /* else_clause: ELSE when_statement  */
#line 156 "parser.y"
        { (yyval.type) = checkIfBranch((yyval.type), (yyvsp[0].type)); }
#line 1655 "parser.tab.c"
    break;

  case 33: /* else_clause: ELSE statement_  */
#line 158 "parser.y"
        { (yyval.type) = checkIfBranch((yyval.type), (yyvsp[0].type)); }
#line 1661 "parser.tab.c"
    break;

  case 34: /* else_clause: %empty  */
#line 160 "parser.y"
        { (yyval.type) = NONE; }
#line 1667 "parser.tab.c"
    break;

  case 35: /* list_choice: '(' expressions ')'  */
#line 164 "parser.y"
                        { (yyval.type) = (yyvsp[-1].type); }
#line 1673 "parser.tab.c"
    break;

  case 36: /* list_choice: IDENTIFIER  */
#line 165 "parser.y"
               { (yyval.type) = find(lists, (yyvsp[0].iden), "List"); }
#line 1679 "parser.tab.c"
    break;

  case 37: /* operator: ADDOP  */
#line 169 "parser.y"
          { (yyval.type) = (yyvsp[0].type); }
#line 1685 "parser.tab.c"
    break;

  case 38: /* operator: MULOP  */
#line 170 "parser.y"
          { (yyval.type) = (yyvsp[0].type); }
#line 1691 "parser.tab.c"
    break;

  case 39: /* operator: RELOP  */
#line 171 "parser.y"
          { (yyval.type) = (yyvsp[0].type); }
#line 1697 "parser.tab.c"
    break;

  case 40: /* operator: '-'  */
#line 172 "parser.y"
          { (yyval.type) = INT_TYPE; }
#line 1703 "parser.tab.c"
    break;

  case 41: /* direction: LEFT  */
#line 176 "parser.y"
          { (yyval.type) = INT_TYPE; }
#line 1709 "parser.tab.c"
    break;

  case 42: /* direction: RIGHT  */
#line 177 "parser.y"
          { (yyval.type) = REAL_TYPE; }
#line 1715 "parser.tab.c"
    break;

  case 43: /* cases: cases case  */
#line 181 "parser.y"
               { (yyval.type) = checkCases((yyvsp[-1].type), (yyvsp[0].type)); }
#line 1721 "parser.tab.c"
    break;

  case 44: /* cases: case  */
#line 182 "parser.y"
         { (yyval.type) = (yyvsp[0].type); }
#line 1727 "parser.tab.c"
    break;

  case 45: /* cases: error ';'  */
#line 183 "parser.y"
              { (yyval.type) = MISMATCH; }
#line 1733 "parser.tab.c"
    break;

  case 46: /* cases: %empty  */
#line 184 "parser.y"
           { (yyval.type) = NONE; }
#line 1739 "parser.tab.c"
    break;

  case 47: /* case: CASE INT_LITERAL ARROW statement ';'  */
#line 188 "parser.y"
                                         { (yyval.type) = (yyvsp[-1].type); }
#line 1745 "parser.tab.c"
    break;

  case 48: /* condition: condition ANDOP relation  */
#line 192 "parser.y"
                             { (yyval.type) = checkLogical((yyvsp[-2].type), (yyvsp[0].type)); }
#line 1751 "parser.tab.c"
    break;

  case 50: /* relation: '(' condition ')'  */
#line 197 "parser.y"
                      { (yyval.type) = (yyvsp[-1].type); }
#line 1757 "parser.tab.c"
    break;

  case 51: /* relation: NOTOP relation  */
#line 198 "parser.y"
                   { (yyval.type) = checkLogical(NONE, (yyvsp[0].type)); }
#line 1763 "parser.tab.c"
    break;

  case 52: /* relation: expression RELOP expression  */
#line 199 "parser.y"
                                    { (yyval.type) = checkRelational((yyvsp[-2].type), (yyvsp[0].type)); }
#line 1769 "parser.tab.c"
    break;

  case 53: /* expression: expression ADDOP term  */
#line 204 "parser.y"
                          { (yyval.type) = checkArithmetic((yyvsp[-2].type), (yyvsp[0].type)); }
#line 1775 "parser.tab.c"
    break;

  case 54: /* expression: expression RELOP term  */
#line 205 "parser.y"
                          { (yyval.type) = evaluateRelational((yyvsp[-2].type), (yyvsp[-1].type), (yyvsp[0].type)); }
#line 1781 "parser.tab.c"
    break;

  case 55: /* expression: expression OROP term  */
#line 206 "parser.y"
                         { (yyval.type) = checkLogical((yyvsp[-2].type), (yyvsp[0].type)); }
#line 1787 "parser.tab.c"
    break;

  case 56: /* expression: NEGOP expression  */
#line 207 "parser.y"
                     { (yyval.type) = checkNegation((yyvsp[0].type)); }
#line 1793 "parser.tab.c"
    break;

  case 57: /* expression: NOTOP expression  */
#line 208 "parser.y"
                     { (yyval.type) = checkLogical(NONE, (yyvsp[0].type)); }
#line 1799 "parser.tab.c"
    break;

  case 58: /* expression: expression ANDOP term  */
#line 209 "parser.y"
                          { (yyval.type) = checkLogical((yyvsp[-2].type), (yyvsp[0].type)); }
#line 1805 "parser.tab.c"
    break;

  case 60: /* term: term MULOP primary  */
#line 214 "parser.y"
                       { (yyval.type) = checkArithmetic((yyvsp[-2].type), (yyvsp[0].type)); }
#line 1811 "parser.tab.c"
    break;

  case 61: /* term: term MODOP primary  */
#line 215 "parser.y"
                       { (yyval.type) = checkRemainder((yyvsp[-2].type), (yyvsp[0].type)); }
#line 1817 "parser.tab.c"
    break;

  case 63: /* primary: '(' expression ')'  */
#line 220 "parser.y"
                       { (yyval.type) = (yyvsp[-1].type); }
#line 1823 "parser.tab.c"
    break;

  case 65: /* primary: HEXINT  */
#line 222 "parser.y"
           { (yyval.type) = INT_TYPE; }
#line 1829 "parser.tab.c"
    break;

  case 66: /* primary: REALIT  */
#line 223 "parser.y"
           { (yyval.type) = REAL_TYPE; }
#line 1835 "parser.tab.c"
    break;

  case 69: /* primary: IDENTIFIER  */
#line 226 "parser.y"
               { (yyval.type) = find(scalars, (yyvsp[0].iden), "Scalar"); }
#line 1841 "parser.tab.c"
    break;

  case 70: /* primary: NEGOP primary  */
#line 227 "parser.y"
                  { (yyval.type) = checkNegation((yyvsp[0].type)); }
#line 1847 "parser.tab.c"
    break;

  case 71: /* primary: NOTOP primary  */
#line 228 "parser.y"
                  { (yyval.type) = checkLogical(NONE, (yyvsp[0].type)); }
#line 1853 "parser.tab.c"
    break;

  case 72: /* list_index: IDENTIFIER '(' expression ')'  */
#line 232 "parser.y"
                                       {
        checkListIndexType((yyvsp[-1].type));         
        (yyval.type) = find(lists, (yyvsp[-3].iden), "List");   
    }
#line 1862 "parser.tab.c"
    break;

  case 73: /* when_statement: WHEN condition ',' expression ':' expression  */
#line 241 "parser.y"
        { (yyval.type) = checkWhen((yyvsp[-2].type), (yyvsp[0].type)); }
#line 1868 "parser.tab.c"
    break;


#line 1872 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 244 "parser.y"


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

