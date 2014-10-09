all: Program

Program:
	gcc *.c */*.c -o Program -Wall -std=c99

test: Program
	./Program
