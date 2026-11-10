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


#include "approximate_root.h"
#include <cmath>

double ApproximateRoot(int number) {
  double epsilon = 1e-4;
  double root{1.0}, delta{1.0};
  root = sqrt(number);
  while (number - (root * root) > epsilon) {
    if (delta > 0) {
      while ((root * root) < number) {
        root += delta;
      }
    if (delta < 0) {
      while ((root * root) > number) {
      root += delta;
      }
    }
    delta *= -0.5;
    }
  }
  return root;
}
