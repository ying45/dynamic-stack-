CC = gcc
CFLAGS = -Wall -c
OBJFILES = main.o stack.o
TARGET = stack_app

all : $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(OBJFILES) -o $(TARGET)

main.o : main.c
	$(CC) $(CFLAGS) main.c

stack.o : stack.c
	$(CC) $(CFLAGS) stack.c

clean :
	rm -rf *o $(TARGET)
