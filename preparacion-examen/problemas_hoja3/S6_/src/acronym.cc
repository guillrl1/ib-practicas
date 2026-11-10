#include "acronym.h"

std::string Acronym(const std::string& input) {
  std::string acronym{""};
  for(char c : input) {
    if(std::isupper(c)) {
      acronym += c;
    }
  }
  return acronym;
}