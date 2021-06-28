%{
    #include <stdlib.h>
    #include <string.h>
    #include "semantic_types.h"
    #include "func_trans.tab.h"

%}
%option prefix="xx"
%option noyywrap
%option never-interactive

text [ ]*[=:\+\-/*\^a-zA-Z0-9_\[\],;\(\)][=:\+\-/*\^a-zA-Z0-9_\[\],;\(\) ]*
%%
"'"     {return ('\'');}
"%c"    {return (PC);}
"%d"    {return (PD);}
"%e"    {return (PE);}
"%f"    {return (PF);}
"%i"    {return (PI);}
"%o"    {return (PO);}
"%s"    {return (PS);}
"%u"    {return (PU);}
"%x"    {return (PX);}
"%%"    {return (PP);}

"\\a"    {return (SA);}
"\\b"    {return (SB);}
"\\f"    {return (SF);}
"\\n"    {return (SN);}
"\\r"    {return (SR);}
"\\t"    {return (ST);}
"\\v"    {return (SV);}
"\\\\"   {return (SS);}

{text}  {xxlval.string=(char *)strdup(yytext);return (TEXT);}
<<EOF>>      {return(END);}
[ \t]+
.            {printf("Lexical error %s.",yytext);}
%%
