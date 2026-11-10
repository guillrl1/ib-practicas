#include <iostream>
#include <string>
#include "change-case.h"

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (argc != 2) {
    std::cout << "Invalid Parameters" << std::endl;
    return 1;
  }
  std::string input = argv[1];
  std::string result = ChangeCase(input);
  PrintResult(result);

  return 0;
}
