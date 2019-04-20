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
    SINGLE_QUOTE = 285,
    DOUBLE_QUOTE = 286,
    SEMI_COLON = 287,
    COLON = 288,
    OBRACKET = 289,
    CBRACKET = 290,
    OBRACE = 291,
    CBRACE = 292,
    OSQ_BRACKET = 293,
    CSQ_BRACKET = 294,
    COMMA = 295,
    TWO_DOTS = 296,
    DOT = 297,
    TRUE = 298,
    FALSE = 299,
    AND = 300,
    OR = 301,
    EQUAL_EQUAL = 302,
    NOT_EQUAL = 303,
    GREATER_THAN = 304,
    GREATER_THAN_EQUAL = 305,
    SMALLER_THAN = 306,
    SMALLER_THAN_EQUAL = 307,
    NOT = 308,
    REMAINDER = 309,
    PLUS_EQUAL = 310,
    MINUS_EQUAL = 311,
    MULTIPLY_EQUAL = 312,
    DIVIDE_EQUAL = 313,
    PLUS_PLUS = 314,
    MINUS_MINUS = 315,
    EQUAL = 316,
    CONST = 317,
    VOID = 318,
    MINUS = 319,
    PLUS = 320,
    DIVIDE = 321,
    MULTIPLY = 322,
    POWER = 323
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
#define SINGLE_QUOTE 285
#define DOUBLE_QUOTE 286
#define SEMI_COLON 287
#define COLON 288
#define OBRACKET 289
#define CBRACKET 290
#define OBRACE 291
#define CBRACE 292
#define OSQ_BRACKET 293
#define CSQ_BRACKET 294
#define COMMA 295
#define TWO_DOTS 296
#define DOT 297
#define TRUE 298
#define FALSE 299
#define AND 300
#define OR 301
#define EQUAL_EQUAL 302
#define NOT_EQUAL 303
#define GREATER_THAN 304
#define GREATER_THAN_EQUAL 305
#define SMALLER_THAN 306
#define SMALLER_THAN_EQUAL 307
#define NOT 308
#define REMAINDER 309
#define PLUS_EQUAL 310
#define MINUS_EQUAL 311
#define MULTIPLY_EQUAL 312
#define DIVIDE_EQUAL 313
#define PLUS_PLUS 314
#define MINUS_MINUS 315
#define EQUAL 316
#define CONST 317
#define VOID 318
#define MINUS 319
#define PLUS 320
#define DIVIDE 321
#define MULTIPLY 322
#define POWER 323

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

#line 265 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 282 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   419

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  255

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

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
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    57,    59,    59,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    73,    75,    75,    77,    77,
      78,    78,    81,    82,    83,    84,    86,    88,    88,    90,
      92,    96,   100,   104,   108,   110,   110,   112,   112,   114,
     118,   119,   120,   121,   123,   124,   126,   126,   126,   130,
     131,   132,   134,   134,   136,   137,   138,   140,   141,   143,
     144,   146,   147,   148,   149,   151,   151,   153,   154,   156,
     156,   156,   156,   156,   159,   161,   162,   164,   165,   167,
     167,   170,   172,   173,   174,   175,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   200,   201,   202,   203,
     204,   205,   208,   209,   210,   211
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
  "CLASS", "FUNC", "SINGLE_QUOTE", "DOUBLE_QUOTE", "SEMI_COLON", "COLON",
  "OBRACKET", "CBRACKET", "OBRACE", "CBRACE", "OSQ_BRACKET", "CSQ_BRACKET",
  "COMMA", "TWO_DOTS", "DOT", "TRUE", "FALSE", "AND", "OR", "EQUAL_EQUAL",
  "NOT_EQUAL", "GREATER_THAN", "GREATER_THAN_EQUAL", "SMALLER_THAN",
  "SMALLER_THAN_EQUAL", "NOT", "REMAINDER", "PLUS_EQUAL", "MINUS_EQUAL",
  "MULTIPLY_EQUAL", "DIVIDE_EQUAL", "PLUS_PLUS", "MINUS_MINUS", "EQUAL",
  "CONST", "VOID", "MINUS", "PLUS", "DIVIDE", "MULTIPLY", "POWER",
  "$accept", "Root", "Program", "statements", "statement", "classstmt",
  "var_decs", "vars", "funcs", "ifstmts", "ifstmt", "elifs", "elifstmt",
  "elsestmt", "forstmt", "whilestmt", "dowhilestmt", "switchstmt",
  "switchcases", "caselist", "case", "Func_Dec", "Args", "Args_list",
  "declerations", "assignments", "Var_Dec", "Arr_Dec", "Expr_list",
  "Array_Assign", "super_data_type", "array_data_type", "Data_Type",
  "Assign", "generic_assign", "identifier_list", "func_call", "Expr",
  "DataVAL", "LOG_EXPR", "MATH_EXPR", "Casting", "MATH_CALC", "UniaryEXP", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF -124

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-124)))

#define YYTABLE_NINF -112

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      74,  -124,  -124,  -124,  -124,  -124,    80,   -11,     1,     4,
       7,    29,    32,    62,   409,    81,  -124,  -124,    74,  -124,
    -124,   111,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,    86,     2,    68,  -124,    43,  -124,    41,   104,
      86,   131,   131,    16,   113,    74,   112,   116,   323,   136,
      86,     2,  -124,  -124,   119,   120,   124,   145,  -124,   128,
     138,   110,     9,   141,    61,  -124,   213,  -124,   150,   149,
    -124,  -124,  -124,  -124,    71,   201,  -124,  -124,   255,   168,
     180,  -124,  -124,   297,  -124,    95,  -124,  -124,   315,   409,
     131,    86,   159,   162,   107,   192,  -124,    97,     8,    74,
     160,  -124,   165,   182,   183,   151,   131,    74,  -124,  -124,
    -124,    17,   177,  -124,  -124,  -124,   131,   236,   131,   273,
    -124,   359,  -124,   158,   217,  -124,  -124,   188,   324,   409,
    -124,  -124,  -124,   190,   255,   255,   255,   255,   255,   255,
     255,   255,   117,   117,   117,   117,   117,   117,   191,    86,
     261,   193,   216,  -124,    44,  -124,  -124,    74,   197,  -124,
     409,  -124,   198,   202,    74,  -124,  -124,   333,   203,   204,
    -124,  -124,   209,   210,   131,   219,   175,  -124,    74,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,    74,   131,    13,   208,  -124,    90,  -124,
     212,    74,   240,   243,  -124,   226,   229,  -124,  -124,    86,
    -124,  -124,    63,  -124,   232,   234,   342,   257,   259,   260,
     295,   275,   131,  -124,  -124,  -124,   280,  -124,  -124,  -124,
      74,  -124,  -124,  -124,   294,   255,    74,  -124,   301,  -124,
     351,  -124,   298,    74,   316,  -124,    74,  -124,  -124,   299,
     319,  -124,  -124,    74,  -124
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    69,    71,    70,    73,    72,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,    14,
       7,    22,     8,    10,     9,    11,    51,     6,    12,    49,
      50,    52,     0,     0,     0,    53,    64,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     5,     0,     0,    24,    27,    23,    77,
       0,    64,     0,     0,     0,    75,     0,    80,     0,     0,
      78,   107,   108,    82,   109,     0,    83,    84,     0,     0,
       0,   111,    95,     0,    85,    97,   105,   104,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,     0,
       0,    65,    66,     0,     0,     0,     0,     0,    25,    28,
      58,     0,     0,    67,    55,    56,     0,    62,     0,    63,
      74,    81,    79,     0,     0,   112,   113,     0,     0,     0,
      94,   114,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,    16,    17,     0,     0,    45,
       0,    46,     0,     0,     0,    57,    54,     0,     0,    62,
      63,    68,     0,    59,     0,     0,     0,    96,     0,    86,
      87,    92,    93,    88,    89,    90,    91,   102,    98,    99,
     100,   101,   103,     0,     0,     0,     0,    19,     0,    20,
       0,     0,     0,     0,    43,     0,     0,    30,    61,     0,
      76,   110,   109,   106,     0,     0,     0,     0,     0,     0,
       0,    37,     0,    15,    21,    41,     0,    48,    47,    42,
       0,    60,    26,    32,     0,     0,     0,    34,     0,    38,
       0,    40,     0,     0,     0,    36,     0,    33,    29,     0,
       0,    35,    31,     0,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,  -124,   -12,  -124,  -124,   199,  -124,  -124,  -124,
    -124,   300,  -124,   339,  -124,  -124,  -124,  -124,  -124,   134,
    -124,  -123,   307,  -124,  -124,  -124,   -38,   -83,  -124,   -25,
     318,   -10,    -6,   -21,  -124,   -23,     0,  -102,   -77,   -39,
     133,  -124,   242,  -124
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,   153,   154,   198,    20,
      21,    56,    57,    58,    22,    23,    24,    25,   219,   220,
     221,    26,    49,    97,    27,    28,    29,    30,   172,    31,
     100,    32,    33,    34,    35,    36,    81,   120,    82,   121,
      84,    85,    86,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,   130,    83,    88,    50,    90,    53,    60,    51,    61,
      64,   156,    63,   112,    59,    68,   173,    70,    37,     1,
     161,     2,     3,    41,     4,   103,     5,    61,   105,   169,
     104,   199,   217,    93,   218,    42,   128,    91,    43,   101,
      62,    44,    98,   102,    46,    37,   162,     1,   113,     2,
       3,   150,     4,    59,     5,   118,   155,   179,   180,   181,
     182,   183,   184,   185,   186,    45,   119,   167,    64,   127,
      63,   156,   210,    13,    47,   224,    67,     1,    89,     2,
       3,    52,     4,   149,     5,   101,     6,   163,     7,   102,
       8,     9,    10,   115,    11,   168,    48,    38,    59,    37,
      65,   124,    12,    13,    66,    38,    14,    37,    69,   124,
       1,   170,     2,     3,    38,     4,   155,     5,    39,    13,
      40,    71,   116,   127,    72,    92,   105,   223,   104,    74,
     125,   126,   159,    54,    55,    71,    14,   160,    72,     1,
      73,     2,     3,    74,     4,   200,     5,    55,    94,   142,
      48,   129,   205,   106,   202,   216,   107,    37,   244,   143,
     144,   145,   146,   147,    37,    75,   214,    54,    40,    14,
     110,   111,    99,   114,    76,    77,    79,    80,    37,    71,
     131,   215,    72,   240,    78,   122,   231,   212,   123,   226,
      79,    80,   132,    37,   151,     1,   164,     2,     3,   152,
       4,    37,     5,    62,     1,    71,     2,     3,    72,     4,
      73,     5,   116,    74,   165,   166,   171,    71,   242,   174,
      72,   175,    73,   176,   245,   117,   178,   193,   157,   195,
      37,   249,   196,   201,   251,    75,    37,   203,    38,   204,
     207,   254,   222,    37,    76,    77,    37,    75,   208,   225,
     209,   118,   227,    37,    78,   228,    76,    77,   211,    71,
      79,    80,    72,   229,    73,   230,    78,    74,  -109,   232,
      38,   233,    79,    80,   124,   187,   188,   189,   190,   191,
     192,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,   129,
    -109,   235,   236,   194,   217,   125,   126,   237,    76,    77,
    -109,  -109,  -109,  -109,  -109,  -111,   134,   135,   136,   137,
     138,   139,   140,   141,    79,    80,   238,   241,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,     1,  -111,     2,     3,
     243,     4,   133,     5,   246,   248,   252,  -111,  -111,  -111,
    -111,  -111,   134,   135,   136,   137,   138,   139,   140,   141,
     148,   250,   253,   197,    95,   239,     0,   109,    96,   177,
     134,   135,   136,   137,   138,   139,   140,   141,   206,   134,
     135,   136,   137,   138,   139,   140,   141,   234,   134,   135,
     136,   137,   138,   139,   140,   141,   247,   134,   135,   136,
     137,   138,   139,   140,   141,   108,   134,   135,   136,   137,
     138,   139,   140,   141,   134,   135,   136,   137,   138,   139,
     140,   141,     1,   158,     2,     3,     0,     4,   213,     5
};

static const yytype_int16 yycheck[] =
{
       0,    78,    41,    42,    14,    43,    18,    32,    14,    32,
      33,    94,    33,     4,    12,    38,   118,    40,    18,     3,
      12,     5,     6,    34,     8,    50,    10,    50,    51,    12,
      51,   154,    19,    45,    21,    34,    75,    43,    34,    49,
      38,    34,    48,    49,    12,    45,    38,     3,    39,     5,
       6,    90,     8,    12,    10,    38,    94,   134,   135,   136,
     137,   138,   139,   140,   141,    36,    66,   106,    91,    75,
      91,   154,   174,    29,    12,   198,    35,     3,    62,     5,
       6,     0,     8,    89,    10,    95,    12,    99,    14,    95,
      16,    17,    18,    32,    20,   107,    34,    34,    12,    99,
      32,    38,    28,    29,    61,    34,    62,   107,     4,    38,
       3,   111,     5,     6,    34,     8,   154,    10,    38,    29,
      40,     4,    61,   129,     7,    12,   149,    37,   149,    12,
      59,    60,    35,    22,    23,     4,    62,    40,     7,     3,
       9,     5,     6,    12,     8,   157,    10,    23,    36,    54,
      34,    34,   164,    34,   160,   194,    36,   157,   235,    64,
      65,    66,    67,    68,   164,    34,   178,    22,    40,    62,
      32,    61,    36,    32,    43,    44,    59,    60,   178,     4,
      12,   193,     7,   222,    53,    35,   209,    12,    39,   201,
      59,    60,    12,   193,    35,     3,    36,     5,     6,    37,
       8,   201,    10,    38,     3,     4,     5,     6,     7,     8,
       9,    10,    61,    12,    32,    32,    39,     4,   230,    61,
       7,     4,     9,    35,   236,    12,    36,    36,    36,    36,
     230,   243,    16,    36,   246,    34,   236,    39,    34,    37,
      37,   253,    34,   243,    43,    44,   246,    34,    39,    37,
      40,    38,    12,   253,    53,    12,    43,    44,    39,     4,
      59,    60,     7,    37,     9,    36,    53,    12,    32,    37,
      34,    37,    59,    60,    38,   142,   143,   144,   145,   146,
     147,    45,    46,    47,    48,    49,    50,    51,    52,    34,
      54,    34,    33,    32,    19,    59,    60,    37,    43,    44,
      64,    65,    66,    67,    68,    32,    45,    46,    47,    48,
      49,    50,    51,    52,    59,    60,    21,    37,    45,    46,
      47,    48,    49,    50,    51,    52,     3,    54,     5,     6,
      36,     8,    35,    10,    33,    37,    37,    64,    65,    66,
      67,    68,    45,    46,    47,    48,    49,    50,    51,    52,
      35,    35,    33,   154,    47,   221,    -1,    57,    35,    35,
      45,    46,    47,    48,    49,    50,    51,    52,    35,    45,
      46,    47,    48,    49,    50,    51,    52,    35,    45,    46,
      47,    48,    49,    50,    51,    52,    35,    45,    46,    47,
      48,    49,    50,    51,    52,    56,    45,    46,    47,    48,
      49,    50,    51,    52,    45,    46,    47,    48,    49,    50,
      51,    52,     3,    95,     5,     6,    -1,     8,   176,    10
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,    10,    12,    14,    16,    17,
      18,    20,    28,    29,    62,    70,    71,    72,    73,    74,
      78,    79,    83,    84,    85,    86,    90,    93,    94,    95,
      96,    98,   100,   101,   102,   103,   104,   105,    34,    38,
      40,    34,    34,    34,    34,    36,    12,    12,    34,    91,
     100,   101,     0,    72,    22,    23,    80,    81,    82,    12,
      98,   104,    38,   102,   104,    32,    61,    35,   104,     4,
     104,     4,     7,     9,    12,    34,    43,    44,    53,    59,
      60,   105,   107,   108,   109,   110,   111,   112,   108,    62,
      95,   101,    12,    72,    36,    91,    35,    92,   101,    36,
      99,   100,   101,    98,   102,   104,    34,    36,    82,    80,
      32,    61,     4,    39,    32,    32,    61,    12,    38,   105,
     106,   108,    35,    39,    38,    59,    60,   101,   108,    34,
     107,    12,    12,    35,    45,    46,    47,    48,    49,    50,
      51,    52,    54,    64,    65,    66,    67,    68,    35,   101,
     108,    35,    37,    75,    76,    95,    96,    36,    99,    35,
      40,    12,    38,    72,    36,    32,    32,   108,    72,    12,
     105,    39,    97,   106,    61,     4,    35,    35,    36,   107,
     107,   107,   107,   107,   107,   107,   107,   109,   109,   109,
     109,   109,   109,    36,    32,    36,    16,    75,    77,    90,
      72,    36,   101,    39,    37,    72,    35,    37,    39,    40,
     106,    39,    12,   111,    72,    72,   108,    19,    21,    87,
      88,    89,    34,    37,    90,    37,    72,    12,    12,    37,
      36,   104,    37,    37,    35,    34,    33,    37,    21,    88,
     108,    37,    72,    36,   107,    72,    33,    35,    37,    72,
      35,    72,    37,    33,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    78,    78,    79,    80,    80,    81,
      82,    83,    84,    85,    86,    87,    87,    88,    88,    89,
      90,    90,    90,    90,    91,    91,    92,    92,    92,    93,
      93,    93,    94,    94,    95,    95,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    99,    99,   100,   100,   101,
     101,   101,   101,   101,   102,   103,   103,   104,   104,   105,
     105,   106,   107,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   109,   109,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   112,   112,   112,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     1,     1,     1,     2,
       1,     2,     1,     2,     2,     3,     7,     1,     2,     7,
       4,    10,     7,     8,     7,     4,     3,     1,     2,     6,
       7,     6,     6,     5,     2,     3,     2,     4,     4,     1,
       1,     1,     1,     1,     4,     3,     3,     4,     3,     1,
       3,     5,     3,     3,     1,     1,     1,     3,     4,     1,
       1,     1,     1,     1,     3,     2,     6,     1,     3,     4,
       3,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     1,     4,     1,     1,     1,
       4,     1,     2,     2,     2,     2
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
        case 22:
#line 81 "parsertest.y" /* yacc.c:1646  */
    {printf("if is working \n");}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 96 "parsertest.y" /* yacc.c:1646  */
    {printf("for loop is working \n");}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 100 "parsertest.y" /* yacc.c:1646  */
    {printf("WHILE loop is working \n");}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 104 "parsertest.y" /* yacc.c:1646  */
    {printf("DO WHILE loop is working \n");}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 108 "parsertest.y" /* yacc.c:1646  */
    {printf("SWITCH loop is working \n");}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 130 "parsertest.y" /* yacc.c:1646  */
    {printf("Variavle Declaration is working \n");}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 161 "parsertest.y" /* yacc.c:1646  */
    {printf("Variable Assign is working \n")}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 177 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression AND \n");}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 178 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression OR \n");}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 179 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression GREATER_THAN \n");}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 180 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression GREATER_THAN_EQUAL \n");}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 181 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression SMALLER_THAN \n");}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 182 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression SMALLER_THAN_EQUAL \n");}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 183 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression EQUAL_EQUAL  \n");}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 184 "parsertest.y" /* yacc.c:1646  */
    {printf("Logical expression NOT_EQUAL \n");}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 200 "parsertest.y" /* yacc.c:1646  */
    {printf("Casting");}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1669 "y.tab.c" /* yacc.c:1646  */
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
#line 213 "parsertest.y" /* yacc.c:1906  */

#include"lex.yy.c"

void yyerror(char * s){
	fprintf(stderr,"%s\n",s);
}

int main(void) {
  //yylex();
   return yyparse();
}
