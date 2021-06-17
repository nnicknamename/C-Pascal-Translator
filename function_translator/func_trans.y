%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include "func_trans.h"
    #include "semantic.h"
    #define YYERROR_VERBOSE

    #define YY_DECL int xxlex (XXSTYPE* yylval, XXLTYPE * yylloc, yyscan_t yyscanner)
    //#define YYERROR_VERBOSE
    
    typedef struct yy_buffer_state * YY_BUFFER_STATE;
    extern YY_BUFFER_STATE xx_scan_string(char * str);
    extern void xx_delete_buffer(YY_BUFFER_STATE buffer);
    void yyerror(const char *s);
    void printError(int line,char* unexpected,char* expecting);
    extern int yyparse();
    extern int yylex();
    char *res;
    extern FILE *xxin;

%}// Emitted in the header file, after the definition of YYSTYPE->
%name-prefix="xx"

%union{
  char * string ;
  func_rep *func;
}

%token <string> TEXT PC PD PE PF PI PO PS PU PX PP
%token <string> SA SB SF SN SR ST SV SS END
%type <string> FUNCTION
%type  <func> SPECIALCHAR PARAMS INSIDEFORMAT FORMSPEC FORMATSTR

%start  CODE 
%%
CODE: 
  |FUNCTION  ';'{res=$1;YYACCEPT;}
;

FUNCTION: TEXT '(' FORMATSTR ',' PARAMS ')' {$$=concat($1,"(",generate_result($3,$5),")",NULL);}
  | TEXT '(' FORMATSTR ')' {$$=concat($1,"(",generate_result($3,NULL),");",NULL);}
;

FORMATSTR: '\'' INSIDEFORMAT '\'' {$$=$2;}
;

PARAMS: PARAMS ',' PARAMS {printf("params\n");chain_func_rep($1,$3);$$=$1;}
  |'\'' TEXT '\'' {init_func_rep(&$$);$$->text=concat("' ",$2," '",NULL);$$->type=parameter;}
  |TEXT  {init_func_rep(&$$);$$->text=$1;$$->type=parameter;}
;

INSIDEFORMAT:INSIDEFORMAT INSIDEFORMAT {chain_func_rep($1,$2);$$=$1;}
  |TEXT {init_func_rep(&$$);$$->text=$1;$$->type=simple_text;}
  |','  {init_func_rep(&$$);$$->text=",";$$->type=simple_text;}
  |FORMSPEC {$$=$1;}
  |SPECIALCHAR {$$=$1;}
;

FORMSPEC:PC {init_func_rep(&$$);$$->text=NULL;$$->type=form_spec;}
  |PD       {init_func_rep(&$$);$$->text=NULL;$$->type=form_spec;}
  |PE       {init_func_rep(&$$);$$->text=NULL;$$->type=form_spec;}
  |PF       {init_func_rep(&$$);$$->text=NULL;$$->type=form_spec;}
  |PI       {init_func_rep(&$$);$$->text=NULL;$$->type=form_spec;}
  |PO       {init_func_rep(&$$);$$->text=NULL;$$->type=form_spec;}
  |PS       {init_func_rep(&$$);$$->text=NULL;$$->type=form_spec;}
  |PU       {init_func_rep(&$$);$$->text=NULL;$$->type=form_spec;}
  |PX       {init_func_rep(&$$);$$->text=NULL;$$->type=form_spec;}
  |PP       {init_func_rep(&$$);$$->text=NULL;$$->type=form_spec;}
;

SPECIALCHAR:SA  {init_func_rep(&$$);$$->text="#7";$$->type=special_char;}
  |SB           {init_func_rep(&$$);$$->text="#8";$$->type=special_char;}
  |ST           {init_func_rep(&$$);$$->text="#9";$$->type=special_char;}
  |SN           {init_func_rep(&$$);$$->text="#10";$$->type=special_char;}
  |SV           {init_func_rep(&$$);$$->text="#11";$$->type=special_char;}
  |SF           {init_func_rep(&$$);$$->text="#12";$$->type=special_char;}
  |SR           {init_func_rep(&$$);$$->text="#13";$$->type=special_char;}
  |SS           {init_func_rep(&$$);$$->text="\\";$$->type=special_char;}
;

%%

char *generate_function(char * input){
  YY_BUFFER_STATE buffer = xx_scan_string(input);
  yyparse();
  xx_delete_buffer(buffer);
  return res;
}
void yyerror(const char *s) {
  printf("%s->\n",s);
}
/*int main(int argc, char *argv[]) {
  FILE *myfile = fopen(argv[1], "r");
  if (!myfile) {
    printf("file not found");
    return -1;
  }
  xxin = myfile;
  yyparse();
  return 0;
}*/