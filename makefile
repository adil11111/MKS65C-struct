all: struct.o
	gcc struct.o

run:
	./a.out

struct.o: struct.c struct.h
	gcc -c struct.c
