#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char* argv[]) {
  if(argc != 2) {
    std::cout << "Los parámetros introducidos no son válidos" << std::endl;
    return 1;  
  }
  std::string cadena = argv[1];
  for(char& c : cadena) {
    if(std::isupper(c)) {
      c = std::tolower(c);
    }   
    else if(std::islower(c)) {
      c = std::toupper(c); 
    }   
  }
  std::cout << cadena << std::endl;
  return 0;
}

