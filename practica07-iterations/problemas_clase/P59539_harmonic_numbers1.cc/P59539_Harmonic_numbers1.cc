/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P59539_harmonic_numbers.cc
 * @author Guillermo López Concepción
 * @date 2 November 2023
 * @brief This program reads a number n and prints the n-th harmonic number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n. 
 * @bug No known bugs
 */

#include<iostream>
#include<iomanip>

int main() {

  int number;
  double harmonic_num{0};
  
  std::cin >> number;
  for(double i{1}; i <= number; ++i) {
    harmonic_num += 1 / i;
  }
  std::cout << std::fixed << std::setprecision(4) << harmonic_num << std::endl;  
  return 0;
}
