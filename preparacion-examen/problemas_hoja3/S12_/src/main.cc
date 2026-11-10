#include "combination.h"

int main(int argc, char* argv[]) {
  std::string cadena1{argv[1]};
  std::string cadena2{argv[2]};

  std::string combinacion{Combinacion(cadena1, cadena2)};
  std::cout << combinacion << std::endl;
}