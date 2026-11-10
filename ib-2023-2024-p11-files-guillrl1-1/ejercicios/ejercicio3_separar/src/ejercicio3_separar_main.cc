#include <iostream>
#include <fstream>
#include "ejercicio3_separar.h"
#include "tools.h"

int main(int argc, char* argv[]) {
  std::ifstream finput{argv[1]};
  Usage(argc, argv);
  CreateFiles(finput);
  return 0;
}