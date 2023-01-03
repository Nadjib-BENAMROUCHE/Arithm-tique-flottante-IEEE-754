CC = gcc
CFALGS = -g -std=c99 -Wall 


all: run


debug: exo6.c
	$(CC) $(CFALGS) -O0 exo6.c -o exo6.o -lm

run: debug
	./exo6.o

fast: exo6.c
	$(CC) $(CFALGS) -Ofast exo6.c -o exo6.o -lm

run_fast: fast
	./exo6.o

clean:
	rm -f *.o *.out *.a
