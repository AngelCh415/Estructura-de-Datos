pila.o: pila.c
	gcc pila.c -c 
main.o: main.c 
	gcc main.c -c
a.out: pila.o main.o
	gcc main.o pila.o 
run: a.out 
	./a.out
clean:
	rm -f a.out pila.o main.o
