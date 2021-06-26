%{
    #include <stdlib.h>
    #include <string.h>
    #include "semantic_types.h"  
    #include "id_checker.h"
    #include "syntaxique.tab.h"
    extern char* concat(const char * args,...);
    int numberLines(char* str);
    char *tr_string(char *string);
    int line=1;
    int errorNum=0;
    id_list *id_table=NULL;
%}
nl          "\n" 
id          [a-zA-Z_][a-zA-Z0-9_]*  
string      \"[^\"]*\"
coment      ("//".*)|("/*"([^*]|"*"[^/])*"*/")
header      "<"[a-zA-Z0-9]+".h>"
character   ("'"."'")|("'\\"."'")
digit       ("-"[0-9]|[0-9])
integer     {digit}+
real        {digit}+"."{digit}+
%%

"define"    {return(DEFINE);}
"include"   {return(INCLUDE);}
"auto"      {return(AUTO);}
"struct"    {return(STRUCT);}
"double"    {return(DOUBLE);}
"int"       {return(INT);}
"long"      {return(LONG);}
"short"     {return(SHORT);}
"char"      {return(CHAR);}
"float"     {return(FLOAT);}
"const"     {return(CONST);}
"signed"    {return(SIGNED);}
"sizeof"    {return(SIZEOF);}
"typedef"   {return(TYPEDEF);}
"return"    {return(RETURN);}
"void"      {return(VOID);}
"static"    {return(STATIC);}
"unsigned"  {return(UNSIGNED);}
"enum"      {return(ENUM);}
"extern"    {return(EXTERN);}
"register"  {return(REGISTER);}
"union"     {return(UNION);}
"volatile"  {return(VOLATILE);}
"while"     {return(WHILE);}
"do"        {return(DO);}
"for"       {return(FOR);}
"if"        {return(IF);}
"else"      {return(ELSE);}
"switch"    {return(SWITCH);}
"case"      {return(CASE);}
"break"     {return(BREAK);}
"default"   {return(DEFAULT);}
"goto"      {return(GOTO);}
"continue"  {return(CONTINUE);}

"NULL"      {return (NIL);}

{id}        {yylval.code=(char *)get_p_id(&id_table,strdup(yytext));return(ID);}
{string}    {yylval.code=(char *)strdup(tr_string(yytext));line+=numberLines(yytext);return(VALSTR);}
{coment}    {line+=numberLines(yytext);}
{character} {yylval.code=(char *)strdup(yytext);return(VALCHAR);}
{header}    {return(HEAD);}
{real}      {yylval.code=(char *)strdup(yytext);return(VALREAL);}
{integer}   {yylval.code=(char *)strdup(yytext);return(VALINT);}
"("         {return('(');}
")"         {return(')');}
"{"         {return('{');}
"}"         {return('}');}
"["         {return('[');}
"]"         {return(']');}

"."         {return('.');}

"#"         {return('#');}

"="         {return('=');}
     
"+="        {return(ASSADD);}
"-="        {return(ASSMINUS);}
"*="        {return(ASSMULT);}
"/="        {return(ASSDIVIDE);}
"%="        {return(ASSMOD);}

"&="        {return(ASSBAND);}
"|="        {return(ASSBOR);}
"^="        {return(ASSBXOR);}
"<<="       {return(ASSLSHIFT);}
">>="       {return(ASSRSHIFT);}

","         {return(',');}

"++"        {return(INCR);}
"--"        {return(DECR);}     
"+"         {return(ADD);}
"-"         {return(MINUS);}
"*"         {return(MULT);}
"/"         {return(DIVIDE);}
"%"         {return(MOD);}

"=="        {return(EQUAL);}
"!="        {return(DIF);}
">"         {return(SUP);}
"<"         {return(INF);}
">="        {return(SUPEQ);}
"<="        {return(INFEQ);}
"?"         {return('?');}
":"         {return(':');}

"&&"        {return(AND);}
"||"        {return(OR);}
"!"         {return(NOT);}

"&"         {return(BAND);}
"|"         {return(BOR);}
"^"         {return(BXOR);}
"~"         {return(BOC);}
"<<"        {return(LSHIFT);}
">>"        {return(RSHIFT);}

";"         {return(EL);}
{nl}        {line++;}
<<EOF>>     {return(END);}
[ \t]+
.           {errorNum++;printf("Lexical error at line %d\n",line);}
%%

char *tr_string(char *string){
    char *res=malloc(sizeof(char)*strlen(string)-2);
    string++;
    strncpy(res,string,strlen(string)-1);
    res=concat("'",res,"'",NULL);
    return res;
}

int numberLines(char* str){
    int result=0;
    char s=' ';
    int i=0;
    do{
        if(s=='\n')result++;
        i++;
        s=str[i];
    }while(s!='\0');
    return result;
}