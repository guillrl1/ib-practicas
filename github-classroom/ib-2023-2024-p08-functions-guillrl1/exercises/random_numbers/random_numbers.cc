#include <iostream>
#include <cstdlib>
#include <ctime>
#include "random_numbers.h"

int main(int argc, char* argv[]) {
  PrintProgramPurpose();

  if (argc != 3) {
    std::cout << "Invalid usage" << std::endl;
    return 1;
  }
  int min = std::stod(argv[1]);
  int max = std::stod(argv[2]);
  std::srand(static_cast<unsigned int>(std::time(nullptr)));
  int result = RandomNumber(min, max);
  PrintResult(result);

  return 0;
}
