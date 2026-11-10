#include "complex.h"

int main() {
  // Crear dos números complejos
  Complex n1(68.05, 0.0);
  Complex n2(56.62, -21.12);

  // Realizar operaciones
  Complex suma = n1 + n2;
  Complex resta = n1 - n2;
  Complex multiplicacion = n1 * n2;
  Complex division = n1 / n2;

  // Imprimir resultados
  std::cout << "Suma: " << suma << std::endl;
  std::cout << "Resta: " << resta << std::endl;
  std::cout << "Multiplicacion: " << multiplicacion << std::endl;
  std::cout << "Division: " << division << std::endl;

  return 0;
}
