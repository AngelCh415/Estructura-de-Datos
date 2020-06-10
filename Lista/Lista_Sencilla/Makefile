lista.o: Lista.c
	gcc Lista.c -c -Wall
main.o: main.c 
	gcc main.c -c -Wall
a.out: Lista.o main.o
	gcc main.o Lista.o -Wall
run: a.out
	./a.out
clean:
	rm -f a.out Lista.o main.o
