#include <iostream>
#include <vector>
#include <random>
#include "generate_vector.h"


/**
 * @brief Función principal que demuestra la generación de un vector aleatorio.
 *
 * En esta función, se genera un vector de 10 números aleatorios en el rango [5.0, 10.0]
 * utilizando la función GenerateVector() y se imprime cada componente del vector.
 *
 * @return 0 al finalizar el programa sin errores.
 */
int main() {
  // Generar un vector de 10 números aleatorios en el rango [5.0, 10.0]
  std::vector<double> my_vector = GenerateVector(10, 5.0, 10.0);

  // Imprimir cada componente del vector generado
  for (const auto& value : my_vector) {
    std::cout << "Componente: " << value << std::endl;
  }

  return 0;
}
