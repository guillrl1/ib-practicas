#include <iostream>
#include <cstdlib>
#include <ctime>
#include "random_numbers.h"

void PrintProgramPurpose() {
  std::cout << "Este programa genera un número aleatorio en un intervalo [n, m]." << std::endl;
}
int RandomNumber(int min, int max) {
  return min + std::rand() % (max - min + 1);
}
void PrintResult(int result) {
  std::cout << result << std::endl;
}