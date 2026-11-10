/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Guillermo López Concepción guillrl1@users.noreply.github.com
 * @date 16 November 2023
 * @brief Programa que implementa una función para modificar una cadena de caracteres,
 * convirtiendo las consonantes a minúsculas y las vocales a mayúsculas.
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
  if (argc != 2) {
    std::cout << argv[0] << ": La cadena introducida como parámetro no es válida" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}
