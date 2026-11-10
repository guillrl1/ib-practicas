/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Guillermo López Concepción
 * @date 2 November 2023
 * @brief This program, given a chess board, computes the total number of coins on its white squares. 
 * @bug No known bugs
 */

#include <iostream>
  
int main() {
  int fila{0}, columna{0}, total{0};
  std::cin >> fila >> columna;
  char chess_board;
  for (int i = 0; i < fila; ++i) {
    for (int j = 0; j < columna; ++j) {
      std::cin >> chess_board;
      if ((j + i) % 2 == 0) {
        total += chess_board - '0';
      }
    }
  }
  std::cout << total << std::endl;
}
                      
