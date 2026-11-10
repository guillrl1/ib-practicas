#include "clase_box.h"

int main() {
  Box box1(20, 20, 20);
  Box box2(20, 20, 20);

  if(box1 == box2) {
    std::cout << "son iguales" << std::endl;
  }
  double suma = box1.breadth() + box2.breadth();
  
}