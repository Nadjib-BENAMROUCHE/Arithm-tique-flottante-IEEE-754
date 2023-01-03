CC = gcc
CFALGS = -g -std=c99 -Wall 


all: run


debug: exo10.c
	$(CC) $(CFALGS) -O0 exo10.c -o exo10.o -lm

run: debug
	./exo10.o

fast: exo6.c
	$(CC) $(CFALGS) -Ofast exo10.c -o exo10.o -lm

run_fast: fast
	./exo10.o

clean:
	rm -f *.o *.out *.a
