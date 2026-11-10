#include <iostream>

int main() {
  int numero, sum{0};
  std::cin >> numero;
  for(int i{0} ; i < numero; numero = numero/100) {
  sum += numero % 10;
  }
  if((sum % 2) == 0) {
    std::cout << "Es guay" << std::endl;
  }
  else {
    std::cout << "No es guay" << std::endl;
  }
  return 0;
}
