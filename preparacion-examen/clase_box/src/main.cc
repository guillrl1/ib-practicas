#include "clase_box.h"
#include <iostream>

int main() {
  std::cout << "Ingresa las medidas de la caja1 " << std::endl;
  Box box1{};
  std::cin >> box1;
  std::cout << "Ingresa las medidas de la caja2 " << std::endl;
  Box box2{};
  std::cin >> box2;
  std::cout << "Las medidas de la caja 1 son: " << box1 << std::endl;
  std::cout << "Las medidas de la caja 2 son: " << box2 << std::endl;  
  std::cout << "siendo longitud, altura y amplitud respectivamente" << std::endl;
  if (box1 == box2) {
    std::cout << "Las cajas son iguales" << std::endl;
  }
  else {
    std::cout << "Las cajas no son iguales" << std::endl;
  }
}