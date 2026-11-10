/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Guillermo López Concepción guillrl1@users.noreply.github.com
 * @date 16 November 2023
 * @brief Programa que utiliza una función para calcular la hipotenusa de un triángulo rectángulo.
 * @bug No known bugs
 */

#include <iostream>
#include "hypotenuse.h"
#include "tools.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  int cateto1 = std::stoi(argv[1]);
  int cateto2 = std::stoi(argv[2]);
  double root = ApproximateHypotenuse(cateto1, cateto2);
  std::cout << root << std::endl;

  return 0;
}