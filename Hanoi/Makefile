Hanoi.o: Hanoi.c
	gcc Hanoi.c -c -Wall

main.o: main.c
	gcc main.c -c -Wall

a.out: main.o Hanoi.o
	gcc main.o Hanoi.o -Wall

run: a.out
	./a.out
limpiar: 
	rm -f a.out main.o Hanoi.o
