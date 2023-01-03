CC = gcc
CFALGS = -std=c99 -Wall -g 

all: run

exo3: exo3.c
	$(CC) $(CFALGS) -O0 $^ -o exo3.out -lm

run: exo3
	./exo3.out


fast: exo3.c
	$(CC) $(CFALGS) -Ofast $^ -o exo3fast.out -lm

run_fast: fast
	./exo3fast.out

clean:
	rm -f *.out *.o
  
