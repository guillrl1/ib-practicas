#include <iostream>
#include <vector>
#include "concatenacion.h"

/**
 * @brief Función principal que concatena dos vectores ingresados por el usuario.
 *
 * En esta función, se obtienen dos vectores del usuario utilizando
 * la función GetVector(), se concatenan utilizando ConcatenateVectors()
 * y se imprime el resultado.
 *
 * @return 0 al finalizar el programa sin errores.
 */
int main() {
  // Obtener dos vectores del usuario
  std::vector<int> vector1 = GetVector();
  std::vector<int> vector2 = GetVector();

  // Concatenar los dos vectores
  std::vector<int> concatenatedvector = ConcatenateVectors(vector1, vector2);

  // Imprimir el vector resultante
  for (int n : concatenatedvector) {
    std::cout << n << " ";
  }
  std::cout << std::endl;

  return 0;
}
