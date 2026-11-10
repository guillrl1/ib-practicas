#include "vowel.h"
void Usage(const char* argv) {
  std::cout << "El programa " << argv << " necesita que se pase la cadena como argumento por la line de comandos" << std::endl;
}

int CountVowels(const std::string& text) {
  int count{0};
  for(char c : text) {
    std::tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      count++;
    }
  }
  return count;
}