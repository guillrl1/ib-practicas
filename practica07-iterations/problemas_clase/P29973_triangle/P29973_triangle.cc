/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Guillermo López Concepción
 * @date 2 November 2023
 * @brief This program, , given a number n, prints a “triangle of size n”.
 * @bug No known bugs
 */

#include <iostream>

int main() {
  int numero;
  std::string caracter = "*";
  std::cin >> numero;
  for (int i{0}; i < numero; i++) {
     std::cout << caracter <<std::endl;
    caracter = "*" + caracter;
  }
  return 0;
}

