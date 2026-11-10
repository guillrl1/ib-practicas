#include "modify.h"
void Borrar(std::ifstream& finput, std::ofstream& foutput, std::string del) {
  std::string word{""};
  while (finput >> word) {
    if(word != del) {
      foutput << word << " ";
    }
  }
}