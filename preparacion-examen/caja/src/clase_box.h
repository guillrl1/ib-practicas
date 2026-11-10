#ifndef CLASE_BOX_H
#define CLASE_BOX_H

#include <iostream>
/**
 * @class Box
 * @brief Clase que representa una caja con dimensiones de longitud, anchura y altura.
 */
class Box { 
  public:
    //Constructor por defecto
    Box() : length_{0.0}, breadth_{0.0}, height_{0.0} { }
    //Constructor parametrizado
    Box(double length, double breadth, double height) : length_{length}, breadth_{breadth}, height_{height} { }
    double length() { return length_; } 
    double breadth() { return breadth_; } 
    double height() { return height_; }
    //sobrecargas
    friend std::ostream& operator<<(std::ostream& os, const Box& box) {
      os << "Tu caja mide" << box.length_ << " x " << box.breadth_ << " x " << box.height_;
      return os;
    }
    friend std::istream& operator>>(std::istream& in, Box& box) {
      in >> box.length_;
      in >> box.breadth_;
      in >> box.height_;
      return in;
    }
    bool operator==(const Box& other) const {
      return (length_ == other.length_ && height_ == other.height_ && breadth_ == other.breadth_);
    }
    Box operator+(const Box& other) const {
      double alto = length_ + other.length_;
      double ancho = breadth_ + other.breadth_;
      double largo = height_ + other.height_;
      return Box(alto, ancho, largo);
    }
  private:
    double length_; 
    double breadth_; 
    double height_;
};



#endif