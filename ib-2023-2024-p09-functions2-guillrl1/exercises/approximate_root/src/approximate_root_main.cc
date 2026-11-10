/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Guillermo López Concepción guillrl1@users.noreply.github.com
 * @date 16 November 2023
 * @brief Programa que implementa una función para calcular la raíz cuadrada de un número real
 * con un margen de error de ±EPSILON.
 * @bug No known bugs
 */

#include <iostream>
#include <cmath>
#include "approximate_root.h"
#include "tools.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  int number =  std::stoi(argv[1]);
  double root = ApproximateRoot(number);
  std::cout << root << std::endl;

  return 0;
}