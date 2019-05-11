%{
/* C code to be copied verbatim */
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
	void extern yyerror(char*);
	void invalidToken();
	int mylineno = 1;
%}

/* This tells flex to read only one input file */
%option noyywrap

 /* [&%|(){}!/+-*[]] return yytext[0];
 */
%%
    /* variable types */

"const"     return CONST;
"int"       return INT ;
"float"     return FLOAT;
"string"    return STRING;
"char"      return CHAR;
"bool"      return BOOL;
"Class"     return CLASS;
"func"      return FUNC;
"true"      return TRUE;
"false"     return FALSE;
    /* statements types */
"if"        return IF;
"then"      return THEN;
"while"     return WHILE;
"for"       return FOR;
"switch"    return SWITCH;
"case"      return CASE;
"do"        return DO;
"default"   return DEFAULT;
"elif"      return ELIF;
"else"      return ELSE;
"break"     return BREAK;
"continue"  return CONTINUE;
"return" return RETURN;
"main" return MAIN;
"include" return INCLUDE;
"#" return HASH;
    /* operators */
"." return DOT;
"'" return SINGLE_QUOTE;
"\"\"" return DOUBLE_QUOTE;
";" return SEMI_COLON;
"(" return OBRACKET;
")" return CBRACKET;
"{" return OBRACE;
"}" return CBRACE;
"[" return OSQ_BRACKET;
"]" return CSQ_BRACKET;
"," return COMMA;
":" return COLON;

"&&" return AND;
"||"  return OR;
"==" return EQUAL_EQUAL;
"!=" return NOT_EQUAL;
">"  return GREATER_THAN;
">=" return GREATER_THAN_EQUAL;
"<"   return SMALLER_THAN;
"<=" return SMALLER_THAN_EQUAL;
"!" 	return NOT;

"^" return POWER;
"+" return PLUS;
"-" return MINUS;
"*" return MULTIPLY;
"/"  return DIVIDE;
"%" return REMAINDER;
"+=" return PLUS_EQUAL;
"-=" return MINUS_EQUAL;
"*=" return MULTIPLY_EQUAL;
"/=" return DIVIDE_EQUAL;
"++" return PLUS_PLUS;
"--" return MINUS_MINUS;
"=" return EQUAL;
"//" return COMMENT;

(-)?[0-9]+  {return INT_VALUE;}

(-)?[0-9]+[.][0-9]+  {return FLOAT_VALUE;}

\'[A-Za-z0-9@&%$#!^()_*]\' {return CHAR_VALUE;}

\"[\x23-\x7E \t !]*\" {return STRING_VALUE;}

[_a-zA-z][_a-zA-Z0-9]* {return IDENTIFIER;}
\n {mylineno++;}
[ \t\r\v\f]+                ;

    /*
    ++
    --
    <<
    >>
    ~
    +=
    -=
    *=
    /=
    %=
    <<=
    >>=
    &=
    ^=
    |= */


%%
/*** C Code section ***/
