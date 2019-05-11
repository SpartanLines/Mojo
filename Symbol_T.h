#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include "structs.h"

typedef struct Symbol_Table
{
	int S_Type;
	int S_Init;
	int S_Used;
	int S_Braces;
	char * S_Value;
	char * S_Name;
	permission S_Perm;

}Symbol_Table;

typedef struct STNode
{
	struct Symbol_Table * data;
	int index;
	struct STNode * next;
} STNode;
