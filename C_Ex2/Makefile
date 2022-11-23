.PHONY:clean all

AR = AR-rcs
CC = gcc
CFLAGS = -g-Wall

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(CFLAGS) -c main.c
my_mat.a: my_mat.o
	$(AR) my_mat.a my_mat.o
	ranlib my_mat.a
connections: my_mat.a main.o
	$(CC) $(FLAGS) my_mat.a main.o -o connections -lm
all:connections

clean:
	rm -f *.o *.a connections


