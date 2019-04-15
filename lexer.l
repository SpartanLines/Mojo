%{
/* C code to be copied verbatim */
#include <stdio.h>
#include "Parser.tab.h"
%}

/* This tells flex to read only one input file */
%option noyywrap


%%
(\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/)|(\/\/.*)   {return COMMENT;}

    /* variable types */
"const"     return CONST;
"int"       return INT ;
"float"     return FLOAT;
"string"    return STRING;
"char"      return CHAR;
"bool"      return BOOL;
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
"return" return RETURN;
"main" return MAIN;
"void" return VOID;
"include" return INCLUDE;
"#" return HASH;
    /* operators */

"'" return SINGLE_QUOTE;
"\""return DOUBLE_QUOTE;
";" return SEMI_COLON;
"(" return OPENED_BRACKET;
")" return CLOSED_BRACKET;
"{" return OPENED_BRACE;
"}" return CLOSED_BRACE;
"[" return OPENED_SQ_BRACKET;
"]" return CLOSED_SQ_BRACKET;
"," return COMMA;
":" return TWO_DOTS;

"&" return AND;
"|"  return OR;
"==" return EQUAL_EQUAL;
"!=" return NOT_EQUAL;
">"  return GREATER_THAN;
">=" return GREATER_THAN_EQUAL;
"<"   return SMALLER_THAN;
"<=" return SMALLER_THAN_EQUAL;
"!" 	return NOT;


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
(_|[a-zA-Z])(_|[a-zA-Z]|[0-9])*  {return IDENTIFIER;}


%%
/*** C Code section ***/
