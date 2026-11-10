/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P97156_nums_in_a_interval.cc
 * @author Guillermo López Concepción
 * @date 16 October 2023
 * @brief This program reads two numbers a and b, and prints all numbers between a and b. 
 * @bug No known bugs.
 */

#include <iostream>

int main() {
  int num2, num1;
  std::cin >> num1 >> num2;

  if (num1 < num2) {
    for (int i{num1}; i < num2; i++) {
      std::cout << i << ",";
    }
    std::cout << num2;
  }
  else if (num1 == num2) {
    std::cout << num1;
  }
  std::cout << std::endl;
  return 0;
}
