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
%token <stringValue> BOOL
%token <stringValue> FLOAT
%token <charValue> CHAR
%token <stringValue> STRING
%token <identifier> IDENTIFIER
%token <comment> COMMENT
%token IF THEN WHILE FOR SWITCH CASE DO DEFAULT ELIF ELSE RETURN MAIN INCLUDE HASH
%token SINGLE_QUOTE DOUBLE_QUOTE SEMI_COLON OPENED_BRACKET CLOSED_BRACKET OPENED_BRACE CLOSED_BRACE OPENED_SQ_BRACKET CLOSED_SQ_BRACKET COMMA TWO_DOTS
%token AND OR EQUAL_EQUAL NOT_EQUAL GREATER_THAN GREATER_THAN_EQUAL SMALLER_THAN SMALLER_THAN_EQUAL NOT
%token PLUS MINUS MULTIPLY DIVIDE REMAINDER PLUS_EQUAL MINUS_EQUAL MULTIPLY_EQUAL DIVIDE_EQUAL PLUS_PLUS MINUS_MINUS EQUAL
%token CONST
%token VOID


%%


Root: Program;
Program:Declarations| Program Declarations;

Declarations:Var_Dec;

Var_Dec:Data_Type Assign SEMI_COLON;

Data_Type: INT | FLOAT | BOOL | STRING | CHAR;

Assign: IDENTIFIER EQUAL Expr SEMI_COLON | IDENTIFIER;

Expr: Math_Expr;

Math_Expr: Math_Expr PLUS Term | Math_Expr MINUS Term | Term;
Term: Term MULTIPLY Factor | Term DIVIDE Factor | Factor;
Factor:  IDENTIFIER {printf("afsda");}|OPENED_BRACKET Math_Expr CLOSED_BRACKET;





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
