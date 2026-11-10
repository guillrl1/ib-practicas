#include <iostream>
#include <cmath>
#include "triangle-area.h"

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (argc !=4) {
    std::cout << "Invalid usage, You must insert the three sides of the triangle as parameters." << std::endl;
    return 1;
  }
  double side_a = std::stod(argv[1]);
  double side_b = std::stod(argv[2]);
  double side_c = std::stod(argv[3]);
  if (!IsAValidTriangle(side_a, side_b, side_c)) {
    std::cout << "Invalid Triangle" << std::endl;
    return 1;
  }
  double p = CalculateP(side_a, side_b, side_c);
  double area = CalculateArea(p, side_a, side_b, side_c);
  PrintArea(area);

  return 0;
}
