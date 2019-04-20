
%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#define YYDEBUG 1
	extern void yyerror(char*);
	extern int mylineno;


  int yylex(void);

%}


%union {
	int intValue;	    /* integer value */
	float floatValue;    /* float value */
	char charValue;    /* char value */
	char* stringValue;    /* string value*/
	char* identifier;       /* identifier name */
	char* comment;
};
%start Root

%token <stringValue> INT
%token <intValue> INT_VALUE

%token <stringValue> BOOL

%token <stringValue> FLOAT
%token <floatValue> FLOAT_VALUE

%token <stringValue> CHAR
%token <charValue> CHAR_VALUE

%token <stringValue> STRING
%token <stringValue> STRING_VALUE

%token <identifier> IDENTIFIER
%token <comment> COMMENT
%token IF THEN WHILE FOR SWITCH CASE DO DEFAULT ELIF ELSE RETURN MAIN INCLUDE HASH
%token SINGLE_QUOTE DOUBLE_QUOTE SEMI_COLON COLON OBRACKET CBRACKET OBRACE CBRACE OSQ_BRACKET CSQ_BRACKET COMMA TWO_DOTS
%token TRUE FALSE AND OR EQUAL_EQUAL NOT_EQUAL GREATER_THAN GREATER_THAN_EQUAL SMALLER_THAN SMALLER_THAN_EQUAL NOT
%token REMAINDER PLUS_EQUAL MINUS_EQUAL MULTIPLY_EQUAL DIVIDE_EQUAL PLUS_PLUS MINUS_MINUS EQUAL
%token CONST
%token VOID
%right MINUS
%left  PLUS
%right DIVIDE
%left   MULTIPLY
%left POWER
%%
Root:Program;
Program:Expr;

. {invalidToken();}

Expr:   LOG_EXPR|DataVAL;
LOG_EXPR:   DataVAL|
            LOG_EXPR AND LOG_EXPR|
            LOG_EXPR OR LOG_EXPR|
            LOG_EXPR POWER LOG_EXPR|
            LOG_EXPR NOT_EQUAL LOG_EXPR|
            LOG_EXPR EQUAL_EQUAL LOG_EXPR|
            MATH_EXPR SMALLER_THAN MATH_EXPR|
            MATH_EXPR SMALLER_THAN_EQUAL MATH_EXPR|
            MATH_EXPR GREATER_THAN MATH_EXPR|
            MATH_EXPR GREATER_THAN_EQUAL MATH_EXPR|
            MATH_EXPR EQUAL_EQUAL MATH_EXPR|
            MATH_EXPR NOT_EQUAL MATH_EXPR|
            NOT LOG_EXPR|
            OBRACKET LOG_EXPR CBRACKET;
DataVAL: CHAR_VALUE|
            TRUE|
            FALSE|
            MATH_EXPR;
MATH_EXPR:INT_VALUE|
          FLOAT_VALUE|
          IDENTIFIER|
          MATH_EXPR MINUS MATH_EXPR|
          MATH_EXPR PLUS MATH_EXPR|
          MATH_EXPR DIVIDE MATH_EXPR|
          MATH_EXPR MULTIPLY MATH_EXPR|
          MATH_EXPR REMAINDER MATH_EXPR|
          MATH_EXPR POWER MATH_EXPR|
          OBRACKET MATH_EXPR CBRACKET|
          UniaryEXP;
UniaryEXP: IDENTIFIER PLUS_PLUS|
            IDENTIFIER MINUS_MINUS|
            PLUS_PLUS IDENTIFIER|
            MINUS_MINUS IDENTIFIER;
%%
