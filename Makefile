all:
	gcc main.c -Ofast -lm
	./a.out 100000