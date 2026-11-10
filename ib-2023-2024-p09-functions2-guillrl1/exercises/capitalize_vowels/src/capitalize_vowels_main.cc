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
#include "capitalize_vowels.h"
#include "tools.h"


int main(int argc, char* argv[]) {
  //PrintProgramPurpose;
  Usage(argc, argv);
  std::string input = argv[1];
  std::string result = CapitalizeVowels(input);
  std::cout << result << std::endl;

  return 0;
}