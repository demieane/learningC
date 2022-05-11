CC=gcc
CFLAGS=-I.
DEPS=mylibrary.h
OBJ= main.o functions.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

myprog: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)