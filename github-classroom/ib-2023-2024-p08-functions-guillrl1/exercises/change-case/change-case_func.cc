#include <iostream>
#include <string>
#include <cctype>
#include "change-case.h"

void PrintProgramPurpose() {
  std::cout << "" << std::endl;
}
std::string ChangeCase(const std::string& input) {
  std::string result = input;
  for (char& letter : result) {
    if (std::isupper(letter)) {
      letter = std::tolower(letter);
    }
    else {
      letter = std::toupper(letter);
    }
  }
return result;
}
void PrintResult(std::string result) {
  std::cout << result << std::endl;
}
