# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Guillermo López Concepción
# @date 27 Oct 2023
# @brief The Makefile compiles three files into an executable:
# triangle-area.cc, triangle-area_func.cc and triangle-area.h
#
# Use 'make clean' to delete .o files, executables or other type of trash

CC=g++
CFLAGS=-O0 -Wall
DEPS = triangle-area.h
OBJ = triangle-area.o triangle-area_func.o

all: triangle-area

%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

triangle-area: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: all clean

clean:
	rm -f triangle-area *.o *~ a.out
	find . -name '*~' -exec rm {} \;