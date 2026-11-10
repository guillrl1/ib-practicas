#include <iostream>
#include <vector>
#include "concatenacion.h"

/**
 * @brief Obtiene un vector de enteros ingresados por el usuario.
 *
 * Esta función solicita al usuario el tamaño del vector y luego lee
 * los elementos del vector desde la entrada estándar.
 *
 * @return Un vector de enteros ingresados por el usuario.
 */
std::vector<int> GetVector() {
  int vectorsize;
  std::cin >> vectorsize;
  std::vector<int> vector;
  for (int i{0}; i < vectorsize; i++) {
    int num;
    std::cin >> num;
    vector.push_back(num);
  }
  return vector;
}

/**
 * @brief Concatena dos vectores de enteros.
 *
 * Esta función toma dos vectores como entrada y devuelve un tercer
 * vector que es la concatenación de los dos vectores de entrada.
 *
 * @param vector1 Primer vector a concatenar.
 * @param vector2 Segundo vector a concatenar.
 * @return Vector resultante de la concatenación de vector1 y vector2.
 */
std::vector<int> ConcatenateVectors(const std::vector<int>& vector1, const std::vector<int>& vector2) {
  std::vector<int> concatenatedvector = vector1;
  concatenatedvector.insert(concatenatedvector.end(), vector2.begin(), vector2.end());
  return concatenatedvector;
}