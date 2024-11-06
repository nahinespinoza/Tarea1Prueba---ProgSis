CC = gcc
CFLAGS = -Wall -finput-charset=UTF-8 -fexec-charset=UTF-8 -g -O2

# Detectar el sistema operativo
ifeq ($(OS),Windows_NT)
    DEL = del
else
    DEL = rm -f
endif

all: programa

programa: main.o datos.o calculos.o
	$(CC) -o programa main.o datos.o calculos.o

main.o: main.c libreria.h
	$(CC) $(CFLAGS) -c main.c

datos.o: datos.c libreria.h
	$(CC) $(CFLAGS) -c datos.c

calculos.o: calculos.c libreria.h
	$(CC) $(CFLAGS) -c calculos.c

%.s: %.o
	objdump -d $< > $@

clean:
	$(DEL) *.o programa