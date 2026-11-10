#include <iostream>
#include <fstream>
#include "ejercicio1_vowels_consonants.h"

int CountVowels(const std::string& strinput) {
  int count{0};
  for (char letter : strinput) {
    char c = std::tolower(letter);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      ++count;
    }
  }
  return count;
}
int CountConsonants(const std::string& strinput) {
  int count{0};
  for (char letter : strinput) {
    char c = std::tolower(letter);
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && isalpha(c)) {
      ++count;
    }
  }
  return count;
}
void CompareWords(std::ifstream& finput, std::string& max_vowel, std::string& max_consonant) {
  std::string strinput;
  int temp_vowels{0};
  int temp_consonants{0};
  while(finput >> strinput) {
    int num_vowels{CountVowels(strinput)};
    int num_consonants{CountConsonants(strinput)};
    if (num_vowels > temp_vowels) {
      max_vowel = strinput;
      temp_vowels = num_vowels;
    }
    if (num_consonants > temp_consonants) {
      max_consonant = strinput;
      temp_consonants = num_consonants;
    } 
  }
}