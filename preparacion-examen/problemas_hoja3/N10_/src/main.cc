#include "binomial.h"

int main(int argc, char* argv[]) {
  Usage(argc);
  int n{std::stoi(argv[1])};
  int k{std::stoi(argv[2])};
  bool comprobar{Comprobar(n, k)};
  if(!comprobar) {
    std::cout << "Valores no válidos" << std::endl;
    return 1;
  }
  int resultado{Coeficiente(n, k)};
  std::cout << "El resultado es: " << resultado << std::endl;
}