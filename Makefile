CC = gcc
CFLAGS = -Wall -Wextra -g

all: program

program: main.c io.c stats.c
	$(CC) $(CFLAGS) main.c io.c stats.c -o program

clean:
	rm -f program
