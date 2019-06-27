CC = gcc
EXEC = tree

all: main.o node.o tree.o
	$(CC) -o $(EXEC) main.o node.o tree.o
main.o: main.c
	$(CC) -o main.o -c main.c -Wall -O
node.o: node.c
	$(CC) -o node.o -c node.c -Wall -O
tree.o: tree.c
	$(CC) -o tree.o -c tree.c -Wall -O
clean:
	rm -f *.o core
mrproper: clean
	rm -f $(EXEC)
