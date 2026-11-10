#include <iostream>

void PrintProgramPurpose() {
  std::cout << "" << std::endl;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (argc != 4) {
    std::cout << "Invalid Parameters" << std::endl;
    return 1;
  }
  double x = std::stod(argv[1]);
  std::string y = argv[2];

  return 0;
}

