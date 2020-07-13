run: a.out
	./a.out
a.out: main.o ArbolA.o
	gcc main.o ArbolA.o -Wall -g3
main.o: main.c
	gcc main.c -c -Wall -g3
ArbolA.o: ArbolA.c
	gcc ArbolA.c -c -Wall -g3

clear:
	rm -f main.o ArbolA.o a.out
