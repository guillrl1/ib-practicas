#include <iostream>
#include <fstream>
#include "ejercicio2_rotate.h"
#include "tools.h"

int main(int argc, char* argv[]) {
  std::ifstream finput{argv[1]};
  Usage(argc, argv);
  std::ofstream outputfile("rotated.txt");
  Convert(finput, outputfile);
  
  return 0;
}