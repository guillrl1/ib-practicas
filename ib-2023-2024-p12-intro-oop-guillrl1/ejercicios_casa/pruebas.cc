#include <iostream>

class Rectangulo {
  private:
    double largo, ancho;
  public:
    Rectangulo(double, double);
    void perimetro();
    void area();  
};
Rectangulo::Rectangulo(double _largo, double _ancho) {
  largo = _largo;
  ancho = _ancho;
}

void Rectangulo::perimetro() {
  double _perimetro;

  _perimetro = (2*largo) + (2*ancho);
  std::cout << "El perimetro es: " << _perimetro << std::endl;
}
void Rectangulo::area() {
  double _area;

  _area = largo * ancho;
  std::cout << "El area es: " << _area << std::endl;
}

int main() {
  Rectangulo r1(11, 7);
  Rectangulo r2(20, 10);
  r1.perimetro();
  r2.area();

return 0;
}