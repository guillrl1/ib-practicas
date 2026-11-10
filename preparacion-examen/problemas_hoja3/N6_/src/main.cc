#include "binary_to_decimal.h"

void Usage(char* argv) {
  std::cout << "El programa " << argv << " necesita que se pase el numero binario por linea de comandos." << std::endl;
}

int main(int argc, char* argv[]) {
  if(argc!= 2) {
    Usage(argv[0]);
  }
  int input{std::stoi(argv[1])};
  std::cout << Convertir(input) << std::endl;
}