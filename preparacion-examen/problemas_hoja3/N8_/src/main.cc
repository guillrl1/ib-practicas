#include "primes.h"

int main(int argc, char* argv[]) {
  int input{std::stoi(argv[1])};
  Factorizar(input);

  return 0;
}