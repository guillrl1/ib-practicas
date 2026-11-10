#include "transformacion.h"

int main() {
  std::cout << "Ingrese los vectores de uno en uno por cin." << std::endl;
  std::vector<int> input;
  int num;
  while(std::cin >> num) {
    input.push_back(num);
  }
  std::cout << Transformar(input) << std::endl;
  return 0;
}