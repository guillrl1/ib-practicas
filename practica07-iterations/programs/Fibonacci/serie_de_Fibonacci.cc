#include <iostream>

void PrintProgramPurpose() {
  std::cout << "This program prints the first N terms of the Fibonacci series." << std::endl;
}
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    return false;
  }
  return true;
}
int GetUserInput() {
  std::cout << "Enter a number" << std::endl;
  int input;
  std::cin >> input;
  
  return input;
}
void CalculateAndPrintFibonacci(int input) {
  int number1{0}, number2{1};
  for (int i{0}; i < input; i++) {
    std::cout << number1 << " ";
    int next = number1 + number2;
    number1 = number2;
    number2 = next;
  }
  std::cout << std::endl;
}
int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 1;
  }
  int input = GetUserInput();
  CalculateAndPrintFibonacci(input);
  
  return 0;
}