/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Guillermo López Concepción guillrl1@users.noreply.github.com
 * @date 16 November 2023
 * @brief Programa que incluye una función para evaluar un polinomio en un valor dado.
 * @bug No known bugs
 */

#include <iostream>
#include <vector>
#include <sstream>
#include "scalar_product.h"
#include "tools.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::string input1 = argv[1];
  std::string input2 = argv[2];
  std::vector<int> vector1 = ConseguirVector1(input1);
  std::vector<int> vector2 = ConseguirVector2(input2);
  int resultado = CalcularEscalar(vector1, vector2);
  std::cout << resultado << std::endl;

  return 0;
}