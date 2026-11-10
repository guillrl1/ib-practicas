#include "clase_car.h"
#include <iostream>
#include <string>

int main() {
  std::cout << "Ingrese el modelo, la matricula y los kilometros del primer coche" << std::endl;
  Car car1;
  std::cin >> car1;
  std::cout << "Ingrese el modelo, la matricula y los kilometros del segundo coche" << std::endl;
  Car car2;
  std::cin >> car2; 
  
  if(car1 > car2) {
    std::cout << "El primer coche tiene mas kilometros que el segundo" << std::endl;
  }
  else if(car1 < car2) {
    std::cout << "El segundo coche tiene mas kilometros que el primero" << std::endl;
  }
  else {
    std::cout << "Los coches tienen los mismos kilometros" << std::endl;
  }
  return 0;
}