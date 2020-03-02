Hanoi.o: Hanoi.c
	gcc Hanoi.c -c

main.o: main.c
	gcc main.c -c

a.out: main.o Hanoi.o
	gcc main.o Hanoi.o

run: a.out
	./a.out
limpiar: 
	rm -f a.out main.o Hanoi.o
