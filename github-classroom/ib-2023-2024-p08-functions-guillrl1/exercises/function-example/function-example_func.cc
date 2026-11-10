#include <iostream>
#include <cmath>
#include "function-example.h"

void PrintProgramPurpose() {
  std::cout << "" << std::endl;
}
double CalculateFunction(int x, int y, int t) {
  double result = (sqrt(2 * t - 4)) / (x * x - y * y);
  return result;
}
void PrintResult(double result){
  std::cout << result << std::endl;
}
