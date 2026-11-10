#include "next_letter.h"

std::string Convertir(std::string input) {
  std::string convertida{""};
  for(char& c : input) {
    convertida += c + 1;
  }
  return convertida;
}