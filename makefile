# build and executable named myprog from hello.c
CC = gcc

#compiler flags:
# -g	adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
CFLAGS = -g -Wall

#the build target executable:
TARGET = myprog
SOURCE_FILE = hello

all: $(SOURCE_FILE).c
	$(CC) $(FLAGS) -o $(TARGET) $(SOURCE_FILE).c

# To start over from scratch, type 'make clean'. 	
clean: 
	$(RM) $(TARGET)
