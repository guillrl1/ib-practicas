#include "leap_years.h"

int main(int argc, char* argv[]) {
  int fecha{std::stoi(argv[1])};
  bool comprobar{Comprobar(fecha)};
  if(comprobar) {
    std::cout << "Es bisiesto" << std::endl;
  }
  else {
    std::cout << "No es bisiesto" << std::endl;
  }
  return 0;
}