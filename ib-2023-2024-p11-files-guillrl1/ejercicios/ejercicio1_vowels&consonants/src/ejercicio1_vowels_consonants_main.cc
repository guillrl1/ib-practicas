#include <iostream>
#include <fstream>
#include "ejercicio1_vowels_consonants.h"
#include "tools.h"

int main(int argc, char* argv[]) {
  std::ifstream finput{argv[1]};
  Usage(argc, argv);
  std::string max_vowel;
  std::string max_consonant;
  CompareWords(finput, max_vowel, max_consonant);
  std::cout << "La palabra con más vocales es: " << max_vowel << std::endl;
  std::cout << "La palabra con más consonantes es: " << max_consonant << std::endl;
  return 0;
}