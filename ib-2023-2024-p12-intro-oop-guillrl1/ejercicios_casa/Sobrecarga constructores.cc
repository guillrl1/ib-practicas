#include <iostream>

class Fecha {
  private: //Atributos
    int dia, mes, año;
  public: //Metodos
    Fecha(int, int, int); //Constructor 1
    Fecha(long); //Constructor 2
    void MostrarFecha();
};

//Constructor 1, para inicializar
Fecha::Fecha(int _dia, int _mes, int _año) {
  año = _año;
  mes = _mes;
  dia = _dia;
}

Fecha::Fecha(long fecha) {
  año = int(fecha / 10000); //Extraer el año
  mes = int((fecha - año*10000) / 100); //Extraer el mes
  dia = int(fecha - año * 10000 - mes * 100); //Extraer el mes
}

void Fecha::MostrarFecha() {
  std::cout << "La fecha es: " << dia << "/" << mes << "/" << año << std::endl;
}

int main() {
  Fecha hoy(15,12,2023);
  Fecha random(23091015); 
  hoy.MostrarFecha();
  random.MostrarFecha();

}
