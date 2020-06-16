run: a.out
	./a.out
a.out: main.o ListaD.o
	gcc main.o ListaD.o -Wall -g3
main.o: main.c
	gcc main.c -c -Wall -g3
ListaD.o: ListaD.c
	gcc ListaD.c -c -Wall -g3
clean: 
	rm -f main.o ListaD.o a.out
