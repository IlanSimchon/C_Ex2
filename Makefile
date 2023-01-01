AR = ar -rcs
CC = gcc
CFLAGS = -g -Wall

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) -c my_mat.c -o my_mat.o
my_mat.a: my_mat.o
	$(AR) my_mat.a my_mat.o
	ranlib my_mat.a
main.o: main.c my_mat.h
	$(CC) $(CFLAGS) -c main.c -o main.o
connections: my_mat.a main.o
	$(CC) $(CFLAGS) main.o my_mat.a -o connections -lm
all:connections

.PHONY: clean all

clean:
	rm -f *.o *.a connections


