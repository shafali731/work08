all: sieve.o driver.o
	gcc sieve.o driver.o -lm

driver.o: driver.c sieve.h
	gcc -c driver.c

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

run:
	./a.out

clear:
	rm *.o
