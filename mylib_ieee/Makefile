CC = gcc
CFALGS = -g -Wall -O0

all: run 

########## BUILD LIBRARY

lib.a: ieee.o main.o 
	ar -qc $@ $^

ieee.o: IEEE.c ieee754.h
	$(CC) $(CFLAGS) $< -c -o $@

main.o: main.c ieee754.h
	$(CC) $(CFLAGS) $< -c -o $@

############# FABRIQUER LE .OUT 

file.out: main.o ieee.o lib.a 
	$(CC) $(CFLAGS) $^ -o $@ -lm

############## EXECUTION 

run: file.out lib.a
	./file.out



clean:
	rm -f *.o *.out *.a
