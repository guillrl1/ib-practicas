#include <iostream>
#include <string>
#include "tools.h"

void Usage(int argc, char *argv[]) {
  if (argc != 6) {
    std::cout << argv[0] << ": Los argumentos introducidos no son válidos" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}