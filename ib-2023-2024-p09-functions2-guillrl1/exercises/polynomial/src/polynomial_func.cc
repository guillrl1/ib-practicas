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
#include <iostream>
#include <sstream>
#include "polynomial.h"

std::vector<int> ConseguirVector1(std::string input1) {
  std::vector<int> vector1;
  std::istringstream ss1(input1);
  std::string token1;
  while (std::getline(ss1, token1, ',')) {
      vector1.push_back(std::stoi(token1));
  }

  return vector1;
}

int evaluatePolynomial(const std::vector<int>& coefficients, int value) {
    double result = 0.0;
    int degree = coefficients.size() - 1;

    for (int i = 0; i <= degree; ++i) {
        result += coefficients[i] * pow(value, degree - i);
    }

    return result;
}