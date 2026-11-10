#include "binomial.h"

void Usage(int argc) {
  if(argc != 3) {
    std::cout << "Debe introducir los valores por línea de comandos" << std::endl;
    exit(EXIT_SUCCESS);
  }
}

bool Comprobar(const int& n, const int& k) {
  if(n >= 0 && k > 0) {
    return true;
  }
  return false;
}
int Factorial(const int& n) {
  int factorial{n};
  for(int i{n - 1} ; i > 0 ; i--) {
    factorial *= i;
  }
  return factorial;
}
int Coeficiente(const int& n, const int& k) {
  int resultado;
  int z{n - k};
  resultado = Factorial(n) / (Factorial(k) * Factorial(z));
  return resultado;
}