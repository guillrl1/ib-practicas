/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Guillermo López Concepción
 * @date 9 October 2023
 * @brief This program prints on screen the basic arithmetic operators.
 *
 */

#include <iostream>

int main() {
  int num1, num2, suma{0}, resta{0}, multiplicacion{0}, division{0}, resto{0};
 
  std::cout << "Ingrese un numero: ";
  std::cin >> num1;
  std::cout << "Ingrese otro numero: ";
  std::cin >> num2;

  suma = num1 + num2;
  resta = num1 - num2;
  multiplicacion = num1 * num2;
  division = num1 / num2;
  resto = num1 % num2;
 
  std::cout << num1 << " + " << num2 << " = " << suma << std::endl;
  std::cout << num1 << " - " << num2 << " = " << resta << std::endl;
  std::cout << num1 << " * " << num2 << " = " << multiplicacion << std::endl;
  std::cout << num1 << " / " << num2 << " = " << division << std::endl;
  std::cout << num1 << " % " << num2 << " = " << resto << std::endl;
  
  return 0;
}
