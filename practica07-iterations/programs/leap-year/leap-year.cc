#include <iostream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "This program tells if a year is or is not a leap year." << std::endl;
}
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    return false;
  }
  return true;
}
int GetUserInput(){
  std::cout << "Enter a Year" << std::endl;
  int year;
  std::cin >> year;

  return year;
}
std::string CheckLeapYear(int year){
  std::string result;
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    result = "YES";
  } 
  else {
    result = "NO";
  }

  return result;
}
void PrintResult(std::string result) {
  std::cout << result << std::endl;
}
int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 1;
  }
  int year = GetUserInput();
  std::string result = CheckLeapYear(year);
  PrintResult(result);
  
  return 0;
}