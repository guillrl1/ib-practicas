#include <iostream>
#include <vector>
#include <random>
#include "generate_vector.h"

/**
 * @brief Genera un vector de números aleatorios en un rango dado.
 *
 * Esta función utiliza la librería estándar de C++ para generar un vector de números
 * aleatorios en el rango [lower, upper].
 *
 * @param size Tamaño del vector a generar.
 * @param lower Límite inferior del rango.
 * @param upper Límite superior del rango.
 * @return Vector de números aleatorios en el rango [lower, upper].
 */
std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<double> dis(lower, upper);
  std::vector<double> result;
  result.reserve(size);

  for (int i = 0; i < size; ++i) {
    result.push_back(dis(gen));
  }

  return result;
}