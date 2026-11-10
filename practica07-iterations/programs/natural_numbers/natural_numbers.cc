#include <iostream>

void PrintProgramPurpose() {
  std::cout << "This program reads a natural number and prints the sum of the digits of each number" << std::endl;
}
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    return false;
  }
  return true;
}
int GetUserInput() {
  std::cout << "Enter a natural number" << std::endl;
  int input;
  std::cin >> input;

  return input;
}
int CalculateResult(int input) {
  int result{0};
  while (input != 0) {
    result += input % 10;
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
  int result = CalculateResult(input);
  PrintResult(result);

  return 0;
}