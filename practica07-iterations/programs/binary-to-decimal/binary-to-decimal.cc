#include <iostream>
#include <cmath>

void PrintProgramPurpose() {
  std::cout << "This program converts a given binary number into a decimal number" << std::endl;
}
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    return false;
  }
  return true;
}
int GetUserInput() {
  std::cout << "Enter a binary number" << std::endl;
  int input;
  std::cin >> input;

  return input;
}
bool IsBinary(int input) {
  while (input > 0) {
    int digit = input % 10;
    if (digit != 0 && digit != 1) {
      return false;
    }
    input /= 10;
  }
  return true;
}
int CalculateDecimalNumber(int input) {
  int result{0};
  for (int i{0}; input > 0; i++) {
    int digit = input % 10;
    result += digit * pow(2, i);
    input /= 10;
  }
  return result;
}
void PrintResult(int result) {
  std::cout << result << std::endl;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 1;
  }
  int input = GetUserInput();
  if (IsBinary(input) == false) {
    std::cout << "Wrong Input" << std::endl;
    return 1;
  }
  int result = CalculateDecimalNumber(input);
  PrintResult(result);

  return 0;
}