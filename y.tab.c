/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "parsertest.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#define YYDEBUG 1
	extern void yyerror(char*);
	extern int mylineno;


  int yylex(void);


#line 80 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    INT_VALUE = 259,
    BOOL = 260,
    FLOAT = 261,
    FLOAT_VALUE = 262,
    CHAR = 263,
    CHAR_VALUE = 264,
    STRING = 265,
    STRING_VALUE = 266,
    IDENTIFIER = 267,
    COMMENT = 268,
    IF = 269,
    THEN = 270,
    WHILE = 271,
    FOR = 272,
    SWITCH = 273,
    CASE = 274,
    DO = 275,
    DEFAULT = 276,
    ELIF = 277,
    ELSE = 278,
    RETURN = 279,
    MAIN = 280,
    INCLUDE = 281,
    HASH = 282,
    CLASS = 283,
    FUNC = 284,
    BREAK = 285,
    CONTINUE = 286,
    SINGLE_QUOTE = 287,
    DOUBLE_QUOTE = 288,
    SEMI_COLON = 289,
    COLON = 290,
    OBRACKET = 291,
    CBRACKET = 292,
    OBRACE = 293,
    CBRACE = 294,
    OSQ_BRACKET = 295,
    CSQ_BRACKET = 296,
    COMMA = 297,
    TWO_DOTS = 298,
    DOT = 299,
    TRUE = 300,
    FALSE = 301,
    AND = 302,
    OR = 303,
    EQUAL_EQUAL = 304,
    NOT_EQUAL = 305,
    GREATER_THAN = 306,
    GREATER_THAN_EQUAL = 307,
    SMALLER_THAN = 308,
    SMALLER_THAN_EQUAL = 309,
    NOT = 310,
    REMAINDER = 311,
    PLUS_EQUAL = 312,
    MINUS_EQUAL = 313,
    MULTIPLY_EQUAL = 314,
    DIVIDE_EQUAL = 315,
    PLUS_PLUS = 316,
    MINUS_MINUS = 317,
    EQUAL = 318,
    CONST = 319,
    VOID = 320,
    MINUS = 321,
    PLUS = 322,
    DIVIDE = 323,
    MULTIPLY = 324,
    POWER = 325
  };
#endif
/* Tokens.  */
#define INT 258
#define INT_VALUE 259
#define BOOL 260
#define FLOAT 261
#define FLOAT_VALUE 262
#define CHAR 263
#define CHAR_VALUE 264
#define STRING 265
#define STRING_VALUE 266
#define IDENTIFIER 267
#define COMMENT 268
#define IF 269
#define THEN 270
#define WHILE 271
#define FOR 272
#define SWITCH 273
#define CASE 274
#define DO 275
#define DEFAULT 276
#define ELIF 277
#define ELSE 278
#define RETURN 279
#define MAIN 280
#define INCLUDE 281
#define HASH 282
#define CLASS 283
#define FUNC 284
#define BREAK 285
#define CONTINUE 286
#define SINGLE_QUOTE 287
#define DOUBLE_QUOTE 288
#define SEMI_COLON 289
#define COLON 290
#define OBRACKET 291
#define CBRACKET 292
#define OBRACE 293
#define CBRACE 294
#define OSQ_BRACKET 295
#define CSQ_BRACKET 296
#define COMMA 297
#define TWO_DOTS 298
#define DOT 299
#define TRUE 300
#define FALSE 301
#define AND 302
#define OR 303
#define EQUAL_EQUAL 304
#define NOT_EQUAL 305
#define GREATER_THAN 306
#define GREATER_THAN_EQUAL 307
#define SMALLER_THAN 308
#define SMALLER_THAN_EQUAL 309
#define NOT 310
#define REMAINDER 311
#define PLUS_EQUAL 312
#define MINUS_EQUAL 313
#define MULTIPLY_EQUAL 314
#define DIVIDE_EQUAL 315
#define PLUS_PLUS 316
#define MINUS_MINUS 317
#define EQUAL 318
#define CONST 319
#define VOID 320
#define MINUS 321
#define PLUS 322
#define DIVIDE 323
#define MULTIPLY 324
#define POWER 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "parsertest.y" /* yacc.c:355  */

	int intValue;	    /* integer value */
	float floatValue;    /* float value */
	char charValue;    /* char value */
	char* stringValue;    /* string value*/
	char* identifier;       /* identifier name */
	char* comment;

#line 269 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 286 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  74
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   448

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  264

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    57,    59,    59,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    75,
      78,    80,    80,    82,    82,    83,    83,    86,    87,    88,
      89,    91,    93,    93,    95,    97,   101,   105,   109,   113,
     115,   115,   117,   117,   119,   122,   126,   127,   128,   129,
     131,   132,   134,   134,   134,   138,   139,   140,   142,   142,
     144,   145,   146,   148,   149,   151,   152,   154,   155,   156,
     157,   159,   159,   161,   162,   164,   164,   164,   164,   164,
     167,   169,   170,   172,   173,   175,   175,   178,   180,   181,
     182,   183,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   208,   209,   210,   211,   212,   213,   216,   217,
     218,   219
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "INT_VALUE", "BOOL", "FLOAT",
  "FLOAT_VALUE", "CHAR", "CHAR_VALUE", "STRING", "STRING_VALUE",
  "IDENTIFIER", "COMMENT", "IF", "THEN", "WHILE", "FOR", "SWITCH", "CASE",
  "DO", "DEFAULT", "ELIF", "ELSE", "RETURN", "MAIN", "INCLUDE", "HASH",
  "CLASS", "FUNC", "BREAK", "CONTINUE", "SINGLE_QUOTE", "DOUBLE_QUOTE",
  "SEMI_COLON", "COLON", "OBRACKET", "CBRACKET", "OBRACE", "CBRACE",
  "OSQ_BRACKET", "CSQ_BRACKET", "COMMA", "TWO_DOTS", "DOT", "TRUE",
  "FALSE", "AND", "OR", "EQUAL_EQUAL", "NOT_EQUAL", "GREATER_THAN",
  "GREATER_THAN_EQUAL", "SMALLER_THAN", "SMALLER_THAN_EQUAL", "NOT",
  "REMAINDER", "PLUS_EQUAL", "MINUS_EQUAL", "MULTIPLY_EQUAL",
  "DIVIDE_EQUAL", "PLUS_PLUS", "MINUS_MINUS", "EQUAL", "CONST", "VOID",
  "MINUS", "PLUS", "DIVIDE", "MULTIPLY", "POWER", "$accept", "Root",
  "Program", "statements", "statement", "returnstmt", "classstmt",
  "var_decs", "vars", "funcs", "ifstmts", "ifstmt", "elifs", "elifstmt",
  "elsestmt", "forstmt", "whilestmt", "dowhilestmt", "switchstmt",
  "switchcases", "caselist", "case", "blockstmt", "Func_Dec", "Args",
  "Args_list", "declerations", "assignments", "Var_Dec", "Arr_Dec",
  "Expr_list", "Array_Assign", "super_data_type", "array_data_type",
  "Data_Type", "Assign", "generic_assign", "identifier_list", "func_call",
  "Expr", "DataVAL", "LOG_EXPR", "MATH_EXPR", "Casting", "MATH_CALC",
  "UniaryEXP", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325
};
# endif

#define YYPACT_NINF -157

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-157)))

#define YYTABLE_NINF -118

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     251,  -157,  -157,  -157,  -157,  -157,    75,    -9,     3,    12,
      17,    86,   281,    94,    95,  -157,  -157,   251,   238,   126,
    -157,  -157,   251,  -157,  -157,  -157,   112,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,   136,     1,
     115,  -157,    93,  -157,    65,   153,   136,   173,   173,    58,
     149,   251,  -157,  -157,  -157,    51,   238,  -157,  -157,   150,
     151,  -157,  -157,  -157,   -36,  -157,  -157,   138,   147,   189,
     113,   140,   136,     1,  -157,  -157,   148,   152,   163,   167,
    -157,   159,   170,   144,     8,   174,     4,  -157,   160,  -157,
     175,   169,  -157,    91,   281,  -157,   257,   334,   238,   173,
     136,   177,   172,   212,  -157,  -157,   180,  -157,  -157,    48,
      48,    48,    48,    48,    48,    68,   165,  -157,    -2,     6,
     251,   182,  -157,   183,  -157,   191,   193,   166,   173,   251,
    -157,  -157,  -157,    53,   190,  -157,  -157,  -157,   173,   284,
     173,   310,  -157,   394,  -157,   179,   352,  -157,   194,   281,
     281,   281,   281,   281,   281,   281,   281,   198,   136,   249,
     200,   233,   209,   143,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,    18,  -157,  -157,   251,   213,  -157,   238,  -157,   217,
     214,   251,  -157,  -157,   360,   221,   228,  -157,  -157,   225,
     230,   173,  -157,   251,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,   251,   173,    71,   234,  -157,   118,  -157,  -157,
      50,  -157,   235,   251,   261,   264,  -157,   239,   246,  -157,
    -157,   136,  -157,   247,   248,   378,   241,   256,   253,   274,
     293,   173,  -157,  -157,  -157,   275,  -157,  -157,  -157,   251,
    -157,  -157,  -157,   278,   281,   251,  -157,   286,  -157,   386,
    -157,   280,   251,   276,  -157,   251,  -157,  -157,   283,   288,
    -157,  -157,   251,  -157
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    75,    77,    76,    79,    78,    83,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    16,     0,     0,     0,
       2,     3,     4,    17,    14,     7,    27,     8,    10,     9,
      11,    18,    57,     6,    12,    55,    56,    58,     0,     0,
       0,    59,    70,    13,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,    88,   115,     0,    89,    90,     0,
       0,   117,    19,    91,   103,   111,   110,     0,     0,     0,
       0,     0,     0,     0,     1,     5,     0,     0,    29,    32,
      28,    83,     0,    70,     0,     0,     0,    81,     0,    86,
       0,     0,    84,     0,     0,   101,     0,     0,     0,     0,
       0,     0,     0,     0,   118,   119,     0,   120,   121,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,    71,    72,    45,     0,     0,     0,     0,     0,
      30,    33,    64,     0,     0,    73,    61,    62,     0,    68,
       0,    69,    80,    87,    85,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,   104,   105,   106,   107,   109,
      23,     0,    21,    22,     0,     0,    51,     0,    52,     0,
       0,     0,    63,    60,     0,     0,    68,    69,    74,     0,
      65,     0,   102,     0,    92,    93,    98,    99,    94,    95,
      96,    97,     0,     0,     0,     0,   116,   115,   112,    24,
       0,    25,     0,     0,     0,     0,    49,     0,     0,    35,
      67,     0,    82,     0,     0,     0,     0,     0,     0,     0,
      42,     0,    20,    26,    47,     0,    54,    53,    48,     0,
      66,    31,    37,     0,     0,     0,    39,     0,    43,     0,
      46,     0,     0,     0,    41,     0,    38,    34,     0,     0,
      40,    36,     0,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,  -157,   -15,  -157,  -157,  -157,   154,  -157,  -157,
    -157,  -157,   250,  -157,   252,  -157,  -157,  -157,  -157,  -157,
      98,  -157,  -157,  -156,   271,  -157,  -157,  -157,   -46,   -96,
    -157,   -13,   231,    -8,   -12,   -28,  -157,   -30,     0,  -111,
     -11,   -43,   282,  -157,   178,  -157
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    24,   170,   171,   210,
      25,    26,    78,    79,    80,    27,    28,    29,    30,   228,
     229,   230,    31,    32,    70,   118,    33,    34,    35,    36,
     189,    37,   121,    38,    39,    40,    41,    42,    61,   142,
      95,   143,    63,    64,    65,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    62,    71,    99,    96,    97,    73,    75,    83,    86,
      72,    85,   134,    81,    90,   211,    92,    43,   178,   173,
     109,     1,    43,     2,     3,    82,     4,    47,     5,   190,
     110,   111,   112,   113,   114,   176,   102,   100,   137,    48,
     177,    84,    83,   127,   106,   126,   179,    14,    49,   135,
     146,    43,    52,    50,   233,    53,   159,   119,   123,   125,
      55,     1,   122,     2,     3,   186,     4,   138,     5,   172,
      86,     1,    85,     2,     3,   173,     4,    81,     5,    14,
     222,   106,    18,   147,    56,   184,   158,    44,   141,   232,
     226,   103,   227,   140,     1,    52,     2,     3,    53,     4,
      54,     5,    89,    55,   123,   180,    67,    68,   122,    59,
      60,    44,   104,   105,   185,    45,     1,    46,     2,     3,
      43,     4,    98,     5,    51,   172,    74,    93,   127,    43,
     126,    69,    18,   187,    76,    77,    57,    58,   194,   195,
     196,   197,   198,   199,   200,   201,    94,    52,    81,    87,
      53,   120,    59,    60,    44,   207,    88,    91,   103,   212,
     225,   101,   107,   108,    52,   214,   217,    53,     1,    54,
       2,     3,   139,     4,    43,     5,   115,    52,   223,   124,
      53,    43,    54,    69,   128,    55,    77,   224,   249,    76,
     129,   240,     1,    43,     2,     3,    93,     4,   235,     5,
     140,    46,    43,   174,   132,    57,    58,   133,   136,    93,
     145,   161,   144,    43,   160,    94,   162,   163,    57,    58,
     181,    59,    60,    84,   251,   182,   117,   183,    94,   138,
     254,   188,   193,   253,    59,    60,   202,   258,   204,    43,
     260,     1,   191,     2,     3,    43,     4,   263,     5,   205,
     206,   213,    43,   216,     1,    43,     2,     3,   215,     4,
     219,     5,    43,     6,    44,     7,   220,     8,     9,    10,
     231,    11,   221,   236,   234,    12,   237,   244,   238,    13,
      14,    15,    16,   203,   239,    52,   241,   242,    53,    17,
      54,   245,   246,    55,   148,   247,   149,   150,   151,   152,
     153,   154,   155,   156,   149,   150,   151,   152,   153,   154,
     155,   156,   226,   259,   250,    18,   252,    56,  -115,   257,
      44,   255,   261,   262,   103,   209,    57,    58,   248,   131,
     130,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,   116,
    -115,   208,    59,    60,  -117,   104,   105,   175,     0,     0,
    -115,  -115,  -115,  -115,  -115,     0,     0,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,     0,  -117,     0,     0,     0,
       0,   157,     0,     0,     0,     0,  -117,  -117,  -117,  -117,
    -117,   149,   150,   151,   152,   153,   154,   155,   156,   192,
       0,   164,   165,   166,   167,   168,   169,   218,     0,   149,
     150,   151,   152,   153,   154,   155,   156,   149,   150,   151,
     152,   153,   154,   155,   156,   243,     0,     0,     0,     0,
       0,     0,     0,   256,     0,   149,   150,   151,   152,   153,
     154,   155,   156,   149,   150,   151,   152,   153,   154,   155,
     156,   149,   150,   151,   152,   153,   154,   155,   156
};

static const yytype_int16 yycheck[] =
{
       0,    12,    17,    49,    47,    48,    18,    22,    38,    39,
      18,    39,     4,    12,    44,   171,    46,    17,    12,   115,
      56,     3,    22,     5,     6,    38,     8,    36,    10,   140,
      66,    67,    68,    69,    70,    37,    51,    49,    34,    36,
      42,    40,    72,    73,    56,    73,    40,    29,    36,    41,
      93,    51,     4,    36,   210,     7,    99,    69,    70,    72,
      12,     3,    70,     5,     6,    12,     8,    63,    10,   115,
     100,     3,   100,     5,     6,   171,     8,    12,    10,    29,
     191,    93,    64,    94,    36,   128,    98,    36,    88,    39,
      19,    40,    21,    40,     3,     4,     5,     6,     7,     8,
       9,    10,    37,    12,   116,   120,    12,    12,   116,    61,
      62,    36,    61,    62,   129,    40,     3,    42,     5,     6,
     120,     8,    64,    10,    38,   171,     0,    36,   158,   129,
     158,    36,    64,   133,    22,    23,    45,    46,   149,   150,
     151,   152,   153,   154,   155,   156,    55,     4,    12,    34,
       7,    38,    61,    62,    36,    12,    63,     4,    40,   174,
     203,    12,    12,    12,     4,   177,   181,     7,     3,     9,
       5,     6,    12,     8,   174,    10,    38,     4,   193,    39,
       7,   181,     9,    36,    36,    12,    23,   202,   231,    22,
      38,   221,     3,   193,     5,     6,    36,     8,   213,    10,
      40,    42,   202,    38,    34,    45,    46,    63,    34,    36,
      41,    39,    37,   213,    37,    55,     4,    37,    45,    46,
      38,    61,    62,    40,   239,    34,    37,    34,    55,    63,
     245,    41,    38,   244,    61,    62,    38,   252,    38,   239,
     255,     3,    63,     5,     6,   245,     8,   262,    10,    16,
      41,    38,   252,    39,     3,   255,     5,     6,    41,     8,
      39,    10,   262,    12,    36,    14,    41,    16,    17,    18,
      36,    20,    42,    12,    39,    24,    12,    36,    39,    28,
      29,    30,    31,    34,    38,     4,    39,    39,     7,    38,
       9,    35,    39,    12,    37,    21,    47,    48,    49,    50,
      51,    52,    53,    54,    47,    48,    49,    50,    51,    52,
      53,    54,    19,    37,    39,    64,    38,    36,    34,    39,
      36,    35,    39,    35,    40,   171,    45,    46,   230,    79,
      78,    47,    48,    49,    50,    51,    52,    53,    54,    68,
      56,   163,    61,    62,    34,    61,    62,   116,    -1,    -1,
      66,    67,    68,    69,    70,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    47,    48,    49,    50,    51,    52,    53,    54,    37,
      -1,   109,   110,   111,   112,   113,   114,    37,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    47,    48,    49,
      50,    51,    52,    53,    54,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    47,    48,    49,    50,    51,    52,    53,
      54,    47,    48,    49,    50,    51,    52,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,    10,    12,    14,    16,    17,
      18,    20,    24,    28,    29,    30,    31,    38,    64,    72,
      73,    74,    75,    76,    77,    81,    82,    86,    87,    88,
      89,    93,    94,    97,    98,    99,   100,   102,   104,   105,
     106,   107,   108,   109,    36,    40,    42,    36,    36,    36,
      36,    38,     4,     7,     9,    12,    36,    45,    46,    61,
      62,   109,   111,   113,   114,   115,   116,    12,    12,    36,
      95,    74,   104,   105,     0,    74,    22,    23,    83,    84,
      85,    12,   102,   108,    40,   106,   108,    34,    63,    37,
     108,     4,   108,    36,    55,   111,   112,   112,    64,    99,
     105,    12,    74,    40,    61,    62,   105,    12,    12,    56,
      66,    67,    68,    69,    70,    38,    95,    37,    96,   105,
      38,   103,   104,   105,    39,   102,   106,   108,    36,    38,
      85,    83,    34,    63,     4,    41,    34,    34,    63,    12,
      40,   109,   110,   112,    37,    41,   112,   111,    37,    47,
      48,    49,    50,    51,    52,    53,    54,    37,   105,   112,
      37,    39,     4,    37,   113,   113,   113,   113,   113,   113,
      78,    79,    99,   100,    38,   103,    37,    42,    12,    40,
      74,    38,    34,    34,   112,    74,    12,   109,    41,   101,
     110,    63,    37,    38,   111,   111,   111,   111,   111,   111,
     111,   111,    38,    34,    38,    16,    41,    12,   115,    78,
      80,    94,    74,    38,   105,    41,    39,    74,    37,    39,
      41,    42,   110,    74,    74,   112,    19,    21,    90,    91,
      92,    36,    39,    94,    39,    74,    12,    12,    39,    38,
     108,    39,    39,    37,    36,    35,    39,    21,    91,   112,
      39,    74,    38,   111,    74,    35,    37,    39,    74,    37,
      74,    39,    35,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    81,
      81,    82,    83,    83,    84,    85,    86,    87,    88,    89,
      90,    90,    91,    91,    92,    93,    94,    94,    94,    94,
      95,    95,    96,    96,    96,    97,    97,    97,    98,    98,
      99,    99,    99,   100,   100,   101,   101,   102,   102,   102,
     102,   103,   103,   104,   104,   105,   105,   105,   105,   105,
     106,   107,   107,   108,   108,   109,   109,   110,   111,   111,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   114,   115,   115,   115,   115,   115,   116,   116,
     116,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       6,     1,     1,     1,     2,     1,     2,     1,     2,     2,
       3,     7,     1,     2,     7,     4,    10,     7,     8,     7,
       4,     3,     1,     2,     6,     3,     7,     6,     6,     5,
       2,     3,     2,     4,     4,     1,     1,     1,     1,     1,
       4,     3,     3,     4,     3,     1,     3,     5,     3,     3,
       1,     1,     1,     3,     4,     1,     1,     1,     1,     1,
       3,     2,     6,     1,     3,     4,     3,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       1,     1,     4,     1,     1,     1,     4,     1,     2,     2,
       2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 27:
#line 86 "parsertest.y" /* yacc.c:1646  */
    {printf("if is working \n");}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 101 "parsertest.y" /* yacc.c:1646  */
    {printf("for loop is working \n");}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 105 "parsertest.y" /* yacc.c:1646  */
    {printf("WHILE loop is working \n");}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 109 "parsertest.y" /* yacc.c:1646  */
    {printf("DO WHILE loop is working \n");}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 113 "parsertest.y" /* yacc.c:1646  */
    {printf("SWITCH loop is working \n");}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 138 "parsertest.y" /* yacc.c:1646  */
    {printf("Variavle Declaration is working \n");}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 169 "parsertest.y" /* yacc.c:1646  */
    {printf("Variable Assign is working \n")}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 185 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression AND \n");}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 186 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression OR \n");}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 187 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression GREATER_THAN \n");}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 188 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression GREATER_THAN_EQUAL \n");}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 189 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression SMALLER_THAN \n");}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 190 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression SMALLER_THAN_EQUAL \n");}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 191 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression EQUAL_EQUAL  \n");}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 192 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression NOT_EQUAL \n");}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 208 "parsertest.y" /* yacc.c:1646  */
    {printf("Casting");}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1688 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 221 "parsertest.y" /* yacc.c:1906  */

#include"lex.yy.c"

void yyerror(char * s){
	fprintf(stderr,"%s\n",s);
}

int main(void) {
  //yylex();
   return yyparse();
}
