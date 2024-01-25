GGC = gcc
SOURCES = $(wildcard *.c)
BINAIRES = $(pastsubst %.c,%.o,${SOURCES})

all: main

main : main.c
#${GCC} calculatrice.o main.c -o main
	${GCC} $^ -o $@

#calculatrice.o: calculatrice.c
%.o: %.c
#${GCC} -c calculatrice.c
	${GCC} -c $<

clean: 
	rm main
	rm *.o
