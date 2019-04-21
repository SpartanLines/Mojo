/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 17 "parsertest.y" /* yacc.c:1909  */

	int intValue;	    /* integer value */
	float floatValue;    /* float value */
	char charValue;    /* char value */
	char* stringValue;    /* string value*/
	char* identifier;       /* identifier name */
	char* comment;

#line 203 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
