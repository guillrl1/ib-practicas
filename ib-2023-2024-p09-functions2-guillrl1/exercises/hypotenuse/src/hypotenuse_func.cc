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

#include "hypotenuse.h"
#include <iostream>

double ApproximateHypotenuse(int cateto1, int cateto2) {
  double epsilon = 1e-9;
  double root{1.0}, delta{1.0};
  int sum_catetos = (cateto1 * cateto1) + (cateto2 * cateto2);
  root = sqrt(sum_catetos);
  while (sum_catetos - (root * root) > epsilon) {
    if (delta > 0) {
      while ((root * root) < sum_catetos) {
        root += delta;
      }
    if (delta < 0) {
      while ((root * root) > sum_catetos) {
      root += delta;
      }
    }
    delta *= -0.5;
    }
  }
  return root;
}
