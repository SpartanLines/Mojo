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
#line 17 "parsertest.y" /* yacc.c:1909  */

	int intValue;	    /* integer value */
	float floatValue;    /* float value */
	char charValue;    /* char value */
	char* stringValue;    /* string value*/
	char* identifier;       /* identifier name */
	char* comment;

#line 199 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
