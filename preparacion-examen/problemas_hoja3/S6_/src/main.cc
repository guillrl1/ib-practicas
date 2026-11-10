#include "acronym.h"

int main() {
  std::cout << "Ingrese una cadena." << std::endl;
  std::string input;
  std::getline(std::cin, input);
  std::cout << Acronym(input) << std::endl;
  return 0;
}