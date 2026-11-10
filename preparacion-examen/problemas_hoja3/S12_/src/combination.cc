#include "combination.h"

std::string Combinacion(const std::string& cadena1, const std::string& cadena2) {
  std::string combinacion{""};
  int i{0};
  while(cadena1.size() > i && cadena2.size() > i) {
    combinacion += cadena1[i];
    combinacion += cadena2[i];
    i++;
  }
  while(cadena1.size() > i) {
    combinacion += cadena1[i];
    i++;
  }
  while(cadena2.size() > i) {
    combinacion += cadena2[i];
    i++;
  }
  return combinacion;
  }
