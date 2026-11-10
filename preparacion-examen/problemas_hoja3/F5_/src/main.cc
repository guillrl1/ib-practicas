#include "number_lines.h"

int main(int argc, char* argv[]) {
  std::ifstream finput{argv[1]};
  std::ofstream foutput{argv[2]};
  Numerar(finput, foutput); 

}