#ifndef COMPLEX_H
#define COMPLEX_H

#include <cmath>
#include <iostream>

class Complex {
  public: //Metodos
  //Constructor por defecto
  Complex() : a_{0.0}, bi_{0.0} { }
  //Constructor parametrizado
  Complex(double a, double bi) : a_{a}, bi_{bi} { }

  //Sobrecargas
  Complex operator+(const Complex& other) const {
    double real{a_ + other.a_};
    double imaginaria{bi_ + other.bi_};
    return Complex(real, imaginaria);
  }
  Complex operator -(const Complex& other) const {
    double real{a_ - other.a_};
    double imaginaria{bi_ - other.bi_};
    return Complex(real, imaginaria);
  }
  Complex operator *(const Complex& other) const {
    double real{(a_ * other.a_) - (bi_ * other.bi_)};
    double imaginaria{(a_ * other.bi_) + (bi_ * other.a_)};
    return Complex(real, imaginaria);
  }
  Complex operator /(const Complex other) const {
    double real{((a_ * other.a_) + (bi_ * other.bi_)) / (pow(other.a_, 2) + pow(other.bi_, 2))};
    double imaginaria{((bi_ * other.a_) + (a_ * other.bi_)) / (pow(other.a_, 2) + pow(other.bi_, 2))};
    return Complex(real, imaginaria);
  }
  friend std::ostream& operator<<(std::ostream& os, const Complex& complex) {
  os << complex.a_;
  if (complex.bi_ >= 0) {
    os << " + " << complex.bi_ << "i";
  } else {
    os << " - " << -complex.bi_ << "i";
  }
  return os;
}

  private: //Atributos
    double a_, bi_;
};


#endif