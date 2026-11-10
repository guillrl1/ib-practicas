#include <iostream>

void PrintProgramPurpose() {
  std::cout << "This program converts a given decimal number into a binary number" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    return false;
  }
  return true;
}

int GetUserInput() {
  std::cout << "Enter a decimal number" << std::endl;
  int decimal;
  std::cin >> decimal;
  return decimal;
}

void CalculateBinaryNumber(int decimal) {
  int binary_digits[32];
  int index = 0;

  while (decimal > 0) {
    binary_digits[index] = decimal % 2;
    decimal /= 2;
    index++;
  }

  for (int i = index - 1; i >= 0; i--) {
    std::cout << binary_digits[i];
  }

  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 1;
  }
  int decimal = GetUserInput();
  CalculateBinaryNumber(decimal);

  return 0;
}
