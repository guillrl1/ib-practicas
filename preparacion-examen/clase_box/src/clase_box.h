//Racional.h
#ifndef CLASE_BOX_H
#define CLASE_BOX_H
#include <iostream>

class Box { 
  private:
    double length_; 
    double breadth_; 
    double height_;
  public:
    Box() : length_{0.0}, breadth_{0.0}, height_{0.0} {}
    Box(double length, double breadth, double height) : length_{length}, breadth_{breadth}, height_{height} {}
    double length() { return length_; } //getter
    double breadth() { return breadth_; } //getter
    double height() { return height_; } //getter
    //Sobrecargas
    friend std::ostream& operator<<(std::ostream &out, const Box& box);
    friend std::istream& operator>>(std::istream &in, Box& box);
    friend bool operator==(const Box& box1, const Box& box2);
};

#endif