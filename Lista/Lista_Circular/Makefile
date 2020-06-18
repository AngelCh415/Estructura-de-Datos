run: a.out
	./a.out
a.out: main.o ListaC.o
	gcc main.o ListaC.o -Wall -g3
main.o: main.c
	gcc main.c -c -Wall -g3
ListaC.o: ListaC.c
	gcc ListaC.c -c -Wall -g3
clean:
	rm -f a.out main.o ListaC.o
