#include <fstream>
#include <combinar.h>

void Combinar(std::ifstream& archivo1, std::ifstream& archivo2, std::ofstream& salida, std::string palabraArchivo1, std::string palabraArchivo2) {
  while (archivo1 >> palabraArchivo1 && archivo2 >> palabraArchivo2) {
    salida << palabraArchivo1 << " " << palabraArchivo2 << " ";
  }
  while (archivo1 >> palabraArchivo1) {
    salida << palabraArchivo1 << " ";
  }
  while (archivo2 >> palabraArchivo2) {
    salida << palabraArchivo2 << " ";
  }
}