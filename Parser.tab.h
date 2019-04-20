/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     SINGLE_QUOTE = 283,
     DOUBLE_QUOTE = 284,
     SEMI_COLON = 285,
     COLON = 286,
     OBRACKET = 287,
     CBRACKET = 288,
     OBRACE = 289,
     CBRACE = 290,
     OSQ_BRACKET = 291,
     CSQ_BRACKET = 292,
     COMMA = 293,
     TWO_DOTS = 294,
     TRUE = 295,
     FALSE = 296,
     AND = 297,
     OR = 298,
     EQUAL_EQUAL = 299,
     NOT_EQUAL = 300,
     GREATER_THAN = 301,
     GREATER_THAN_EQUAL = 302,
     SMALLER_THAN = 303,
     SMALLER_THAN_EQUAL = 304,
     NOT = 305,
     REMAINDER = 306,
     PLUS_EQUAL = 307,
     MINUS_EQUAL = 308,
     MULTIPLY_EQUAL = 309,
     DIVIDE_EQUAL = 310,
     PLUS_PLUS = 311,
     MINUS_MINUS = 312,
     EQUAL = 313,
     CONST = 314,
     VOID = 315,
     MINUS = 316,
     PLUS = 317,
     DIVIDE = 318,
     MULTIPLY = 319,
     POWER = 320
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
#define SINGLE_QUOTE 283
#define DOUBLE_QUOTE 284
#define SEMI_COLON 285
#define COLON 286
#define OBRACKET 287
#define CBRACKET 288
#define OBRACE 289
#define CBRACE 290
#define OSQ_BRACKET 291
#define CSQ_BRACKET 292
#define COMMA 293
#define TWO_DOTS 294
#define TRUE 295
#define FALSE 296
#define AND 297
#define OR 298
#define EQUAL_EQUAL 299
#define NOT_EQUAL 300
#define GREATER_THAN 301
#define GREATER_THAN_EQUAL 302
#define SMALLER_THAN 303
#define SMALLER_THAN_EQUAL 304
#define NOT 305
#define REMAINDER 306
#define PLUS_EQUAL 307
#define MINUS_EQUAL 308
#define MULTIPLY_EQUAL 309
#define DIVIDE_EQUAL 310
#define PLUS_PLUS 311
#define MINUS_MINUS 312
#define EQUAL 313
#define CONST 314
#define VOID 315
#define MINUS 316
#define PLUS 317
#define DIVIDE 318
#define MULTIPLY 319
#define POWER 320




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 17 "Parser.y"
{
	int intValue;	    /* integer value */
	float floatValue;    /* float value */
	char charValue;    /* char value */
	char* stringValue;    /* string value*/
	char* identifier;       /* identifier name */
	char* comment;
}
/* Line 1529 of yacc.c.  */
#line 188 "Parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

