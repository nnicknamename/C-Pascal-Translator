SYNTAXIC=syntaxique.o
LEXICAL=lex.o

libfunc_trans.a: $(SYNTAXIC) $(LEXICAL)
	ar rcs libfunc_trans.a $(SYNTAXIC) $(LEXICAL)

$(SYNTAXIC): func_trans.tab.c 
	gcc -c  func_trans.tab.c -o $(SYNTAXIC) 

$(LEXICAL): lex.xx.c 
	gcc -c lex.xx.c -o $(LEXICAL)

lex.xx.c: func_trans.l
	flex -P xx func_trans.l 
	
func_trans.tab.c: func_trans.y func_trans.h semantic.h
	bison -d  func_trans.y 

clean:
	rm *.o lex.xx.c libfunc_trans.a func_trans.tab.c func_trans.tab.h