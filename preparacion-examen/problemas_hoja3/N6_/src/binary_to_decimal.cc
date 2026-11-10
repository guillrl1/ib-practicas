#include "binary_to_decimal.h"

int Convertir(int input) {
  int result{0};
  for(int i{0} ; input > 0; ++i) {
    if((input % 10) == 1) {
    result += pow(2, i);
    }
    input /= 10;
  }
  return result;
}