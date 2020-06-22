run: a.out
	./a.out
a.out: main.o ListaCD.o
	gcc main.o ListaCD.o -Wall -g3
main.o: main.c
	gcc main.c -c -Wall -g3
ListaCD.o: ListaCD.c
	gcc ListaCD.c -c -Wall -g3
clear:
	rm -f ListaCD.o main.o a.out
