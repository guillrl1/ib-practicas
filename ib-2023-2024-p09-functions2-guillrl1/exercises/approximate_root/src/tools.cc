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

#include <iostream>
#include <cstdlib>    // exit
#include "tools.h"    

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 */
void Usage(int argc, char *argv[]) {
  if (argc != 2 && std::stoi (argv[1]) < 0) {
    std::cout << argv[0] << ": Los parámetros introducidos no son válidos" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}
