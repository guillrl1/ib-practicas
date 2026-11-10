#include <iostream>
#include <cmath>
#include "triangle-area.h"

void PrintProgramPurpose() {
  std::cout << "" << std::endl;
}
double GetUserInput() {
  double input;
  std::cin >> input;
  return input;
}
bool IsAValidTriangle(double side_a, double side_b, double side_c) {
  return (side_a < side_b + side_c && side_b < side_a + side_c && side_c < side_a + side_b);
}
double CalculateP(double side_a, double side_b, double side_c) {
  double p = (side_a + side_b + side_c) / 2.0;
  return p;
}
double CalculateArea(double p, double side_a, double side_b, double side_c) {
  double area = sqrt(p * (p - side_a) * (p - side_b) * (p - side_c));
  return area;
}
void PrintArea(double area) {
  std::cout << area << std::endl;
}