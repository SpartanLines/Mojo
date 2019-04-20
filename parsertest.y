
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
Program:statements;
statements: statement|statement statements ;
statement:Var_Dec| Assign SEMI_COLON|ifstmts|forstmt|dowhilestmt|whilestmt|switchstmt;

//////////// if statement  ////////////

ifstmts:ifstmt|ifstmt elsestmt|ifstmt elifs|ifstmt elifs elsestmt;
ifstmt: IF OBRACKET LOG_EXPR CBRACKET OBRACE statements CBRACE;
elifs: elifstmt| elifstmt elifs;
elifstmt: ELIF OBRACKET LOG_EXPR CBRACKET OBRACE statements CBRACE;
elsestmt: ELSE OBRACE statements CBRACE;

//////////// for statement  ////////////

forstmt:FOR OBRACKET Var_Dec SEMI_COLON LOG_EXPR SEMI_COLON LOG_EXPR CBRACKET OBRACE statements CBRACE;

//////////// while statement  ////////////

whilestmt:WHILE OBRACKET LOG_EXPR CBRACKET OBRACE statements CBRACE;

////////////do  while statement  ////////////

dowhilestmt:DO OBRACE statements CBRACE WHILE OBRACKET LOG_EXPR CBRACKET ;

////////////  switch statement  ////////////

switchstmt: SWITCH OBRACKET IDENTIFIER CBRACKET OBRACE switchcases CBRACE;

switchcases:caselist DEFAULT COLON statements|DEFAULT COLON statements; 
caselist: case|case caselist;
case: CASE OBRACKET DataVAL CBRACKET COLON statements;
//////////// Variable Declarations and Definition ////////////
//////////// @TODO remove the assing from var dec and add it statements ////////////

Var_Dec:CONST Data_Type Assign SEMI_COLON|Data_Type Assign SEMI_COLON ;

Data_Type: INT | FLOAT | BOOL | STRING | CHAR;

//////////// check making different equals i.e int x=0,y=1 ////////////
Assign: identifier_list EQUAL Expr| identifier_list;

//////////// might need to flip iden list and identifier ////////////
identifier_list: IDENTIFIER|IDENTIFIER COMMA identifier_list ;

////////////Expr_list:Expr|Expr_list COMMA Expr; ////////////


Expr:  LOG_EXPR;

DataVAL: CHAR_VALUE|
            TRUE|
            FALSE|
          MATH_EXPR;

LOG_EXPR: LOG_EXPR AND DataVAL
          | LOG_EXPR OR DataVAL
          | LOG_EXPR GREATER_THAN DataVAL
          | LOG_EXPR GREATER_THAN_EQUAL DataVAL
          | LOG_EXPR SMALLER_THAN DataVAL
          | LOG_EXPR SMALLER_THAN_EQUAL DataVAL
          | LOG_EXPR EQUAL_EQUAL DataVAL
          | LOG_EXPR NOT_EQUAL DataVAL
          | NOT DataVAL
          | DataVAL
          |OBRACKET LOG_EXPR CBRACKET;

            
            

MATH_EXPR:Casting|
          Casting MINUS MATH_EXPR| 
          Casting PLUS MATH_EXPR|
          Casting DIVIDE MATH_EXPR|
          Casting MULTIPLY MATH_EXPR|
          Casting REMAINDER MATH_EXPR|
          Casting POWER MATH_EXPR|
          UniaryEXP;
Casting: MATH_CALC| OBRACKET Data_Type CBRACKET MATH_CALC;
MATH_CALC: INT_VALUE|
            FLOAT_VALUE|
            IDENTIFIER;
          

UniaryEXP: IDENTIFIER PLUS_PLUS|
            IDENTIFIER MINUS_MINUS|
            PLUS_PLUS IDENTIFIER|
            MINUS_MINUS IDENTIFIER;

%%