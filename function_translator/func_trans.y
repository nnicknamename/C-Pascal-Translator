%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include "../semantic_types.h"
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
    op_list * args;
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
%type  <string> FUNCTION SPECIALCHAR FORMSPEC FORMATSTR
%type  <func> INSIDEFORMAT
%start  CODE 
%%
CODE: 
  |FORMATSTR  {res=$1;YYACCEPT;}
;

FORMATSTR: '\'' INSIDEFORMAT '\'' {$$=sprint_func($2," ,");}
;

INSIDEFORMAT:INSIDEFORMAT INSIDEFORMAT {chain_func_rep($1,$2);$$=$1;}
  |TEXT {init_func_rep(&$$);$$->text=concat("'",$1,"'",NULL);$$->type=simple_text;}
  |FORMSPEC {init_func_rep(&$$);$$->text=args->ops.op;args=args->next;$$->type=form_spec;}
  |SPECIALCHAR {init_func_rep(&$$);$$->text=$1;$$->type=special_char;}
;


FORMSPEC:PC 
  |PD       
  |PE       
  |PF       
  |PI       
  |PO       
  |PS       
  |PU       
  |PX       
  |PP       
;

SPECIALCHAR:SA  {$$="#7";}
  |SB           {$$="#8";}
  |ST           {$$="#9";}
  |SN           {$$="#10";}
  |SV           {$$="#11";}
  |SF           {$$="#12";}
  |SR           {$$="#13";}
  |SS           {$$="\\\\";}
;

%%

char *generate_function(char * format,op_list *arg){
  args=arg;
  YY_BUFFER_STATE buffer = xx_scan_string(format);
  yyparse();
  xx_delete_buffer(buffer);
  return concat("write( ",res," )",NULL);
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