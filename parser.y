
%{
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
%type <nPtr> declerations returnstmt statement statements blockstmt case caselist switchcases switchstmt MATH_CALC Casting UniaryEXP MATH_EXPR DataVAL LOG_EXPR Expr Var_Dec scopeIncr
%type <intValue> Data_Type
%%
Root:Program;

Program:statements ;

statements: statement {$$=$1;}
        |statement statements{$$=opr(SEMI_COLON,2,$1,$2);} ;

statement:declerations{$$=$1;}  
          |ifstmts{$$=NULL;}
          |forstmt{$$=NULL;}
          |dowhilestmt{$$=NULL;}
          |whilestmt{$$=NULL;}
          |switchstmt{$$=$1;}
          |func_call{$$=NULL;}
          |classstmt{$$=NULL;}
          |BREAK {$$=opr(BREAK,0);}
          |CONTINUE {$$=opr(CONTINUE,0);}
          |returnstmt {$$=$1;}
          |blockstmt {$$=$1;};
/////         |assignments;

returnstmt: RETURN DataVAL {$$=opr(RETURN,1,$2);};
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

switchstmt: SWITCH OBRACKET IDENTIFIER CBRACKET OBRACE scopeIncr switchcases CBRACE {$$=opr(SWITCH,2,getId($3,scope),$7);scope--;};

switchcases:caselist DEFAULT COLON statements {$$=opr(SEMI_COLON,2,$1,opr(DEFAULT,1,$4));}
        |DEFAULT COLON statements {$$=opr(DEFAULT,1,$3);} ;

caselist: case {$$=$1;}
        |case caselist {$$=opr(SEMI_COLON,2,$1,$2);};

case: CASE OBRACKET DataVAL CBRACKET COLON statements {$$=opr(CASE,2,$3,$6);};

////////////  block decleration  ////////////
blockstmt:OBRACE scopeIncr statements CBRACE {$$=opr(OBRACE,1,$3);scope--;};

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

declerations:Var_Dec {$$=$1;}
              |Arr_Dec {$$=NULL;}
              |Func_Dec{$$=NULL;};

////////assignments: Array_Assign|generic_assign;

//////////// Variable Declaration no longer accepts identifier_list/////////
////////////NOW INCLUDES ASSIGNMENT AS WELL/////////
Var_Dec:CONST Data_Type IDENTIFIER EQUAL Expr SEMI_COLON {$$=opr(EQUAL,2,id(indexCount,$2+5,Valid,scope,$3),$5);indexCount++;}
        |Data_Type IDENTIFIER EQUAL Expr SEMI_COLON {$$=opr(EQUAL,2,id(indexCount,$1,Valid,scope,$2),$4);indexCount++;}
        |IDENTIFIER EQUAL Expr {$$=opr(EQUAL,2,getId($1,scope),$3);}
        |Data_Type IDENTIFIER SEMI_COLON{$$=id(indexCount,$1,Valid,scope,$2);indexCount++;} ;
        
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


////generic_assign:Assign SEMI_COLON {printf("Variable Assign is working \n");}
////              |IDENTIFIER OSQ_BRACKET INT_VALUE CSQ_BRACKET EQUAL Expr; 

identifier_list: IDENTIFIER 
                |IDENTIFIER COMMA identifier_list ;

func_call: IDENTIFIER OBRACKET identifier_list CBRACKET
        | IDENTIFIER OBRACKET CBRACKET;


Expr:  LOG_EXPR {$$=$1;};

DataVAL: CHAR_VALUE {$$=con($1,3);}
        |TRUE {$$=con("true",4);}
            |FALSE {$$=con("false",4);}
            |MATH_EXPR {$$=$1;};
            

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
          |OBRACKET LOG_EXPR CBRACKET{$$=$2;};




MATH_EXPR:Casting {$$=$1;}
        |Casting MINUS MATH_EXPR {$$=opr(MINUS,2,$1,$3);}
          |Casting PLUS MATH_EXPR {$$=opr(PLUS,2,$1,$3);}
          |Casting DIVIDE MATH_EXPR {$$=opr(DIVIDE,2,$1,$3);}
          |Casting MULTIPLY MATH_EXPR {$$=opr(MULTIPLY,2,$1,$3);}
          |Casting REMAINDER MATH_EXPR {$$=opr(REMAINDER,2,$1,$3);}
          |Casting POWER MATH_EXPR {$$=opr(POWER,2,$1,$3);}
          |UniaryEXP {$$=$1;};

Casting: MATH_CALC {$$=$1;}
/////        | OBRACKET Data_Type CBRACKET MATH_CALC {$$=opr(CASTING,2,$2,$4);};

MATH_CALC: INT_VALUE { char c[] = {};sprintf(c,"%d",$1); $$ = con(c, 0); } 
        |FLOAT_VALUE { char c[] = {}; ftoa($1, c, 6); $$ = con(c, 1); } 
        |IDENTIFIER {$$=getId($1,scope);}
//|IDENTIFIER OSQ_BRACKET INT_VALUE CSQ_BRACKET{$$=id($1);} 
// |func_call{$$=id($1);};


UniaryEXP: IDENTIFIER PLUS_PLUS {$$=opr(PLUS_PLUS,1,$1);}
        |IDENTIFIER MINUS_MINUS {$$=opr(PLUS_PLUS,1,$1);}
//|PLUS_PLUS IDENTIFIER
//|MINUS_MINUS IDENTIFIER;

%%
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