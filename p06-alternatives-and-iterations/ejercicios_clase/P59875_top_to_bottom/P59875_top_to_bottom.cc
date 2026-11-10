/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P59875_top_to_bottom.cc  
 * @author Guillermo López Concepción guillrl1@users.noreply.github.com
 * @date 26 October 2023
 * @brief This program reads two numbers x and y, and prints all numbers between x and y (or between y and x), in decreasing order. 
 * @bug No known bugs
 */

#include<iostream>

int main() {
  int x, y;
  std::cin >> x >> y;

  if (x > y) {
    for (int i = x; i >= y; i--) {
      std::cout << i << std::endl;    
    }
  }
  else {
    for (int i = y; i >= x; i--) {
      std::cout << i << std::endl;
    }
  }
  
  return 0;
}
