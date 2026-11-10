#include <iostream>
#include <cmath>

class ComputeInt {
  private: //Atributos
    int input1_, input2_;
  public: //Metodos
    ComputeInt(int input1, int input2) : input1_{input1}, input2_{input2}{}
    unsigned long int Factorial() const;
    int SumSerie() const;
    bool IsPrime() const;

};

unsigned long int ComputeInt::Factorial() const {
  unsigned long int result{1};
  for(int i{1}; i <= input1_; i++) {
    result *= i;
  }
  return result;
}
int ComputeInt::SumSerie() const {
  int result{0};
  for(int i{1}; i <= input1_; i++) {
    result += i;
  }
  return result;
}
bool ComputeInt::IsPrime() const {
  if (input1_ <= 1) {
     return false;
  }
    for (int i = 2; i <= sqrt(input1_); ++i) {
      if (input1_ % i == 0) {
        return false;
      }
    }
    return true;
}


int main() {
ComputeInt compute_integer{10, 7};
std::cout << compute_integer.Factorial() << std::endl;
std::cout << compute_integer.SumSerie() << std::endl;
std::cout << compute_integer.IsPrime() << std::endl;

  return 0;
}