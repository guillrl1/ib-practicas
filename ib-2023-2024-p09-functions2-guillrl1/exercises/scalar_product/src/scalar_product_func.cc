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

#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include "scalar_product.h"

std::vector<int> ConseguirVector1(std::string input1) {
  std::vector<int> vector1;
  std::istringstream ss1(input1);
  std::string token1;
  while (std::getline(ss1, token1, ',')) {
      vector1.push_back(std::stoi(token1));
  }

  return vector1;
}
std::vector<int> ConseguirVector2(std::string input2) {
    std::vector<int> vector2;
    std::istringstream ss2(input2);
    std::string token2;
    while (std::getline(ss2, token2, ',')) {
        vector2.push_back(std::stoi(token2));
    }

  return vector2;
}

int CalcularEscalar(std::vector<int> vector1, std::vector<int> vector2) {
  if (vector1.size() != vector2.size()) {
    std::cout << "Los vectores introducidos no tienen la misma longitud";
    exit(EXIT_SUCCESS);
  }
  int resultado = 0;
  for (size_t i = 0; i < vector1.size(); ++i) {
        resultado += vector1[i] * vector2[i];
    }
  
  return resultado;
}
