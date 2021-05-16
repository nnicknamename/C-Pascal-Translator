comp: syntaxique.tab.c lex.yy.c compilateurE/libErr.a
	gcc  syntaxique.tab.c  lex.yy.c -LcompilateurE  -lErr -lfl -o comp
	
syntaxique.tab.c: syntaxique.y compilateurE/generator.h type_comparator.h semantic.h
	bison -d syntaxique.y 

lex.yy.c: lexical.l syntaxique.tab.h semantic.h semantic_types.h id_checker.h
	flex  lexical.l 

clean: 
	rm lex.yy.c syntaxique.tab.c syntaxique.tab.h comp

html: syntaxique.xml
	xsltproc /usr/share/bison/xslt/xml2xhtml.xsl syntaxique.xml >syntaxique.html