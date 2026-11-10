#include "min_max.h"

int main(int argc, char* argv[]) {
  unsigned long int num{std::stoi(argv[1])};
  int min{Min(num)};
  int max{Max(num)};
  std::cout << "min: " << min << std::endl;
  std::cout << "max: " << max << std::endl;
  return 0;
}