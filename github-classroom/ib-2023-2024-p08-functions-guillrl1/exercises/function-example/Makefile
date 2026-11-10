# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Guillermo López Concepción
# @date 27 Oct 2023
# @brief The Makefile compiles three files into an executable:
# function-example.cc, function-example_func.cc and function-example.h
#
# Use 'make clean' to delete .o files, executables or other type of trash

CC=g++
CFLAGS=-O0 -Wall
DEPS = function-example.h
OBJ = function-example.o function-example_func.o

all: function-example

%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

function-example: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: all clean

clean:
	rm -f function-example *.o *~ a.out
	find . -name '*~' -exec rm {} \;