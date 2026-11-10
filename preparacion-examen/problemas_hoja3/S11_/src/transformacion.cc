#include "transformacion.h"

std::string Transformar(const std::vector<int>& input) {
  std::string transformado{""};
  for(int i : input) {
    if(i <= 9) {
      transformado += i + '0';
    }
    if(i >= 10 && i <= 35) {
      transformado += 'A' + (i - 10);
    }
  }
  return transformado;
}