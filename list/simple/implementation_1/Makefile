CC=gcc
CFLAGS=-Wall -O
LDFLAGS=
EXEC=list

all: $(EXEC)

list: main.o list.o node.o
	$(CC) -o list main.o node.o list.o $(LDFLAGS)

main.o: main.c
	$(CC) -o main.o -c main.c -Wall -O

list.o: list.c
	$(CC) -o list.o -c list.c -Wall -O

node.o: node.c
	$(CC) -o node.o -c node.c -Wall -O

clean:
	rm -f *.o core

mrproper: clean
	rm -f list
