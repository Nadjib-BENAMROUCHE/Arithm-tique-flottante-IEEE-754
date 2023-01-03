CC = gcc
CFALGS = -g -std=c99 -Wall -O0
AROUND_TO_0 = -FE_TOWARDZERO
AROUND_TO_PINF = -FE_UPWARD
AROUND_TO_MINF = -FE_DOWNWARD


all: run

################## Arrondi au plus proche ##########################

debug: exo5.c
	$(CC) $(CFALGS) exo5.c -o exo5.o -lm

run: debug
	./exo5.o

###################### Arrondi vers 0 ############################
debug_to_0: exo5.c
	$(CC) $(CFALGS) $(AROUND_TO_0) exo5.c -o exo5_0.o -lm

run_to_0: debug_to_0
	./exo5_0.o

################ Arrondi vers plus l infini #######################

debug_to_pinf: exo5.c
	$(CC) $(CFALGS) $(AROUND_TO_PINF) exo5.c -o exo5_pinf.o -lm

run_to_pinf: debug_to_pinf
	./exo5_pinf.o

################ Arrondi vers moin l infini #######################

debug_to_minf: exo5.c
	$(CC) $(CFALGS) $(AROUND_TO_0) exo5.c -o exo5_minf.o lm

run_to_minf: debug_to_minf
	./exo5_minf.o




clean:
	rm -f *.o *.out *.a
