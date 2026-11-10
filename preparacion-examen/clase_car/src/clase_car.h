//clase_car.h
#ifndef CLASE_CAR_H
#define CLASE_CAR_H
#include <iostream>
#include <string>

class Car { 
  private:
    std::string model_; 
    std::string plate_; 
    int kilometers_;
  public:
    std::string model() const { return model_; } //getter
    std::string plate() const { return plate_; } //getter
    int kilometers() const { return kilometers_; } //getter
    Car() : model_{""}, plate_{""}, kilometers_{0} {}
    Car(std::string model, std::string plate, int kilometers) : model_{model}, plate_{plate}, kilometers_{kilometers } {}
    friend std::ostream& operator<<(std::ostream& out, const Car& car);
    friend std::istream& operator>>(std::istream& in, Car& car);
    bool operator<(const Car& other) const;
    bool operator>(const Car& other) const;
};





#endif 