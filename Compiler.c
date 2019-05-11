#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
#include "structs.h"

int LeftHandSideType;
int RightHandSideType;
int CurrentRegister=0;
int Label=0;
int Dec_Without_Assignment=0;


///{Int,Float,String,Char,Bool,ConstInt,ConstFloat,ConstString,ConstChar,ConstBool}

int ex(nodeType * Temp)
{
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
        strcat(Temp->con.value,".0");
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

    printf("\t MOV R%01d, %s \n",CurrentRegister,Temp->con.value);
    CurrentRegister=CurrentRegister+1;

    break;

    case typeId:
    RightHandSideType=Temp->id.type;

    if(Dec_Without_Assignment)
    {
      printf("\t MOV %s,R%01d  \n",Temp->id.name,CurrentRegister);
      CurrentRegister=CurrentRegister+1;
    }
    else
    {
      printf("\t MOV R%01d, %s \n",CurrentRegister,Temp->id.);
      printf("\t MOV %s,R%01d  \n",Temp->id.name,CurrentRegister);
      CurrentRegister=CurrentRegister+1;
    }
    break;



    case typeOpr:


    switch (Temp->opr.operNum) {

      case ASSIGN:
      LeftHandSideType=Temp->opr.op[0]->id.type;


    }



    default:
    break;
  }


}
