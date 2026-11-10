#include <iostream>
#include <cmath>
#include "AreEqual.h"

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << "Invalid usage" << std::endl;
    return 1;
  }
    double num1 = std::stod(argv[1]);
    double num2 = std::stod(argv[2]);

    if (AreEqual(num1, num2)) {
        std::cout << "Los números son aproximadamente iguales." << std::endl;
    } else {
        std::cout << "Los números no son aproximadamente iguales." << std::endl;
    }

    return 0;
}
