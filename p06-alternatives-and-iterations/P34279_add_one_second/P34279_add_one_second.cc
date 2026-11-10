/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @file P34279_add_one_second.cc
 * @author Guillermo López Concepción
 * @date 16 October 2023
 * @brief This program adds one second to a clock time, given its hours, minutes and seconds. 
 * @bug No known bugs.
 */

#include <iostream>

int main() {

  int hours, minutes, seconds;
  std::cin >> hours >> minutes >> seconds;
  seconds ++;
  
  if (seconds == 60) {
    minutes ++;
    seconds = 0;
  }
  if (minutes == 60) {
    hours ++;
    minutes = 0;     
  }
  if (hours == 24) {
    hours = 0;
  }
  printf("%02d:%02d:%02d\n", hours, minutes, seconds);
  return 0;
}
