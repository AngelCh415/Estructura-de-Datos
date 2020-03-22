Hash.o: Hash.c
	gcc Hash.c -c

main.o: main.c
	gcc main.c -c

a.out: Hash.o main.o
	gcc main.o Hash.o

run: a.out
	./a.out

clean: 
	rm -f a.out Hash.o main.o
