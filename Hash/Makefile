Hash.o: Hash.c
	gcc Hash.c -c -Wall -g3

main.o: main.c
	gcc main.c -c -Wall -g3
Lista.o: Lista.c
	gcc Lista.c -c -Wall -g3

a.out: Hash.o main.o Lista.o
	gcc main.o Hash.o Lista.o

run: a.out
	./a.out

clean:
	rm -f a.out Hash.o main.o Lista.o
