#include "number_lines.h"

void Numerar(std::ifstream& finput, std::ofstream& foutput) {
  std::string linea{""};
  int num_linea{1};
  while(std::getline(finput, linea)) {
    foutput << num_linea << ": " << linea << std::endl;
    num_linea++;
  }
}