#include <iostream>


class Rectangulo {
  public: //Metodos
    //Constructor default
    Rectangulo() : ancho_{0}, altura_{0} {}
    //Constructor parametrizado
    Rectangulo(double ancho, double altura) : ancho_{ancho}, altura_{altura} {}
    double Area() const {
      return ancho_ * altura_;
    }
    double Perimetro() const{
      return (2 * (ancho_ + altura_));
    }
  private: //Atributos 
    double ancho_;
    double altura_;
};

int main() {
  Rectangulo r1(20.0, 30.0);
  Rectangulo r2(30.0, 60.0);

  std::cout << "El área del primer triangulo es: " << r1.Area()  << std::endl;
  std::cout << "Y su perimetro es: " << r1.Perimetro() << std::endl;
  std::cout << "El área del segundo triangulo es: " << r2.Area() << std::endl;
  std::cout << "Y su perimetro es: " << r2.Perimetro() << std::endl;

  if(r1.Area() == r2.Area()) {
    std::cout << "Los triandulos no son iguales" << std::endl;
  }
  if(r1.Area() > r2.Area()) {
    std::cout << "El triángulo 1 es mayor que el triangulo 2" << std::endl;
  }
  else {
    std::cout << "El triángulo 2 es mayor que el triangulo 1" << std::endl;
  }
}