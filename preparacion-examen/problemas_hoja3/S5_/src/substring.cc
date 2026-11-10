#include "substring.h"

std::string Transformar(std::string cadena, int posicion, int cantidad) {
  std::string subcadena{""};
  while(cantidad > 0) {
    int i{posicion - 1};
    subcadena += cadena[i];
    cantidad--;
    posicion++;
  }
  return subcadena;
}