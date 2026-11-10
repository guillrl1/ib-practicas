/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Guillermo López Concepción
 * @date 16 October 2023
 * @brief This program prints the truth table of the logical operators AND, OR,
 * NOT.
 *
 */


#include <iostream>

int main() {
  bool a, b;

  std::cout << "a\tb\tAND\tOR\tNOT a\tNOT b" << std::endl;

  a = true;
  b = true;
  std::cout << a << "\t" << b << "\t" << (a && b) << "\t" << (a || b) << "\t" << !a << "\t" << !b << std::endl;

  a = true;
  b = false;
  std::cout << a << "\t" << b << "\t" << (a && b) << "\t" << (a || b) << "\t" << !a << "\t" << !b << std::endl;

  a = false;
  b = true;
  std::cout << a << "\t" << b << "\t" << (a && b) << "\t" << (a || b) << "\t" << !a << "\t" << !b << std::endl;

  a = false;
  b = false;
  std::cout << a << "\t" << b << "\t" << (a && b) << "\t" << (a || b) << "\t" << !a << "\t" << !b << std::endl;

  return 0;
}

