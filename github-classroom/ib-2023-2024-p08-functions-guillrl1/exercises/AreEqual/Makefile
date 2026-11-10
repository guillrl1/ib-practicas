# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Guillermo López Concepción
# @date 27 Oct 2023
# @brief The Makefile compiles three files into an executable:
# AreEqual.cc, AreEqual_func.cc and AreEqual.h
#
# Use 'make clean' to delete .o files, executables or other type of trash

CC=g++
CFLAGS=-O0 -Wall
DEPS = AreEqual.h
OBJ = AreEqual.o AreEqual_func.o

all: AreEqual

%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

AreEqual: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: all clean

clean:
	rm -f AreEqual *.o *~ a.out
	find . -name '*~' -exec rm {} \;