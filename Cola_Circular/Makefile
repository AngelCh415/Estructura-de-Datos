run: a.out
	./a.out
a.out: main.o ColaC.o
	gcc main.o ColaC.o -Wall -g3
main.o: main.c
	gcc main.c -c -Wall -g3
ColaC.o: ColaC.c
	gcc ColaC.c -c -Wall -g3
clear:
	rm -f ColaC.o main.o a.out
