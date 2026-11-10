/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Guillermo López Concepción
 * @date 16 October 2023
 * @brief This program This program takes an uppercase letter and transforms it
 * into lowercase.
 *
 */

#include <iostream>

int main() {

  char LetraMayus;
  char LetraMinus;

  std::cout << "Ingrese una letra Mayúscula ";
  std::cin >> LetraMayus;

  if (LetraMayus >= 'A' && LetraMayus<= 'Z') {
    LetraMinus = LetraMayus + 32;
    std::cout << "Su letra en minúscula es " << LetraMinus << std::endl;
  } 
  else {
    std::cout << "El caracter introducido es inválido" << std::endl;
  }

return 0;
}
