#include "compare.h"

void Comparar(std::ifstream& finput1, std::ifstream& finput2) {
  std::string lineaf1, lineaf2;
  int contador{1};
  while(std::getline(finput1, lineaf1) && std::getline(finput2, lineaf2)) {
    if(lineaf1 != lineaf2) {
      std::cout << "La linea " << contador << " es distinta" << std::endl;
      exit(EXIT_SUCCESS);
    }
    contador++;
  }
  std::cout << "Los ficheros son iguales" << std::endl;
}