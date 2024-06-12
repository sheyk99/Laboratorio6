CC = gcc

main: main.c stack.c stack.h
	$(CC) main.c stack.c -o main

clean:
	rm -f main *.o