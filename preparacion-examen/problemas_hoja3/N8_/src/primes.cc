#include "primes.h"

bool IsPrime(int value) {
  for(int i{2} ; i <= value / 2 ; i++) {
    if((value % i) == 0) {
      return false;
    }
  }
  return true;
}
void Factorizar(int input) {
  int i{2};
  while(!IsPrime(input) && input > 1) {
    if(input % i == 0) {
      std::cout << i << std::endl;
      input /= i;
    }
    else {
      i++;
    }
  }
}