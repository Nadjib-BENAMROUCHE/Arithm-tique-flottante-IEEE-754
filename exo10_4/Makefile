CC = gcc
CFALGS = -std=c99 -Wall -g 

all: run

exo3: exo4.c
	$(CC) $(CFALGS) -O0 $^ -o exo4.out -lm

run: exo3
	./exo4.out


fast: exo3.c
	$(CC) $(CFALGS) -Ofast $^ -o exo4fast.out -lm

run_fast: fast
	./exo4fast.out

clean:
	rm -f *.out *.o *~
  
