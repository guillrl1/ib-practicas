#include <iostream>

void PrintProgramPurpose() {
  std::cout << "This program reads a natural number and prints the sum of the digits of each number" << std::endl;
}
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  return argc != kCorrectNumber;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 1;
  }

  return 0;
}
