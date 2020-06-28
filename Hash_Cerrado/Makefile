run: a.out
	./a.out
a.out: main.o HashC.o
	gcc main.o HashC.o -Wall -g3
main.o: main.c
	gcc main.c -c -Wall -g3
HashC.o: HashC.c
	gcc HashC.c -c -Wall -g3
clear:
	rm -f HashC.o main.o a.out 
