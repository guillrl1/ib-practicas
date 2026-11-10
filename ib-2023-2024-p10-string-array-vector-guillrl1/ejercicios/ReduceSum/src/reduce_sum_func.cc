#include <iostream>
#include <vector>
#include <cstdlib>
#include "reduce_sum.h"

/**
 * @brief Calcula la suma de los elementos en un vector.
 *
 * @param vector1 Vector de números en punto flotante (double) a sumar.
 *
 * @return La suma de los elementos en el vector1.
 */
double ReduceSum(std::vector<double> vector1) {
  double result{0};
  for (const auto &value : vector1) {
    result += value;
  }
  return result;
}