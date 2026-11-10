#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include "reduce_sum.h"

/**
 * @brief Punto de entrada principal del programa.
 *
 * @param argc Número de argumentos de la línea de comandos.
 * @param argv Arreglo de cadenas que contiene los argumentos de la línea de comandos.
 *
 * @return 0 si el programa se ejecuta correctamente, 1 si hay un error en los argumentos.
 */
int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "Uso: " << argv[0] << " valor1 valor2 valor3 ...\n";
    return 1;
  }
  
  // Crear un vector para almacenar los valores convertidos de los argumentos de la línea de comandos.
  std::vector<double> vector1;

  // Convertir y almacenar los argumentos de la línea de comandos en el vector1.
  for (int i = 1; i < argc; ++i) {
    vector1.push_back(std::strtod(argv[i], nullptr));
  }

  // Imprimir la suma de los valores en el vector1 con formato fijo y precisión de 1 decimal.
  std::cout << std::fixed << std::setprecision(1) << ReduceSum(vector1) << std::endl;

  return 0;
}
