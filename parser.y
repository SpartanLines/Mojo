
%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
        #include "structs.h"
	#define YYDEBUG 1
	extern void yyerror(char*);
	extern int mylineno;
nodeType *opr(int oper, int nops, ...); 
nodeType *id(int index,int type,stateEnum state,char* name); 
nodeType *con(int value,int type); 
nodeType *getId(char* name;int scope)
void freeNode(nodeType *p); 
int ex(nodeType *p); 

  int yylex(void);

int index=0;
int scope=0;

%}


%union {
	int intValue;	    /* integer value */
	float floatValue;    /* float value */
	char charValue;    /* char value */
	char* stringValue;    /* string value*/
	char* identifier;       /* identifier name */
	char* comment;
        nodeType *nPtr;
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
%token IF THEN WHILE FOR SWITCH CASE DO DEFAULT ELIF ELSE RETURN MAIN INCLUDE HASH CLASS FUNC BREAK CONTINUE
%token SINGLE_QUOTE DOUBLE_QUOTE SEMI_COLON COLON OBRACKET CBRACKET OBRACE CBRACE OSQ_BRACKET CSQ_BRACKET COMMA TWO_DOTS DOT
%token TRUE FALSE AND OR EQUAL_EQUAL NOT_EQUAL GREATER_THAN GREATER_THAN_EQUAL SMALLER_THAN SMALLER_THAN_EQUAL NOT
%token REMAINDER PLUS_EQUAL MINUS_EQUAL MULTIPLY_EQUAL DIVIDE_EQUAL PLUS_PLUS MINUS_MINUS EQUAL
%token CONST
%token VOID
%right MINUS
%left  PLUS
%right DIVIDE
%left   MULTIPLY
%left POWER
%type <nPtr> MATH_CALC Casting UniaryEXP MATH_EXPR DataVAL LOG_EXPR Expr Var_Dec 
%type <intValue> Data_Type
%%
Root:Program;

Program:statements;

statements: statement|statement statements ;

statement:declerations  
          |ifstmts
          |forstmt
          |dowhilestmt
          |whilestmt
          |switchstmt
/////         |assignments;
          |func_call
          |classstmt
          |BREAK
          |CONTINUE
          |returnstmt
          |blockstmt;

returnstmt: RETURN DataVAL;
//////////// class statement  ////////////

classstmt: CLASS IDENTIFIER OBRACE vars funcs CBRACE;

var_decs: Var_Dec
        |Arr_Dec;

vars: var_decs
        | vars var_decs;
funcs: Func_Dec
        |funcs Func_Dec;
//////////// if statement  ////////////

ifstmts:ifstmt  {printf("if is working \n");}
        |ifstmt elsestmt
        |ifstmt elifs
        |ifstmt elifs elsestmt;

ifstmt: IF OBRACKET LOG_EXPR CBRACKET OBRACE statements CBRACE;

elifs: elifstmt| elifstmt elifs;

elifstmt: ELIF OBRACKET LOG_EXPR CBRACKET OBRACE statements CBRACE;

elsestmt: ELSE OBRACE statements CBRACE;

scopeIncr:{$$=NULL;scope++;};

//////////// for statement  ////////////

forstmt:FOR OBRACKET Var_Dec LOG_EXPR SEMI_COLON LOG_EXPR CBRACKET OBRACE scopeIncr statements CBRACE {printf("for loop is working \n");};

//////////// while statement  ////////////

whilestmt:WHILE  OBRACKET  LOG_EXPR CBRACKET OBRACE scopeIncr statements CBRACE {printf("WHILE loop is working \n");};

////////////do  while statement  ////////////

dowhilestmt:DO OBRACE statements CBRACE WHILE OBRACKET scopeIncr LOG_EXPR CBRACKET {printf("DO WHILE loop is working \n");};

////////////  switch statement  ////////////

switchstmt: SWITCH OBRACKET IDENTIFIER CBRACKET OBRACE scopeIncr switchcases CBRACE {printf("SWITCH loop is working \n");};

switchcases:caselist DEFAULT COLON statements
        |DEFAULT COLON statements;

caselist: case
        |case caselist;

case: CASE OBRACKET DataVAL CBRACKET COLON statements;

////////////  block decleration  ////////////
blockstmt:OBRACE scopeIncr statements CBRACE;

////////////  function declerations and definitions  ////////////

Func_Dec: FUNC IDENTIFIER Args super_data_type OBRACE statements CBRACE
          |FUNC IDENTIFIER Args OBRACE statements CBRACE
          |FUNC Args super_data_type OBRACE statements CBRACE
          |FUNC Args OBRACE statements CBRACE;

Args:OBRACKET CBRACKET
     | OBRACKET Args_list CBRACKET;

Args_list: Data_Type IDENTIFIER 
        | Data_Type OSQ_BRACKET CSQ_BRACKET IDENTIFIER 
        | Args_list COMMA Data_Type IDENTIFIER;

//////////// Variable Declarations and Definition ////////////

declerations:Var_Dec {printf("Variavle Declaration is working \n");}
              |Arr_Dec
              |Func_Dec;

////////assignments: Array_Assign|generic_assign;

//////////// Variable Declaration no longer accepts identifier_list/////////
////////////NOW INCLUDES ASSIGNMENT AS WELL/////////
Var_Dec:CONST Data_Type IDENTIFIER EQUAL Expr SEMI_COLON {$$=opr(ASSIGN,2,id(index,$2+5,Valid,$3),$5);index++;}
        |Data_Type IDENTIFIER EQUAL Expr SEMI_COLON {$$=opr(ASSIGN,2,id(index,$1,Valid,$2),$4);index++;}
        |IDENTIFIER EQUAL Expr {$$=opr(ASSIGN,2,getId($1,scope),$3)}
        |Data_Type IDENTIFIER SEMI_COLON{$$=id(index,$1,Valid,$2)} ;
        
Arr_Dec:CONST array_data_type Array_Assign SEMI_COLON
        |array_data_type Array_Assign SEMI_COLON;

Expr_list:Expr
          |Expr COMMA identifier_list;

Array_Assign: identifier_list EQUAL OSQ_BRACKET Expr_list CSQ_BRACKET
              |identifier_list EQUAL IDENTIFIER
              |identifier_list EQUAL func_call
              |identifier_list;

super_data_type:array_data_type|Data_Type;

array_data_type:Data_Type OSQ_BRACKET CSQ_BRACKET
                |Data_Type OSQ_BRACKET INT_VALUE CSQ_BRACKET;

Data_Type: INT {$$=0;} 
        | FLOAT {$$=1;}
        | BOOL {$$=4;}
        | STRING {$$=2;}
        | CHAR {$$=3;};

////////////identifier instead of identifier list ////////////


////generic_assign:Assign SEMI_COLON {printf("Variable Assign is working \n")}
////              |IDENTIFIER OSQ_BRACKET INT_VALUE CSQ_BRACKET EQUAL Expr; 

identifier_list: IDENTIFIER 
                |IDENTIFIER COMMA identifier_list ;

func_call: IDENTIFIER OBRACKET identifier_list CBRACKET
        | IDENTIFIER OBRACKET CBRACKET;


Expr:  LOG_EXPR {$$=$1};

DataVAL: CHAR_VALUE {$$=con($1,3)}
        |TRUE {$$=con("true",4)}
            |FALSE {$$=con("false",4)}
            |MATH_EXPR {$$=$1};
            

LOG_EXPR: LOG_EXPR AND DataVAL {$$=opr(AND,2,$1,$3);}
          | LOG_EXPR OR DataVAL {$$=opr(OR,2,$1,$3);}
          | LOG_EXPR GREATER_THAN DataVAL {$$=opr(GREATER_THAN,2,$1,$3);}
          | LOG_EXPR GREATER_THAN_EQUAL DataVAL {$$=opr(GREATER_THAN_EQUAL,2,$1,$3);}
          | LOG_EXPR SMALLER_THAN DataVAL {$$=opr(SMALLER_THAN,2,$1,$3);}
          | LOG_EXPR SMALLER_THAN_EQUAL DataVAL {$$=opr(SMALLER_THAN_EQUAL,2,$1,$3);}
          | LOG_EXPR EQUAL_EQUAL DataVAL {$$=opr(EQUAL_EQUAL,2,$1,$3);}
          | LOG_EXPR NOT_EQUAL DataVAL {$$=opr(NOT_EQUAL,2,$1,$3);}
          | NOT DataVAL {$$=opr(NOT,1,$2);}
          | DataVAL {$$=$1;}
          |OBRACKET LOG_EXPR CBRACKET{$$=$2};




MATH_EXPR:Casting {$$=$1}
        |Casting MINUS MATH_EXPR {$$=opr(MINUS,2,$1,$3);}
          |Casting PLUS MATH_EXPR {$$=opr(PLUS,2,$1,$3);}
          |Casting DIVIDE MATH_EXPR {$$=opr(DIVIDE,2,$1,$3);}
          |Casting MULTIPLY MATH_EXPR {$$=opr(MULTIPLY,2,$1,$3);}
          |Casting REMAINDER MATH_EXPR {$$=opr(REMAINDER,2,$1,$3);}
          |Casting POWER MATH_EXPR {$$=opr(POWER,2,$1,$3);}
          |UniaryEXP {$$=$1;};

Casting: MATH_CALC {$$=$1;}
        | OBRACKET Data_Type CBRACKET MATH_CALC {$$=opr(CASTING,2,$2,$4);};

MATH_CALC: INT_VALUE {$$=con($1,0);}
        |FLOAT_VALUE {$$=con($1,1);}
        |IDENTIFIER {$$=getId($1);}
//|IDENTIFIER OSQ_BRACKET INT_VALUE CSQ_BRACKET{$$=id($1);} 
// |func_call{$$=id($1);};


UniaryEXP: IDENTIFIER PLUS_PLUS {$$=opr(PLUS_PLUS,1,$1);}
        |IDENTIFIER MINUS_MINUS {$$=opr(PLUS_PLUS,1,$1);}
//|PLUS_PLUS IDENTIFIER
//|MINUS_MINUS IDENTIFIER;

%%
nodeType * con(int value,int type){
        nodeType *p;
        if ((p = malloc(sizeof(nodeType))) == NULL)         
        yyerror("out of memory");
             /* copy information */   
             p->type=typeCon;  
             p->con.type = typeCon;     
             p->con.value = value;     
             return p;
}
#include"lex.yy.c"

void yyerror(char * s){
	fprintf(stderr,"%s\n",s);
}

int main(void) {
  //yylex();
   return yyparse();
}
