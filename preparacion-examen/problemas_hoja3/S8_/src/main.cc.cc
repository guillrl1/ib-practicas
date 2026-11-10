#include "part_of.h"

int main(int argc, char* argv[]) {
  std::string cadena{argv[1]};
  std::string subcadena{argv[2]};
  bool resultado = Comprobar(cadena, subcadena);
  if(resultado) {
    std::cout << "La subcadena está contenida en la cadena" << std::endl;
  }
  else{
    std::cout << "La subcadena no se encuentra en la cadena" << std::endl;
  }
  return 0;
}