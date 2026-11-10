#include "substring.h"

int main(int argc, char* argv[]) {
  std::string cadena{argv[1]};
  int posicion{std::stoi(argv[2])};
  int cantidad{std::stoi(argv[3])};

  std::string subcadena{Transformar(cadena, posicion, cantidad)};
  std::cout << subcadena << std::endl;
  return 0;
}
