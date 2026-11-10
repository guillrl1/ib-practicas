#include <iostream>


class Perro {
  private:
    std::string nombre_, raza_;
  public:
    Perro(std::string nombre, std::string raza) : nombre_{nombre}, raza_{raza} {} //Constructor
    ~Perro(); //Destructor
    void MostrarDatos();
    void Jugar();
};
//Destructor
Perro::~Perro(){
}

void Perro::MostrarDatos(){
  std::cout << "Nombre: " << nombre_ << std::endl;
  std::cout << "Raza: " << raza_ << std::endl;
}
void Perro::Jugar(){
  std::cout << "El Perro" << nombre_ << "está jugando" << std::endl;
}

int main() {
  Perro perro1("Jose", "Husky");
  perro1.MostrarDatos();
  perro1.Jugar();
  perro1.~Perro(); //Destruyendo el objeto

  return 0;
}

