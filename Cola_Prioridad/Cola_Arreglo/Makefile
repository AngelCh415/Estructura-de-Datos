run: a.out
	./a.out
a.out: main.o ColaPA.o
	gcc main.o ColaPA.o -Wall -g3
main.o: main.c
	gcc main.c -c -Wall -g3
ColaPA.o: ColaPA.c
	gcc ColaPA.c -c -Wall -g3
clear:
	rm -f ColaPA.o main.o a.out
