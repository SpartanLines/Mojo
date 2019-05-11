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
#line 2 "parser.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
        #include "LinkedList.h"
	#define YYDEBUG 1

        int yyerror(char *);
int yyerrorvar(char *s, char *var);
int yylex(void);
void ftoa(float n,char res[], int afterpoint);
int yylineno;
FILE * f1;
FILE * f2; 
FILE * yyin;
nodeType *opr(int oper, int nops, ...); 
nodeType *id(int index,int type,permission state,int scope,char* name); 
nodeType *con(char* value,int type); 
nodeType * getId(char * name, int brace);
void freeNode(nodeType *p); 
int ex(nodeType *p); 

  int yylex(void);

int indexCount=0;
int scope=0;


#line 96 "y.tab.c" /* yacc.c:339  */

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
#line 33 "parser.y" /* yacc.c:355  */

	int intValue;	    /* integer value */
	float floatValue;    /* float value */
	char charValue;    /* char value */
	char* stringValue;    /* string value*/
	char* identifier;       /* identifier name */
	char* comment;
        nodeType *nPtr;

#line 286 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 303 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   322

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

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
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    76,    78,    79,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    95,    98,
     100,   101,   103,   104,   105,   106,   109,   110,   111,   112,
     114,   116,   116,   118,   120,   122,   126,   130,   134,   138,
     140,   141,   143,   144,   146,   149,   153,   154,   155,   156,
     158,   159,   161,   162,   163,   167,   168,   169,   175,   176,
     177,   178,   180,   181,   183,   184,   186,   187,   188,   189,
     191,   191,   193,   194,   196,   197,   198,   199,   200,   208,
     209,   211,   212,   215,   217,   218,   219,   220,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   238,
     239,   240,   241,   242,   243,   244,   245,   247,   250,   251,
     252,   257,   258
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
  "elsestmt", "scopeIncr", "forstmt", "whilestmt", "dowhilestmt",
  "switchstmt", "switchcases", "caselist", "case", "blockstmt", "Func_Dec",
  "Args", "Args_list", "declerations", "Var_Dec", "Arr_Dec", "Expr_list",
  "Array_Assign", "super_data_type", "array_data_type", "Data_Type",
  "identifier_list", "func_call", "Expr", "DataVAL", "LOG_EXPR",
  "MATH_EXPR", "Casting", "MATH_CALC", "UniaryEXP", YY_NULLPTR
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

#define YYPACT_NINF -161

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-161)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     179,  -161,  -161,  -161,  -161,  -161,    -7,     8,    18,    61,
      66,    71,    80,   110,    31,  -161,  -161,  -161,   239,   123,
    -161,  -161,   179,  -161,  -161,  -161,    53,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,   112,    20,  -161,     0,
      26,    26,    26,    16,   119,   179,  -161,  -161,  -161,    51,
    -161,  -161,  -161,  -161,    91,  -161,  -161,    92,    97,   140,
      90,   179,   112,    46,  -161,  -161,    99,   100,   116,   120,
    -161,   102,   115,    88,   -18,     1,  -161,   117,    26,    80,
    -161,  -161,   245,   176,   185,    93,   239,    26,   141,   126,
     134,  -161,  -161,   125,   125,   125,   125,   125,   125,    47,
      98,  -161,    57,    65,   179,   124,  -161,   138,   135,   145,
     127,    26,   179,  -161,  -161,   112,  -161,    67,  -161,    26,
     139,  -161,  -161,   203,  -161,    80,    80,    80,    80,    80,
      80,    80,    80,   143,   148,   180,   118,   156,   182,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,     5,  -161,  -161,   179,
     162,  -161,   239,  -161,   160,   163,   179,  -161,  -161,    26,
     211,   165,  -161,   169,    26,  -161,   177,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,   179,  -161,    26,
    -161,   178,  -161,     7,  -161,   181,   179,   206,   207,  -161,
     192,   212,   235,  -161,   200,   233,  -161,   261,   179,   229,
      64,  -161,  -161,  -161,  -161,   262,  -161,  -161,  -161,  -161,
     179,  -161,   112,  -161,   263,   265,   268,   270,   267,   286,
     289,    26,  -161,   271,  -161,  -161,  -161,    80,   179,  -161,
     274,  -161,   237,  -161,   179,   275,  -161,   179,  -161,   272,
     278,  -161,  -161,   179,  -161
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    74,    76,    75,    78,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,    35,     0,     0,
       2,     3,     4,    16,    13,     7,    26,     8,    10,     9,
      11,    17,    57,     6,    55,    56,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,   108,   109,    84,   110,
      85,    86,    18,    87,    99,   107,   106,     0,     0,     0,
       0,     0,     0,     0,     1,     5,     0,     0,    28,    31,
      27,    79,     0,    69,     0,     0,    82,     0,     0,     0,
      60,    97,    83,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   112,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,    70,    71,     0,     0,
       0,     0,     0,    29,    32,     0,    63,     0,    61,     0,
       0,    72,    81,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     100,   101,   102,   103,   105,    22,     0,    20,    21,     0,
       0,    51,     0,    52,     0,     0,     0,    45,    62,     0,
       0,     0,    80,    67,     0,    68,     0,    73,    98,    88,
      89,    94,    95,    90,    91,    92,    93,     0,    35,     0,
      35,     0,    23,     0,    24,     0,     0,     0,     0,    49,
       0,     0,     0,    34,     0,    64,    59,     0,     0,     0,
       0,    35,    19,    25,    47,     0,    54,    53,    48,    58,
       0,    66,     0,    30,     0,     0,     0,     0,     0,     0,
      42,     0,    46,     0,    65,    37,    35,     0,     0,    39,
       0,    43,     0,    33,     0,     0,    41,     0,    38,     0,
       0,    40,    36,     0,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,  -161,   -22,  -161,  -161,  -161,   168,  -161,  -161,
    -161,  -161,   246,  -161,   248,  -160,  -161,  -161,  -161,  -161,
    -161,   101,  -161,  -161,  -119,   259,  -161,  -161,   -36,   -85,
    -161,   256,   219,    -9,   -12,   -37,   205,   -94,   -11,   -38,
     174,  -161,  -161,  -161
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    24,   145,   146,   183,
      25,    26,    68,    69,    70,    61,    27,    28,    29,    30,
     218,   219,   220,    31,    32,    60,   102,    33,    34,    35,
     194,    72,   105,    36,    37,    73,    38,    80,    81,    82,
      53,    54,    55,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      65,    52,    77,    83,    84,   120,    63,    87,     1,    62,
       2,     3,    71,     4,   148,     5,   118,    85,   198,     1,
     200,     2,     3,    90,     4,   166,     5,   184,    85,    39,
      46,    88,    74,    47,    14,    48,    14,    76,    49,   108,
     123,   221,   121,    58,    41,   119,   202,   103,   107,   136,
       1,   106,     2,     3,    42,     4,    40,     5,   110,    85,
      75,   148,    78,   147,   203,   191,   234,    59,   124,    18,
     195,    50,    51,   160,   135,    66,    67,   153,   162,   163,
      86,    79,   155,   216,    46,   217,    75,    47,   107,    48,
     161,   106,    49,     1,   151,     2,     3,    43,     4,   152,
       5,     1,    44,     2,     3,   154,     4,   164,     5,    45,
     147,    18,    91,    92,   169,   170,   171,   172,   173,   174,
     175,   176,    57,    64,    71,    50,    51,   185,   104,    46,
      99,    89,    47,    59,   190,   111,   149,    49,   112,    67,
     187,   199,    66,     1,   115,     2,     3,    93,     4,   116,
       5,   117,   179,    74,   122,   197,    40,    94,    95,    96,
      97,    98,   156,   137,   205,   125,   126,   127,   128,   129,
     130,   131,   132,   138,   157,   224,   214,   101,    75,   158,
     167,   177,     1,   232,     2,     3,   178,     4,   223,     5,
     159,     6,   110,     7,   180,     8,     9,    10,   181,    11,
     186,   188,   189,    12,   193,    39,   236,    13,    14,    15,
      16,   196,   239,   133,   201,   241,   235,    17,   206,   207,
     204,   244,   134,   125,   126,   127,   128,   129,   130,   131,
     132,   208,   125,   126,   127,   128,   129,   130,   131,   132,
     168,   211,     1,    18,     2,     3,   209,     4,   192,     5,
     125,   126,   127,   128,   129,   130,   131,   132,   125,   126,
     127,   128,   129,   130,   131,   132,   215,   139,   140,   141,
     142,   143,   144,   210,   238,   212,   125,   126,   127,   128,
     129,   130,   131,   132,   125,   126,   127,   128,   129,   130,
     131,   132,   125,   126,   127,   128,   129,   130,   131,   132,
     213,   222,   225,   226,   227,   228,   229,   230,   216,   237,
     233,   242,   240,   243,   182,   114,   113,   100,   109,   150,
       0,   231,   165
};

static const yytype_int16 yycheck[] =
{
      22,    12,    39,    41,    42,     4,    18,    43,     3,    18,
       5,     6,    12,     8,    99,    10,    34,    12,   178,     3,
     180,     5,     6,    45,     8,   119,    10,   146,    12,    36,
       4,    43,    12,     7,    29,     9,    29,    37,    12,    61,
      78,   201,    41,    12,    36,    63,    39,    59,    60,    87,
       3,    60,     5,     6,    36,     8,    63,    10,    12,    12,
      40,   146,    36,    99,   183,   159,   226,    36,    79,    64,
     164,    45,    46,   111,    86,    22,    23,    12,   115,    12,
      64,    55,   104,    19,     4,    21,    40,     7,   100,     9,
     112,   100,    12,     3,    37,     5,     6,    36,     8,    42,
      10,     3,    36,     5,     6,    40,     8,    40,    10,    38,
     146,    64,    61,    62,   125,   126,   127,   128,   129,   130,
     131,   132,    12,     0,    12,    45,    46,   149,    38,     4,
      38,    12,     7,    36,   156,    36,    38,    12,    38,    23,
     152,   179,    22,     3,    42,     5,     6,    56,     8,    34,
      10,    63,    34,    12,    37,   177,    63,    66,    67,    68,
      69,    70,    38,    37,   186,    47,    48,    49,    50,    51,
      52,    53,    54,    39,    39,   212,   198,    37,    40,    34,
      41,    38,     3,   221,     5,     6,    38,     8,   210,    10,
      63,    12,    12,    14,    38,    16,    17,    18,    16,    20,
      38,    41,    39,    24,    39,    36,   228,    28,    29,    30,
      31,    34,   234,    37,    36,   237,   227,    38,    12,    12,
      39,   243,    37,    47,    48,    49,    50,    51,    52,    53,
      54,    39,    47,    48,    49,    50,    51,    52,    53,    54,
      37,    41,     3,    64,     5,     6,    34,     8,    37,    10,
      47,    48,    49,    50,    51,    52,    53,    54,    47,    48,
      49,    50,    51,    52,    53,    54,    37,    93,    94,    95,
      96,    97,    98,    38,    37,    42,    47,    48,    49,    50,
      51,    52,    53,    54,    47,    48,    49,    50,    51,    52,
      53,    54,    47,    48,    49,    50,    51,    52,    53,    54,
      39,    39,    39,    38,    36,    35,    39,    21,    19,    35,
      39,    39,    37,    35,   146,    69,    68,    58,    62,   100,
      -1,   220,   117
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,    10,    12,    14,    16,    17,
      18,    20,    24,    28,    29,    30,    31,    38,    64,    72,
      73,    74,    75,    76,    77,    81,    82,    87,    88,    89,
      90,    94,    95,    98,    99,   100,   104,   105,   107,    36,
      63,    36,    36,    36,    36,    38,     4,     7,     9,    12,
      45,    46,   109,   111,   112,   113,   114,    12,    12,    36,
      96,    86,   104,   105,     0,    74,    22,    23,    83,    84,
      85,    12,   102,   106,    12,    40,    37,   106,    36,    55,
     108,   109,   110,   110,   110,    12,    64,    99,   105,    12,
      74,    61,    62,    56,    66,    67,    68,    69,    70,    38,
      96,    37,    97,   105,    38,   103,   104,   105,    74,   102,
      12,    36,    38,    85,    83,    42,    34,    63,    34,    63,
       4,    41,    37,   110,   109,    47,    48,    49,    50,    51,
      52,    53,    54,    37,    37,   105,   110,    37,    39,   111,
     111,   111,   111,   111,   111,    78,    79,    99,   100,    38,
     103,    37,    42,    12,    40,    74,    38,    39,    34,    63,
     110,    74,   106,    12,    40,   107,   108,    41,    37,   109,
     109,   109,   109,   109,   109,   109,   109,    38,    38,    34,
      38,    16,    78,    80,    95,    74,    38,   105,    41,    39,
      74,   108,    37,    39,   101,   108,    34,    74,    86,   110,
      86,    36,    39,    95,    39,    74,    12,    12,    39,    34,
      38,    41,    42,    39,    74,    37,    19,    21,    91,    92,
      93,    86,    39,    74,   106,    39,    38,    36,    35,    39,
      21,    92,   110,    39,    86,   109,    74,    35,    37,    74,
      37,    74,    39,    35,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    77,
      78,    78,    79,    79,    80,    80,    81,    81,    81,    81,
      82,    83,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    91,    92,    92,    93,    94,    95,    95,    95,    95,
      96,    96,    97,    97,    97,    98,    98,    98,    99,    99,
      99,    99,   100,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   104,   104,   105,   105,   105,   105,   105,   106,
     106,   107,   107,   108,   109,   109,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   111,
     111,   111,   111,   111,   111,   111,   111,   112,   113,   113,
     113,   114,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     6,
       1,     1,     1,     2,     1,     2,     1,     2,     2,     3,
       7,     1,     2,     7,     4,     0,    11,     8,     9,     8,
       4,     3,     1,     2,     6,     4,     7,     6,     6,     5,
       2,     3,     2,     4,     4,     1,     1,     1,     6,     5,
       3,     3,     4,     3,     1,     3,     5,     3,     3,     1,
       1,     1,     3,     4,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     2,     2
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
        case 4:
#line 78 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 79 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(SEMI_COLON,2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 82 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=NULL;}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 83 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=NULL;}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 84 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=NULL;}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 85 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=NULL;}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 86 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 87 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=NULL;}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 88 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=NULL;}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 89 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(BREAK,0);}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 90 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(CONTINUE,0);}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 91 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 92 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 95 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(RETURN,1,(yyvsp[0].nPtr));}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf("if is working \n");}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 122 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=NULL;scope++;}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 126 "parser.y" /* yacc.c:1646  */
    {printf("for loop is working \n");}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 130 "parser.y" /* yacc.c:1646  */
    {printf("WHILE loop is working \n");}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("DO WHILE loop is working \n");}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(SWITCH,2,getId((yyvsp[-5].identifier),scope),(yyvsp[-1].nPtr));scope--;}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 140 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(SEMI_COLON,2,(yyvsp[-3].nPtr),opr(DEFAULT,1,(yyvsp[0].nPtr)));}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 141 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(DEFAULT,1,(yyvsp[0].nPtr));}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 143 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 144 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(SEMI_COLON,2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 146 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(CASE,2,(yyvsp[-3].nPtr),(yyvsp[0].nPtr));}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 149 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(OBRACE,1,(yyvsp[-1].nPtr));scope--;}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=NULL;}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 169 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=NULL;}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 175 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(EQUAL,2,id(indexCount,(yyvsp[-4].intValue)+5,Valid,scope,(yyvsp[-3].identifier)),(yyvsp[-1].nPtr));indexCount++;}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 176 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(EQUAL,2,id(indexCount,(yyvsp[-4].intValue),Valid,scope,(yyvsp[-3].identifier)),(yyvsp[-1].nPtr));indexCount++;}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(EQUAL,2,getId((yyvsp[-2].identifier),scope),(yyvsp[0].nPtr));}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=id(indexCount,(yyvsp[-2].intValue),Valid,scope,(yyvsp[-1].identifier));indexCount++;}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 196 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=0;}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=1;}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=4;}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=2;}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=3;}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 215 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 217 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=con((yyvsp[0].charValue),3);}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 218 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=con("true",4);}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 219 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=con("false",4);}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 223 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(AND,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 224 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(OR,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 225 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(GREATER_THAN,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 226 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(GREATER_THAN_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 227 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(SMALLER_THAN,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 228 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(SMALLER_THAN_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(EQUAL_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 230 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(NOT_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(NOT,1,(yyvsp[0].nPtr));}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 232 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 233 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[-1].nPtr);}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 238 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 239 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(MINUS,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 240 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(PLUS,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 241 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(DIVIDE,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(MULTIPLY,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 243 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(REMAINDER,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 244 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(POWER,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 245 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 250 "parser.y" /* yacc.c:1646  */
    { char c[] = {};sprintf(c,"%d",(yyvsp[0].intValue)); (yyval.nPtr) = con(c, 0); }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 251 "parser.y" /* yacc.c:1646  */
    { char c[] = {}; ftoa((yyvsp[0].floatValue), c, 6); (yyval.nPtr) = con(c, 1); }
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 252 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=getId((yyvsp[0].identifier),scope);}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 257 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(PLUS_PLUS,1,(yyvsp[-1].identifier));}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 258 "parser.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(PLUS_PLUS,1,(yyvsp[-1].identifier));}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1989 "y.tab.c" /* yacc.c:1646  */
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
#line 262 "parser.y" /* yacc.c:1906  */

nodeType *id(int index,int type,permission state,int scope,char* name){
        nodeType *p;
        if ((p = malloc(sizeof(nodeType))) == NULL)         
             yyerror("out of memory");
        if (!nameUniqueInScope(name,scope))
	{
		yyerrorvar("Identifier name already defined before in this scope",name);
	}
             p->type=typeId;  
             p->id.index = index;     
             p->id.type = type;
             p->id.state=state;
             p->id.name=strdup(name);  
        int init = 0;
        int used = 0;
        struct SymTableData * data1 = getSymTableData(type,init,used,scope,name,state);
        insertFirst(index,data1); 


             return p;

}
nodeType *getId(char* name,int scope){
        
        int index = getIndex(name,scope);

	if (index == -1)
	{
		yyerrorvar("Undeclared Variable",strdup(name));
	}
	else
	{
		nodeType *p;
		struct SymTableData * node = find(index);
	    
	    /* allocate node */
	    if ((p = malloc(sizeof(nodeType))) == NULL)         
			yyerror("out of memory");

	    /* copy information */
	    p->type = typeId;
	    
	    p->id.index = index;
	    p->id.type 	= node->symType;
	    p->id.state = node->symPerm;
	    p->id.name 	= strdup(node->symName);

	    return p;
        }
}
nodeType * con(char * value,int type){
        nodeType *p;
        if ((p = malloc(sizeof(nodeType))) == NULL)         
        yyerror("out of memory");
             /* copy information */   
             p->type=typeCon;  
             p->con.type = type;     
             p->con.value = strdup(value);     
             return p;
}
nodeType *opr(int oper, int nops, ...) {    
        va_list ap;     
        nodeType *p;     
        int i;     
        /* allocate node, extending op array */     
        if ((p = malloc(sizeof(nodeType) +(nops-1) * sizeof(nodeType *))) == NULL)
                 yyerror("out of memory");
        /* copy information */
        p->type = typeOpr;    
        p->opr.operNum = oper;     
        p->opr.nopers = nops;     
        va_start(ap, nops);
        for (i = 0; i < nops; i++) 
        p->opr.op[i] = va_arg(ap, nodeType*);
             va_end(ap);
     return p; 
     }

void freeNode(nodeType *p)
{
    int i;

    if (!p) return;
    if (p->type == typeOpr) {
        for (i = 0; i < p->opr.nopers; i++)
            freeNode(p->opr.op[i]);
    }
    free (p);
}

void reverse(char *str, int len) 
{
	int i=0, j=len-1, temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++; j--;
	}
}

int toStr(int x, char str[], int d) 
{
	int i = 0;
	while (x)
	{
		str[i++] = (x%10) + '0';
		x = x/10;
	}
 
	// If number of digits required is more, then
	// add 0s at the beginning
	while (i < d)
		str[i++] = '0';
 
	reverse(str, i);
	str[i] = '\0';
	return i;
}

void ftoa(float n, char res[], int afterpoint) 
{
	
	// Extract integer part
	int ipart = (int)n;
 
	// Extract floating part
	float fpart = n - (float)ipart;
	
 
	// convert integer part to string
	int i = toStr(ipart, res, 0);
 
	// check for display option after point
	if (afterpoint != 0)
	{
		res[i] = '.';  // add dot
 
		// Get the value of fraction part upto given no.
		// of points after dot. The third parameter is needed
		// to handle cases like 233.007
		fpart = fpart * pow(10.0, 6.0);
		toStr((int)fpart, res + i + 1, afterpoint);
	}
}

int yyerror(char *s) 
{ 
	fclose(f1);
	remove("output.txt"); 
	f1=fopen("output.txt","w");
	fprintf(f1, "Syntax Error Could not parse quadruples\n"); 
	fprintf(f1, "line number : %d %s\n", yylineno,s);    
 
 	fclose(f2);
	remove("symbol.txt");
	f2 = fopen("symbol.txt","w");
	fprintf(f2, "Syntax Error was Found\n");
 	fprintf(stderr, "line number : %d %s\n", yylineno,s);    
 
	exit(0);
}
 
int yyerrorvar(char *s, char *var) 
{
	fclose(f1);
	int x = remove("output.txt");
	f1 = fopen("output.txt","w");
	fprintf(f1, "Syntax Error Could not parse quadruples\n");
 	fprintf(f1, "line number: %d %s : %s\n", yylineno,s,var);
	
	fclose(f2);
	x = remove("symbol.txt");
	f2 = fopen("symbol.txt","w");
	fprintf(f2, "Syntax Error was Found\n");
 	fprintf(f2, "line number: %d %s : %s\n", yylineno,s,var);
	
 	exit(0);
}

int main(void) 
{   
	yyin = fopen("input.txt", "r");
	f1 = fopen("output.txt","w");
	f2 = fopen("symbol.txt","w");
	
	if(!yyparse())
	{
		printf("\nParsing complete\n");
		
		//fprintf(f2,"\n");
		
		printInit(f2);
		printNotInit(f2);
		
		fprintf(f2,"-----------------------------------------------\n\n");
	
		printUsed(f2);
		printNotUsed(f2);
		
	}
	else
	{
		printf("\nParsing failed\n");
		return 0;
	}
	fclose(f1);
	fclose(f2);
	fclose(yyin);
    return 0;
}
