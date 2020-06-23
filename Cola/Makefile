a.out: main.o cola.o Lista.o
	gcc main.o cola.o Lista.o

run: a.out
		./a.out

cola.o: cola.c
	gcc cola.c -c -Wall -g3

main.o: main.c
	gcc main.c -c -Wall -g3
Lista.o:
	gcc Lista.c -c -Wall -g3
clean:
	rm -f a.out main.o cola.o Lista.o
