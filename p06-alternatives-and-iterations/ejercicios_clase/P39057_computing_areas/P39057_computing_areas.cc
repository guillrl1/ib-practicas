/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P39057_computing_areas.cc 
 * @author Guillermo López Concepción guillrl1@users.noreply.github.com
 * @date 26 October 2023
 * @brief This program reads several descriptions of rectangles and circles, and for each one prints its corresponding area.
 * @bug No known bugs
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

int main() {
  int input;

  std:: cin >> input;
  std::string shape;
 
 for (int i{0}; i < input; i++) {
    std::cin >> shape;    
    if (shape == "circle") {
      double radius;
      std::cin >> radius;
      double area = M_PI * pow(radius, 2);
      std::cout << std::fixed << std::setprecision(6) << area << std::endl;
    }
    if (shape == "rectangle") {
      double lenght, width; 
      std::cin >> lenght >> width;
      double area = lenght * width;
      std::cout << std::fixed << std::setprecision(6) << area << std::endl;
    }
  }
  return 0;
}
