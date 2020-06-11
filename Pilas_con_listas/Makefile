a.out: pila.o main.o Lista.o
	gcc main.o pila.o Lista.o
pila.o: pila.c
	gcc pila.c -c -Wall 
main.o: main.c 
	gcc main.c -c -Wall
Lista.o: Lista.c
	gcc Lista.c -c -Wall
run: a.out 
	./a.out
clean:
	rm -f a.out pila.o main.o
