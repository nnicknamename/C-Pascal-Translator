SYNTAXIC=syntaxique.o
LEXICAL=lex.o

libErr.a: $(SYNTAXIC) $(LEXICAL)
	ar rcs libErr.a $(SYNTAXIC) $(LEXICAL)

$(SYNTAXIC): syntaxiqueE.tab.c
	gcc -c  syntaxiqueE.tab.c -o $(SYNTAXIC) 

$(LEXICAL): lex.zz.c
	gcc -c lex.zz.c -o $(LEXICAL)

lex.zz.c: lexicalE.l
	flex -P zz lexicalE.l 
	
syntaxiqueE.tab.c: syntaxiqueE.y languages.h generator.h
	bison -d  syntaxiqueE.y 

clean:
	rm *.o lex.zz.c libErr.a syntaxiqueE.tab.c syntaxiqueE.tab.h