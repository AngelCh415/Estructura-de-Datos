run: a.out
	./a.out
a.out: main.o Vector.o
	gcc main.o Vector.o -Wall -g3
main.o: main.c
	gcc main.c -c -Wall -g3
Vector.o: Vector.c
	gcc Vector.c -c -Wall -g3
clear:
	rm -f Vector.o main.o a.out
