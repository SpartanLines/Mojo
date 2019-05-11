#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Symbol_T.c"

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
  int T1;
  int T2;
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
      { printf("Warning: Assigning Float to Integer \n");
        //strcat(Temp->con.value,".0");
      }
    }

    if(LeftHandSideType==1 || LeftHandSideType == 6)
    {
      if(RightHandSideType==0|| RightHandSideType==5 )
      { printf("Warning: Assigning Float to Integer \n");
      }
    }

    if(LeftHandSideType==2 || LeftHandSideType == 7)
    {
      if(RightHandSideType==3|| RightHandSideType==8 )
      {
        printf("Warning: Assigning Char to String\n");
      }
    }

    printf("\t MOV R%01d, %d \n",CurrentRegister,Temp->con.);
    CurrentRegister=CurrentRegister+1;

    break;

    case typeId:
    RightHandSideType=Temp->id.type;

    if(Dec_With_Assignment)
    {
      printf("\t MOV %s,R%01d  \n",Temp->id.name,CurrentRegister);
      CurrentRegister=CurrentRegister+1;
    }
    else
    {
      printf("\t MOV R%01d, %s \n",CurrentRegister,"NONE");
      printf("\t MOV %s,R%01d  \n",Temp->id.name,CurrentRegister);
      CurrentRegister=CurrentRegister+1;
    }
    break;



    case typeOpr:


    switch (Temp->opr.operNum) {

      case ASSIGN:
      LeftHandSideType=Temp->opr.op[0]->id.type;
      int Permission = Temp->opr.op[0]->id.state;
      struct Symbol_Table *Entry=find(Temp->opr.op[0]->id.index);

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




    case PLUS:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      printf("\t ADD R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);

    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;


    case MINUS:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      printf("\t SUB R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;

    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;


    case DIVIDE:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      printf("\t DIV R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;


    case MULTIPLY:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      printf("\t MUL R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;

    case REMAINDER:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      printf("\t REM R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;

    case NOT:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6))
    {
      printf("\t NOT R%01d\n", CurrentRegister);
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;


    case PLUS_PLUS:
    struct Symbol_Table *Entry=find(Temp->opr.op[0]->id.index);
    if(Entry!=NULL)
    {
      printf("\t MOV R%01d, %s \n",CurrentRegister,Entry->S_Name);
      printf("\t INC R%01d \n",CurrentRegister);
      printf("\t MOV %s, R%01d  \n",Entry->S_Name,CurrentRegister);
      CurrentRegister=CurrentRegister+1;

    }
    else
    {
      yyerror("Error: Variable is Undeclared \n");
      break;
    }

    case MINUS_MINUS:
    struct Symbol_Table *Entry=find(Temp->opr.op[0]->id.index);
    if(Entry!=NULL)
    {
      printf("\t MOV R%01d, %s \n",CurrentRegister,Entry->S_Name);
      printf("\t DEC R%01d \n",CurrentRegister);
      printf("\t MOV %s, R%01d  \n",Entry->S_Name,CurrentRegister);
      CurrentRegister=CurrentRegister+1;
    }
    else
    {
      yyerror("Error: Variable is Undeclared \n");
      break;
    }


    case AND:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      printf("\t AND R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;

    case OR:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      printf("\t AND R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;

    case GREATER_THAN:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      printf("\t CMPGT R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;


    case GREATER_THAN_EQUAL:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      printf("\t CMPGTE R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;

    case SMALLER_THAN:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      printf("\t CMPST R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;


    case SMALLER_THAN_EQUAL:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
    {
      printf("\t CMPSTE R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;

    case EQUAL_EQUAL:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if(((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
        || ((T1 == 2 || T1 == 3 || T1 == 7 || T1 == 8) && (T2 == 2 || T2 == 3 || T2 == 7 || T2 == 8)))
    {
      printf("\t EQEQ R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;

    case NOT_EQUAL:
    ex(Temp->opr.op[0]);
    T1=RightHandSideType;
    ex(Temp->opr.op[1]);
    T2=RightHandSideType;
    if(((T1 == 0 || T1 == 1 || T1 == 5 || T1 == 6) && (T2 == 0 || T2 == 1 || T2 == 5 || T2 == 6))
        || ((T1 == 2 || T1 == 3 || T1 == 7 || T1 == 8) && (T2 == 2 || T2 == 3 || T2 == 7 || T2 == 8)))
    {
      printf("\t NOTEQ R%01d, R%01d, R%01d \n", CurrentRegister, R1, R2);
      R1=R1+1;
      R2=R2+1;
    }
    else
    {
      yyerror("Error: incompatible types for addition ");
    }
    Dec_With_Assignment = 0;


    default:
    break;

  }
  }


}
