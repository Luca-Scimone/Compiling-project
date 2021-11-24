CFLAGS=-Wall -Werror -c
prefixe = projet


all:  $(prefixe).l $(prefixe).y gencode.o tab_symboles.o tab_fonctions.o parser.o option.o numero_boucle.o
	yacc -v -d $(prefixe).y
	flex $(prefixe).l
	gcc -DYYDEBUG=1 y.tab.c lex.yy.c tab_symboles.o tab_fonctions.o gencode.o option.o parser.o numero_boucle.o -lfl -o scalpa

tab_symboles.o: tab_symboles.c tab_symboles.h 
	gcc $(CFLAGS) tab_symboles.c -o $@

tab_fonctions.o: tab_fonctions.c tab_fonctions.h 
	gcc $(CFLAGS) tab_fonctions.c -o $@


gencode.o: gencode.c gencode.h 
	gcc $(CFLAGS) gencode.c -o $@

parser.o: parser.c parser.h 
	gcc $(CFLAGS) parser.c -o $@

option.o: option.c option.h 
	gcc $(CFLAGS) option.c -o $@

numero_boucle.o: numero_boucle.c numero_boucle.h 
	gcc $(CFLAGS) numero_boucle.c -o $@

clean :
	rm *.o y.tab.c y.tab.h lex.yy.c a.out *.s y.output test/*.s
