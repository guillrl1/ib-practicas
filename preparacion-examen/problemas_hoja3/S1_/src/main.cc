#include "vowel.h"

int main(int argc, char* argv[]) {
  if(argc != 2) {
  Usage(argv[0]);
  return 1;
  } 
  std::string text{argv[1]};
  int result{CountVowels(text)};
  std::cout << "El numero de vocales es: " << result << std::endl;

  return 0;
}