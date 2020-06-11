a.out: pila.o main.o Lista.o
	gcc main.o pila.o Lista.o
pila.o: pila.c
	gcc pila.c -c -Wall -g3
main.o: main.c 
	gcc main.c -c -Wall -g3
Lista.o: Lista.c
	gcc Lista.c -c -Wall -g3
run: a.out 
	./a.out
clean:
	rm -f a.out pila.o main.o Lista.o
