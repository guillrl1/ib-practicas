# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Guillermo López Concepción
# @date 27 Oct 2023
# @brief The Makefile compiles three files into an executable:
# random_numbers.cc, random_numbers_func.cc and random_numbers.h
#
# Use 'make clean' to delete .o files, executables or other type of trash

CC=g++
CFLAGS=-O0 -Wall
DEPS = random_numbers.h
OBJ = random_numbers.o random_numbers_func.o

all: random_numbers

%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

random_numbers: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: all clean

clean:
	rm -f random_numbers *.o *~ a.out
	find . -name '*~' -exec rm {} \;