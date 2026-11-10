/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Guillermo López Concepción
 * @date 11 October 2023
 * @brief This program makes the integer division and remainder of two natural numbers
 *
 */

#include <iostream>

int main() {
  int number1, number2, division{0}, remainder{0};

  std::cin >> number1 >> number2;  
  
  if (number2 <= 0) {
    std::cerr;
    return 1;
  }

  division = number1 / number2;
  remainder = number1 % number2;

  std::cout << division << " " << remainder << std::endl;
  return 0;
}
