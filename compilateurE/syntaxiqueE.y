%{
    #include <stdlib.h>
    #include<stdio.h>
    #include<string.h>
    char lang;
    #include "generator.h"
    #include "languages.h"
    #define YY_DECL int zzlex (ZZSTYPE* yylval, ZZLTYPE * yylloc, yyscan_t yyscanner)
    #define COLOR_RED     "\x1b[31m"
    #define COLOR_RESET   "\x1b[0m"
    int get_lang();
    //#define YYERROR_VERBOSE
    typedef struct yy_buffer_state * YY_BUFFER_STATE;
    extern YY_BUFFER_STATE zz_scan_string(char * str);
    extern void zz_delete_buffer(YY_BUFFER_STATE buffer);
    void yyerror(const char *s);
    void printError(int line,char* unexpected,char* expecting);
    extern int yyparse();
    extern int yylex();
    extern FILE *zzin;

%}// Emitted in the header file, after the definition of YYSTYPE.
%name-prefix="zz"

/*KeyWords*/
%token DEFINE INCLUDE AUTO STRUCT DOUBLE INT LONG SHORT CHAR FLOAT
%token CONST SIGNED SIZEOF TYPEDEF RETURN VOID STATIC UNSIGNED
%token ENUM EXTERN  REGISTER UNION VOLATILE WHILE DO FOR IF
%token ELSE SWITCH CASE BREAK DEFAULT GOTO CONTINUE

/*Values*/
%token <t>VALINT VALREAL VALCHAR VALSTR ID

/*Arithmetic Operators*/
%token ADD MINUS MULT DIVIDE MOD INCR DECR

/*Relational Operators*/
%token EQUAL DIF SUP INF SUPEQ INFEQ

/*Logical Operators*/
%token AND OR NOT

/*Bitwise Operators*/
%token BAND BOR BXOR BOC LSHIFT RSHIFT

/*assignment operators*/
%token ASSADD ASSMINUS ASSMULT ASSDIVIDE ASSMOD 
%token ASSBAND ASSBOR ASSBXOR ASSLSHIFT ASSRSHIFT

%token UNEXPECTED EXPECTING SYNTAX ERROR AT LINE AP ORM 
%token <line> INTEGER
%union{
  struct {char* name;} t; 
    int line;
}
%token EL
%token HEAD
%token END
%type <t> X Y Z TERMINALS
%start SYNTAXERROR
%%

SYNTAXERROR:  
  |END {YYACCEPT;}
  |GLOBAL SYNTAXERROR
;
GLOBAL:SYNTAX ERROR ',' UNEXPECTED X ',' EXPECTING Y AT LINE  INTEGER '.' {printError($11,$5.name,$8.name);}
  |SYNTAX ERROR ',' UNEXPECTED X AT LINE  INTEGER '.' {printError($8,$5.name,"");}
;

Y:Y ORM Y  {strcat($1.name," ou ");strcat($1.name,$3.name);$$.name=strdup($1.name);}
  | X {$$.name=strdup($1.name);}
;
X:TERMINALS {$$.name=strdup($1.name);}
  |AP Z AP  {$$.name=strdup("\"");strcat($$.name,$2.name);strcat($$.name,"\"");}
  |Z        {$$.name=strdup("\"");strcat($$.name,$1.name);strcat($$.name,"\"");}
;
TERMINALS:VALINT{$$.name=getTypeName(get_lang(),t_integer);}     
  |VALREAL      {$$.name=getTypeName(get_lang(),t_real);}
  |VALCHAR      {$$.name=getTypeName(get_lang(),t_character);}
  |VALSTR       {$$.name=getTypeName(get_lang(),t_string);}
  |ID           {$$.name=getTypeName(get_lang(),t_id);}
  |DEFINE       {$$.name="define";}
  |INCLUDE      {$$.name="include";}
  |AUTO         {$$.name="auto";}
  |STRUCT       {$$.name="strct";}
  |DOUBLE       {$$.name="double";}
  |INT          {$$.name="int";}
  |LONG         {$$.name="long";}
  |SHORT        {$$.name="short";}
  |CHAR         {$$.name="char";}
  |FLOAT        {$$.name="float";}
  |CONST        {$$.name="const";}
  |SIGNED       {$$.name="signed";}
  |SIZEOF       {$$.name="sizeof";}
  |TYPEDEF      {$$.name="typedef";}
  |RETURN       {$$.name="return";}
  |VOID         {$$.name="void";}
  |STATIC       {$$.name="static";}
  |UNSIGNED     {$$.name="unsigned";}
  |ENUM         {$$.name="enum";}
  |EXTERN       {$$.name="extern";}
  |REGISTER     {$$.name="register";}
  |UNION        {$$.name="union";}
  |VOLATILE     {$$.name="volatile";}
  |WHILE        {$$.name="while";}
  |DO           {$$.name="do";}
  |FOR          {$$.name="for";} 
  |IF           {$$.name="if";}
  |ELSE         {$$.name="else";}
  |SWITCH       {$$.name="switch";}
  |CASE         {$$.name="case";}
  |BREAK        {$$.name="break";}
  |DEFAULT      {$$.name="default";}
  |GOTO         {$$.name="goto";}
  |CONTINUE     {$$.name="continue";}
;
Z:'('           {$$.name="(";}
  |')'          {$$.name=")";}
  |'{'          {$$.name="{";}
  |'}'          {$$.name="}";}
  |'['          {$$.name="[";}
  |']'          {$$.name="]";}
  |'.'          {$$.name=".";}
  |'#'          {$$.name="#";}
  |'='          {$$.name="=";}
  |','          {$$.name=",";}
  |'?'          {$$.name="?";}
  |':'          {$$.name=":";}
  |ASSBAND       {$$.name="&=";}
  |ASSBOR       {$$.name="|=";}
  |ASSBXOR      {$$.name="^=";}
  |ASSLSHIFT    {$$.name="<<=";}
  |ASSRSHIFT    {$$.name=">>=";}
  |ASSADD       {$$.name="+=";}
  |ASSMINUS     {$$.name="-=";}
  |ASSMULT      {$$.name="*=";}
  |ASSDIVIDE    {$$.name="/=";}
  |ASSMOD       {$$.name="%=";}
  |BAND         {$$.name="&";}
  |BOR          {$$.name="|";}
  |BXOR         {$$.name="^";}
  |BOC          {$$.name="~";}
  |LSHIFT       {$$.name="<<";}
  |RSHIFT       {$$.name=">>";}
  |AND          {$$.name="&&";}
  |OR           {$$.name="||";}
  |NOT          {$$.name="!";}
  |EQUAL        {$$.name="=";}
  |DIF          {$$.name="!=";}
  |SUP          {$$.name=">";}
  |INF          {$$.name="<";}
  |SUPEQ        {$$.name=">=";}
  |INFEQ        {$$.name="<=";}
  |ADD          {$$.name="+";}
  |MINUS        {$$.name="-";}
  |MULT         {$$.name="*";}
  |DIVIDE       {$$.name="/";}
  |MOD          {$$.name="%";}
  |INCR         {$$.name="++";}
  |EL           {$$.name=";";}
  |DECR         {$$.name="--";}
;
%%
void printError(int line,char* unexpected,char* expecting){
  switch(lang){
    case 'f':
      if(expecting!=""){
        printf("Erreur syntaxique" " dans la ligne %d, un %s est attendu, mais %s est trouvé.\n",line,expecting,unexpected);
      }else{
        printf("Erreur syntaxique" " dans la ligne %d,%s n'est pas attendu.\n",line,unexpected);
      }
    break;
    case 'e':
      if(expecting!=""){
        printf("Syntax error" ", unexpected %s, expecting %s at line %d.\n",unexpected,expecting,line);
      }else{
        printf("Syntax error" ", unexpected %s,at line %d.\n",unexpected,line);
      }
    break;
  }
}

int get_lang(){
  if(lang=='f'){
    return fr;
  }else{
    return en;
  }
}

void yyerror(const char *s) {
  //printf("%s.\n",s);
}
void generateError(char *error,char lan){
  lang=lan;
  switch(lang){
    case 'e':
    case 'f':{
      YY_BUFFER_STATE buffer = zz_scan_string(error);
      yyparse();
      zz_delete_buffer(buffer);}
    break;
    default:
      printf(COLOR_RED"%s\n"COLOR_RESET,error);
  }
}
/*int main(int argc, char *argv[]) {
  FILE *myfile = fopen(argv[1], "r");
  if (!myfile) {
    printf("file not found");
    return -1;
  zzin = myfile;
  zzin = myfile;
  yyparse();
}*/


