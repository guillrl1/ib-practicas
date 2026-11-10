//Herencia en Programacion Orientada a Objetos
#include <iostream>

class Persona {
  private: //Atributos
    std::string nombre;
    int edad;
  public: //Metodos
    Persona(std::string, int); //Constructor
    void mostrarPersona();
};
//Constructor de la clase Persona (Clase Padre)
Persona::Persona(std::string _nombre, int _edad) {
  nombre = _nombre;
  edad = _edad;
}
void Persona::mostrarPersona() {
  std::cout << "Nombre: " << nombre << std::endl;
  std::cout << "Edad: " << edad << std::endl;
}

//Clase hija, que hereda de Persona todos los Métodos públicos
class Alumno : public Persona{
  private: //Atributos
    std::string codigoAlumno;
    double notaFinal;
  public: //Metodos
    Alumno(std::string, int, std::string, double); //Constructor (Los dos primeros\
                                                  hacen referencia a la clase padre)
    void mostrarAlumno();                     
};
Alumno::Alumno(std::string _nombre, int _edad, std::string _codigoAlumno, double _notaFinal) : Persona(_nombre, _edad) {
  codigoAlumno = _codigoAlumno;
  notaFinal = _notaFinal;
} 
void Alumno::mostrarAlumno() {
  mostrarPersona();
  std::cout << "Codigo alumno: " << codigoAlumno << std::endl;
  std::cout << "nota final: " << notaFinal << std::endl;
}



int main() {
Alumno alumno1("Alejandro", 18, "137137137", 8.5);
alumno1.mostrarAlumno();

  return 0;
}