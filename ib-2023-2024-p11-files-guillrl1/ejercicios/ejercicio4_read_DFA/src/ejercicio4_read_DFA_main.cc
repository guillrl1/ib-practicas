#include <iostream>
#include <fstream>
#include "ejercicio4_read_DFA.h"
#include "tools.h"

int main(int argc, char* argv[]) {
  std::ifstream finput{argv[1]};
  Usage(argc, argv);
  CreateFiles(finput);
  return 0;
}