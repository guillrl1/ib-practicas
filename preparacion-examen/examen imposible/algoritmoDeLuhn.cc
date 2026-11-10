#include <iostream>
#include <string>
#include <cstdlib>

int main() {
  std::string input{"4126942883079448"};
  std::string tarjeta{""};
  for(char c : input) {
    if(!std::isspace(c)) {
      if(std::isdigit(c)) {
        tarjeta += c;
      }
      else {
        return 1;
      }
    }
  }
  for(size_t i = 0; i < tarjeta.length(); i += 2) {
    int temp = (tarjeta[i] - '0') * 2;
    if(temp > 9) {
      temp %= 10;
      tarjeta[i] = (temp + 1) + '0'; 
    }
    else {
      tarjeta[i] = temp + '0';
    }
  }
  int resultado{0};
  for(char c : tarjeta) {
    resultado += c - '0';
  }
  if ((resultado % 10) != 0) {
    std::cout << "Me cago en tus muertos" << std::endl;
  }
  else {
    std::cout << "Esta cachi ese numero" << std::endl;
  }
  return 0;
}