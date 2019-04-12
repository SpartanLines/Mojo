%{
/* C code to be copied verbatim */
#include <stdio.h>
%}

/* This tells flex to read only one input file */
%option noyywrap
IDENTIFIER [_a-zA-z][_a-zA-Z0-9]*

%%
[&%|(){}!/+-*[]] return yytext[0];
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
"switch"    return SWTICH;
"case"      return CASE;
"do"        return DO;
"default"   return DEFAULT;
"elif"      return ELIF;
"else"      return ELSE;
"return" return RETURN;
"main" return MAIN;
"include" return INCLUDE;
"#" return HASH;
    /* operators */

"'" return SINGLE_QUOTE;
"\"" return DOUBLE_QUOTE;
";" return SEMI_COLON;
"(" return OPENED_BRACKET;
")" return CLOSED_BRACKET;
"{" return OPENED_BRACE;
"}" return CLOSED_BRACE;
"[" return OPENED_SQ_BRACKET;
"]" return CLOSED_SQ_BRACKET;
"," return COMMA;
":" return TWO_DOTS;

"&&" return AND_AND;
"||"  return OR_OR;
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


%%
/*** C Code section ***/

int main(void)
{
    /* Call the lexer, then quit. */
    yylex();
    return 0;
}