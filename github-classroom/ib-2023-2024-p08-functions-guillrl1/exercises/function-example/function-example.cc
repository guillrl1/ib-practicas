#include <iostream>
#include <cmath>
#include "function-example.h"

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (argc != 4) {
    std::cout << "Invalid Parameters" << std::endl;
    return 1;
  }
  double x = std::stod(argv[1]);
  double y = std::stod(argv[2]);
  double t = std::stod(argv[3]);
  double result = CalculateFunction(x, y , t);
  PrintResult(result);

  return 0;
}
