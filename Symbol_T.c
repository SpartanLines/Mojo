#include "Symbol_T.h"
#include <string.h>

struct STNode * head=NULL;


char* idtype[10] = { "Integer", "Float", "Char", "String", "Bool", "ConstIntger", "ConstFloat", "ConstChar", "ConstString", "ConstBool" };

struct Symbol_Table* getSymbol_Table(int type, int init, int used, int brace, char * name, permission perm)
{
	struct Symbol_Table *data = (struct Symbol_Table*) malloc(sizeof(struct Symbol_Table));
	data->S_Type = type;
	data->S_Init = init;
	data->S_Used = used;
	data->S_Braces = brace;
	data->S_Name = strdup(name);
	data->S_Perm = perm;

	return data;
}

struct Symbol_Table * find(int ind)
{
	struct STNode *cur = head;

	if (head == NULL)
	{
		return NULL;
	}
	while (cur->index != ind)
	{
		if (cur->next == NULL)
		{
			return NULL;
		}
		else
		{
			cur = cur->next;
		}
	}
	return cur->data;
}

void setValue(int ind, char * val)
{
	Symbol_Table * E = find(ind);
	E->S_Value = strdup(val);
}

//if not found it returns the last index
//again WHY????????
int getIndex(char * name, int br)
{
	struct STNode * cur = head;
	int ind = 0;

	while (cur != NULL)
	{
		if (strcmp(name, cur->data->S_Name) == 0 && cur->data->S_Braces != -5)
		{
			if (cur->data->S_Braces == br)
			{
				return cur->index;
			}
			else
			{
				ind = cur->index;
			}
		}
		cur = cur->next;
	}
	return ind;
}


// loops on all symbol Table and sets the attribute symBrace to -5
// for identifiers having brace = findBrace
//but WHY???????
void setBrace(int br)
{
	struct STNode * cur = head;

	while (cur != NULL)
	{
		if (cur->data->S_Braces == br)
		{
			cur->data->S_Braces = -5;
		}
	}
	cur = cur->next;
}

void setUsed(int ind)
{
	struct Symbol_Table * E = find(ind);
	E->S_Used = 1;
}

void setInit(int ind)
{
	struct Symbol_Table * E = find(ind);
	E->S_Init = 1;
}

void printList()
{
	struct STNode * cur = head;
	printf("\nCurrent List\n[");

	while (cur != NULL)
	{
		printf("(index = %d ,name = %s ,type = %d ,init = %d ,used = %d , brace = %d \n)",cur->index,cur->data->S_Name,idtype[cur->data->S_Type],cur->data->S_Init,cur->data->S_Used,cur->data->S_Braces);
		cur = cur->next;
	}
	printf("]\n\n");
}


//UorI Used=true Init=false ------YorN Yes=true  Not=False
void Print(FILE * f, bool UorI, bool YorN)
{
	struct STNode * cur = head;
	if (UorI && YorN)//used
	{
		fprintf(f, "used identifiers:\n");
		while (cur != NULL)
		{
			if (cur->data->S_Used == 1)
			{
				fprintf(f, "%s of type %s \n", cur->data->S_Name, idtype[cur->data->S_Type]);
			}
			cur = cur->next;
		}
	}
	else if (UorI && !YorN)//unused
	{
		fprintf(f, "unused identifiers:\n");
		while (cur != NULL)
		{
			if (cur->data->S_Used == 0)
			{
				fprintf(f, "%s of type %s \n", cur->data->S_Name, idtype[cur->data->S_Type]);
			}
			cur = cur->next;
		}
	}
	else if (!UorI && YorN)//initialized
	{
		fprintf(f, "initialized identifiers:\n");
		while (cur != NULL)
		{
			if (cur->data->S_Init == 1)
			{
				fprintf(f, "%s of type %s \n", cur->data->S_Name, idtype[cur->data->S_Type]);
			}
			cur = cur->next;
		}
	}
	else if (!UorI && !YorN)//uninitialized
	{
		fprintf(f, "uninitialized identifiers:\n");
	}
	while (cur != NULL)
	{
		if (cur->data->S_Init == 0)
		{
			fprintf(f,"%s of type %s \n",cur->data->S_Name,idtype[cur->data->S_Type]);
		}
		cur = cur->next;
	}
}


void printUsed(FILE *f)
{
	Print(f, true, true);
}
void printNotUsed(FILE *f)
{
	Print(f, true, false);
}
void printInit(FILE *f)
{
	Print(f, false, true);
}
void printNotInit(FILE *f)
{
	Print(f, false, false);
}



//brace was included but not used
bool nameUniqueInScope(char * name,int brace)
{
	struct STNode * cur = head;
	while (cur != NULL)
	{
		if (strcmp(name, cur->data->S_Name) == 0 && cur->data->S_Braces<=brace)
		{
			return false;
		}
		cur = cur->next;
	}
	return true;
}

//notice that the index doesn't have to give the arrangement
void insertFirst(int ind, struct Symbol_Table* data)
{
	struct STNode * t = (struct STNode *)malloc(sizeof(struct STNode));
	t->index = ind;
	t->data = data;

	t->next = head;
	head = t;
}


struct STNode * deleteF()
{
	if (head == NULL)
	{
		return NULL;
	}
	struct STNode * temp = head;

	head = head->next;

	return temp;
}

struct STNode * deleteI(int ind) {

	if (head == NULL) {
	return NULL;
	}

	struct STNode * cur = head;

	while (cur->index != ind)
	{
		if (cur->next == NULL)
		{
			return NULL;
		}
		else
		{
			cur = cur->next;
		}
	}
	STNode * temp = cur->next;
	cur = cur->next;
	return temp;
}


bool isEmpty()
{
	return (head == NULL);
}
int length()
{
	int l = 0;
	struct STNode * cur=head;

	while (cur != NULL)
	{
		l++;
		cur = cur->next;
	}
	return l;
}
