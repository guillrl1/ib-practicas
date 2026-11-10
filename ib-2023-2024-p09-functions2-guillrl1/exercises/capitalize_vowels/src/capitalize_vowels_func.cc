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

#include "capitalize_vowels.h"
#include <iostream>

std::string CapitalizeVowels(std::string input) {
  for (char &c : input) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
      c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        c = std::toupper(c);
      }
    else {
      c = std::tolower(c);
    }
  }
  return input;
}