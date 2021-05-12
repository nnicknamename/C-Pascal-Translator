%{
    #include <stdlib.h>
    #include <string.h>
    #include "syntaxiqueE.tab.h"

%}
%option prefix="zz"
%option noyywrap
%option never-interactive
nl          "\n" 
digit       [0-9]
integer     {digit}+
%%

"unexpected" {return(UNEXPECTED);}
"expecting"  {return(EXPECTING);}
"syntax"     {return(SYNTAX);}
"error"      {return(ERROR);}
"at"         {return(AT);}
"line"       {return(LINE);}
"DEFINE"     {return(DEFINE);}
"INCLUDE"    {return(INCLUDE);}
"AUTO"       {return(AUTO);}
"STRUCT"     {return(STRUCT);}
"DOUBLE"     {return(DOUBLE);}
"INT"        {return(INT);}
"LONG"       {return(LONG);}
"SHORT"      {return(SHORT);}
"CHAR"       {return(CHAR);}
"FLOAT"      {return(FLOAT);}
"CONST"      {return(CONST);}
"SIGNED"     {return(SIGNED);}
"SIZEOF"     {return(SIZEOF);}
"TYPEDEF"    {return(TYPEDEF);}
"RETURN"     {return(RETURN);}
"VOID"       {return(VOID);}
"STATIC"     {return(STATIC);}
"UNSIGNED"   {return(UNSIGNED);}
"ENUM"       {return(ENUM);}
"EXTERN"     {return(EXTERN);}
"REGISTER"   {return(REGISTER);}
"UNION"      {return(UNION);}
"VOLATILE"   {return(VOLATILE);}
"WHILE"      {return(WHILE);}
"DO"         {return(DO);}
"FOR"        {return(FOR);}
"IF"         {return(IF);}
"ELSE"       {return(ELSE);}
"SWITCH"     {return(SWITCH);}
"CASE"       {return(CASE);}
"BREAK"      {return(BREAK);}
"DEFAULT"    {return(DEFAULT);}
"GOTO"       {return(GOTO);}
"CONTINUE"   {return(CONTINUE);} 
"ASSADD"     {return(ASSADD);}
"ASSMINUS"   {return(ASSMINUS);}
"ASSMULT"    {return(ASSMULT);}
"ASSDIVIDE"  {return(ASSDIVIDE);}
"ASSMOD"     {return(ASSMOD);}

"ASSBAND"    {return(ASSBAND);}
"ASSBOR"     {return(ASSBOR);}
"ASSBXOR"    {return(ASSBXOR);}
"ASSLSHIFT"  {return(ASSLSHIFT);}
"ASSRSHIFT"  {return(ASSRSHIFT);}
"INCR"       {return(INCR);}
"DECR"       {return(DECR);}     
"ADD"        {return(ADD);}
"MINUS"      {return(MINUS);}
"MULT"       {return(MULT);}
"DIVIDE"     {return(DIVIDE);}
"MOD"        {return(MOD);}

"EQUAL"      {return(EQUAL);}
"DIF"        {return(DIF);}
"SUP"        {return(SUP);}
"INF"        {return(INF);}
"SUPEQ"      {return(SUPEQ);}
"INFEQ"      {return(INFEQ);}
"AND"        {return(AND);}
"or"         {return(ORM);}
"OR"         {return(OR);}

"NOT"        {return(NOT);}

"BAND"       {return(BAND);}
"BOR"        {return(BOR);}
"BXOR"       {return(BXOR);}
"BOC"        {return(BOC);}
"LSHIFT"     {return(LSHIFT);}
"RSHIFT"     {return(RSHIFT);}
"EL"         {return(EL);}
{integer}    {zzlval.line=atoi(yytext);return(INTEGER);}
"VALINT"     {return(VALINT);}
"ID"         {return(ID);}
"VALSTR"     {return(VALSTR);}
"VALCHAR"    {return(VALCHAR);}
"HEAD"       {return(HEAD);}
"VALREAL"    {return(VALREAL);}
"'"          {return(AP);}
"("          {return('(');}
")"          {return(')');}
"{"          {return('{');}
"}"          {return('}');}
"["          {return('[');}
"]"          {return(']');}

"."          {return('.');} 

"#"          {return('#');}

"="          {return('=');}
     

","          {return(',');}


"?"          {return('?');}
":"          {return(':');}

{nl}        
<<EOF>>      {return(END);}
[ \t]+
.            {printf("Lexical error");}
%%
