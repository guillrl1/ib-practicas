/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P52847_maximum_of_three_integers.cc
 * @author Guillermo López Concepción
 * @date 9 October 2023
 * @brief This program reads three numbers and prints their maximum. 
 * @bug No known bugs
 */

#include <iostream>

int main() {

  int number1, number2, number3, max;
  std::cin >> number1 >> number2 >> number3;     
  max = number1;

  if (number2 > max) {
    max = number2;
  }
  if (number3 > max) {
    max = number3;
  }
  std::cout << max << std::endl;
  return 0;
}

