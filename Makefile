run: a.out
	./a.out
Arbol.o: Arbol.c
	gcc Arbol.c -c -Wall -g3
main.o: main.c
	gcc main.c -c -Wall -g3
a.out: Arbol.o main.o
	gcc Arbol.o main.o -Wall -g3
clean:
	rm -f a.out Arbol.o main.o


