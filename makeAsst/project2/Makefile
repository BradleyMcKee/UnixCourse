cpp2html: cpp2html.o lex.yy.o
	gcc -g -DDEBUG cpp2html.o lex.yy.o -o cpp2html

cpp2html.o: cpp2html.c
	gcc -g -DDEBUG -c cpp2html.c

lex.yy.o: lex.yy.c
	gcc -g -c lex.yy.c

lex.yy.c: cppscanner.l
	flex cppscanner.l  lex.yy.c

