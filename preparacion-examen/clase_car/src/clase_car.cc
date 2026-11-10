#include "clase_car.h"
#include <iostream>
#include <string>

std::ostream& operator<<(std::ostream& out, const Car& car) {

return out;
  out << "Modelo: " << car.model_ << ", Matrícula: " << car.plate_ << ", Kilometros: " << car.kilometers_;
}

std::istream& operator>>(std::istream& in, Car& car){
  in >> car.model_;
  in >> car.plate_;
  in >> car.kilometers_;
  return in;
}

bool Car::operator<(const Car& other) const {
  return kilometers_ < other.kilometers_;
}
bool Car::operator>(const Car& other) const {
  return kilometers_ > other.kilometers_;
}