/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P98960_upper_lowercase.cc
 * @author Guillermo López Concepción
 * @date 13 October 2023
 * @brief This program reads a letter and prints it in lowercase if it was uppercase, or prints it in uppercase if it was lowercase.
 * @bug No known bugs
 */

#include <cctype>
#include <iostream>

int main() {
  char letter;
  std::cin >> letter;
  
  if (std::islower(letter)) {
    letter = toupper(letter);
  }
  else {
    letter = tolower(letter);
  }
  std::cout << letter << std::endl;  
  return 0;
}  
