# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Guillermo López Concepción
# @date 27 Oct 2023
# @brief The Makefile compiles three files into an executable:
# change-case.cc, change-case_func.cc and change-case.h
#
# Use 'make clean' to delete .o files, executables or other type of trash

CC=g++
CFLAGS=-O0 -Wall
DEPS = change-case.h
OBJ = change-case.o change-case_func.o

all: change-case

%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

change-case: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: all clean

clean:
	rm -f change-case *.o *~ a.out
	find . -name '*~' -exec rm {} \;

