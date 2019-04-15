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
%token SINGLE_QUOTE DOUBLE_QUOTE SEMI_COLON COLON OPENED_BRACKET CLOSED_BRACKET OPENED_BRACE CLOSED_BRACE OPENED_SQ_BRACKET CLOSED_SQ_BRACKET COMMA TWO_DOTS
%token AND OR EQUAL_EQUAL NOT_EQUAL GREATER_THAN GREATER_THAN_EQUAL SMALLER_THAN SMALLER_THAN_EQUAL NOT
%token PLUS MINUS MULTIPLY DIVIDE REMAINDER PLUS_EQUAL MINUS_EQUAL MULTIPLY_EQUAL DIVIDE_EQUAL PLUS_PLUS MINUS_MINUS EQUAL
%token CONST
%token VOID


%%


Root: Program;
Program:Declarations| Program Declarations;
Declarations:Var_Dec| Func_Dec | Statements;

//////////// Variable Declarations and Definition ////////////

Var_Dec:Data_Type Assign SEMI_COLON | Assign SEMI_COLON;

Data_Type: INT | FLOAT | BOOL | STRING | CHAR;

Assign: IDENTIFIER EQUAL Expr| IDENTIFIER;

// logical and math expression //////
Expr: Logical;

Logical: Logical AND Math_Expr
| Logical OR Math_Expr
| Logical GREATER_THAN Math_Expr
| Logical GREATER_THAN_EQUAL Math_Expr
| Logical SMALLER_THAN Math_Expr
| Logical SMALLER_THAN_EQUAL Math_Expr
| Logical EQUAL_EQUAL Math_Expr
| Logical NOT_EQUAL Math_Expr
| NOT Math_Expr
| Math_Expr;

Math_Expr: Math_Expr PLUS Term| Math_Expr MINUS Term | Term;
Term: Term MULTIPLY Factor | Term DIVIDE Factor | Factor;
Factor:IDENTIFIER|Values|OPENED_BRACKET Logical CLOSED_BRACKET;

Values: INT_VALUE | FLOAT_VALUE | STRING_VALUE | CHAR_VALUE;

/////////////////////////////////////
////////////////////////////////////////////////


/////////////////////  Function Declarations ///////////////

Func_Dec: Data_Type IDENTIFIER Args OPENED_BRACE Body RETURN IDENTIFIER SEMI_COLON CLOSED_BRACE
|VOID IDENTIFIER Args OPENED_BRACE Body RETURN SEMI_COLON CLOSED_BRACE
|VOID IDENTIFIER Args OPENED_BRACE Body CLOSED_BRACE;

Args:OPENED_BRACKET CLOSED_BRACKET| OPENED_BRACKET Args_list CLOSED_BRACKET;

Args_list: Data_Type IDENTIFIER | Args_list COMMA Data_Type IDENTIFIER;

Body: Statements | Body Statements;

////////////////////////////////////////////////////////////


/////////////////////  Statements //////////////////////

Statements: FOR Data_Type EQUAL IDENTIFIER SEMI_COLON;

//////////////////////////////////////////////////////

%%
#include"lex.yy.c"

void yyerror(char * s){
	fprintf(stderr,"%s\n",s);
}

int main(void) {

	yyparse();
   yylex();
   return 0;
}
