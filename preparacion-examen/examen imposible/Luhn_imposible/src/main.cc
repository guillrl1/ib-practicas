#include "Luhn.h"

int main(int argc, char* argv[]) {
  if(argc != 2) {
    Usage(argv[0]);
    return 1;
  }
  std::string tarjeta{argv[1]};
  if(Calcular(tarjeta)) {
    std::cout << "Buenarda\n";
  }
  else {
    std::cout << "subnormal\n";
  }
  return 0;
}

