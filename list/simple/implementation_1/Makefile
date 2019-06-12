
all: list

list: main.o list.o node.o
	gcc -o list main.o node.o list.o

main.o: main.c
	gcc -o main.o -c main.c -Wall -O

list.o: list.c
	gcc -o list.o -c list.c -Wall -O

node.o: node.c
	gcc -o node.o -c node.c -Wall -O

clean:
	rm -f *.o core

mrproper: clean
	rm -f list
