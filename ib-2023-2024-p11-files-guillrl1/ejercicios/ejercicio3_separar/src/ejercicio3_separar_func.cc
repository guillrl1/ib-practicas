#include <iostream>
#include <fstream>
#include "ejercicio3_separar.h"

void CreateFiles(std::ifstream& finput) {
  std::string strinput;
  while (finput >> strinput) {
    for(int i{0}; i < 1; ++i) {
      char c = std::toupper(strinput[0]);
      std::ofstream outputfile(std::string(1, c) + ".txt", std::ios::app);
      outputfile << strinput << std::endl;
    }
  }
}