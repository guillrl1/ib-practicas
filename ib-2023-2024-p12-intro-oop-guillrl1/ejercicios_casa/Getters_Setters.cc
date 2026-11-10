#include <iostream>

class Punto {
  private: //Atributos
    int x_, y_;
  public: //Metodos
    Punto();
    void setPunto(const int x, const int y) { x_ = x; y_ = y; } //Setter
    int getPuntoX() const { return x_; }; //getter
    int getPuntoY() const { return y_; } //getter
};

Punto::Punto() {
}

int main() {
  Punto punto1;
  punto1.setPunto(15,10);
  std::cout << punto1.getPuntoX() << ", " << punto1.getPuntoY() << std::endl;
}