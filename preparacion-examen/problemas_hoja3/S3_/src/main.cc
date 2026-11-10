#include "next_letter.h"

int main(int argc, char* argv[]) {
  std::string input{argv[1]};
  std::string convertida{Convertir(input)};
  std::cout << convertida << std::endl;
}