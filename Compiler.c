#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Symbol_T.h"
#include "y.tab.h"

int LeftHandSideType;
int RightHandSideType;
int CurrentRegister=0;
int R1=0;
int R2=1;
int Label=0;
int Dec_With_Assignment=0;


///{Int,Float,String,Char,Bool,ConstInt,ConstFloat,ConstString,ConstChar,ConstBool}

int ex(nodeType * Temp)
{
  printf("Compiler");
  int T1;
  int T2;
  Symbol_Table *Entry;
  if (!Temp) return 0;

  switch(Temp->type)
  {
    case typeCon:

    RightHandSideType=Temp->con.type;

    if( ( LeftHandSideType == 5 && ( RightHandSideType != 5 && RightHandSideType != 0 )) || 											//integer
			( LeftHandSideType == 6 && ( RightHandSideType != 6 && RightHandSideType != 1 && RightHandSideType != 5 && RightHandSideType != 0 )) || 		//float
			( LeftHandSideType == 7 && ( RightHandSideType != 7 && RightHandSideType != 2 )) || 											//char
			( LeftHandSideType == 8 && ( RightHandSideType != 8 && RightHandSideType != 3 && RightHandSideType != 7 && RightHandSideType != 2 )) || 		//string
			( LeftHandSideType == 9 && ( RightHandSideType != 9 && RightHandSideType != 4 && RightHandSideType != 5 && RightHandSideType != 0 ))    		//Bool
		)
		{
			yyerror("Error: incompatible types for assignment \n");
      break;
    }

    if(LeftHandSideType==0 || LeftHandSideType == 5)
    {
      if(RightHandSideType==1 || RightHandSideType==6 )
      { fprintf(file1,"Warning: Assigning Float to Integer \n");
        //strcat(Temp->con.value,".0");
      }
    }

    if(LeftHandSideType==1 || LeftHandSideType == 6)
    {
      if(RightHandSideType==0|| RightHandSideType==5 )
      { fprintf(file1,"Warning: Assigning Float to Integer \n");
      }
    }

    if(LeftHandSideType==2 || LeftHandSideType == 7)
    {
      if(RightHandSideType==3|| RightHandSideType==8 )
      {
        fprintf(file1,"Warning: Assigning Char to String\n");
      }
    }

    fprintf(file1,"\t MOV R%01d, %s \n",CurrentRegister,Temp->con.value);
    CurrentRegister=CurrentRegister+1;

    break;

    case typeId:
    RightHandSideType=Temp->id.type;

    if(Dec_With_Assignment)
    {
      fprintf(file1,"\t MOV %s,R%01d  \n",Temp->id.name,CurrentRegister);
      CurrentRegister=CurrentRegister+1;
    }
    else
    {
      fprintf(file1,"\t MOV R%01d, %s \n",CurrentRegister,"NONE");
      fprintf(file1,"\t MOV %s,R%01d  \n",Temp->id.name,CurrentRegister);
      CurrentRegister=CurrentRegister+1;
    }
    break;



    case typeOpr:

    switch (Temp->opr.operNum) {

      case EQUAL:
      LeftHandSideType=Temp->opr.op[0]->id.type;
      int Permission = Temp->opr.op[0]->id.state;
      Entry=find(Temp->opr.op[0]->id.index);

      if (Permission==3)
      {
        yyerror("Error: You can not assign value to constant variable \n");
        break;
      }
      if (Permission==2)
      {
        yyerror("Error: Variable is Undeclared \n");
        break;
      }
      if (Permission ==1)
      {
        yyerror("Error: Variable is out of scope \n");
        break;
      }

      setInit(Temp->opr.op[0]->id.index);
      break;




    case PLUS:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      fprintf(file1,"\t ADD R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;


    case MINUS:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      fprintf(file1,"\t SUB R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;

    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;

    case DIVIDE:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      fprintf(file1,"\t DIV R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;


    case MULTIPLY:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      fprintf(file1,"\t MUL R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;

    case REMAINDER:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      fprintf(file1,"\t REM R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;

    case NOT:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6))
    {
      fprintf(file1,"\t NOT R%01d\n", CurrentRegister);
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;


    case PLUS_PLUS:
    Entry=find(Temp->opr.op[0]->id.index);
    if(Entry!=NULL)
    {
      fprintf(file1,"\t MOV R%01d, %s \n",CurrentRegister,Entry->S_Name);
      fprintf(file1,"\t INC R%01d \n",CurrentRegister);
      fprintf(file1,"\t MOV %s, R%01d  \n",Entry->S_Name,CurrentRegister);
      CurrentRegister=CurrentRegister+1;
    }
    else
    {
      yyerror("Error: Variable is Undeclared \n");
    }
    break;

    case MINUS_MINUS:
    Entry=find(Temp->opr.op[0]->id.index);
    if(Entry!=NULL)
    {
      fprintf(file1,"\t MOV R%01d, %s \n",CurrentRegister,Entry->S_Name);
      fprintf(file1,"\t DEC R%01d \n",CurrentRegister);
      fprintf(file1,"\t MOV %s, R%01d  \n",Entry->S_Name,CurrentRegister);
      CurrentRegister=CurrentRegister+1;
    }
    else
    {
      yyerror("Error: Variable is Undeclared \n");
    }
    break;


    case AND:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      fprintf(file1,"\t AND R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;

    case OR:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      fprintf(file1,"\t AND R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;

    case GREATER_THAN:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      fprintf(file1,"\t CMPGT R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;


    case GREATER_THAN_EQUAL:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      fprintf(file1,"\t CMPGTE R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;

    case SMALLER_THAN:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      fprintf(file1,"\t CMPST R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;


    case SMALLER_THAN_EQUAL:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      fprintf(file1,"\t CMPSTE R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;

    case EQUAL_EQUAL:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if(((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
        || ((T1 == 2 || T1 == 3 || T1 == 7 || T1 == 8) && (T2 == 2 || T2 == 3 || T2 == 7 || T2 == 8)))
    {
      fprintf(file1,"\t EQEQ R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;

    case NOT_EQUAL:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if(((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
        || ((T1 == 2 || T1 == 3 || T1 == 7 || T1 == 8) && (T2 == 2 || T2 == 3 || T2 == 7 || T2 == 8)))
    {
      fprintf(file1,"\t NOTEQ R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;
    break;

  }

  }
return 0;
}
