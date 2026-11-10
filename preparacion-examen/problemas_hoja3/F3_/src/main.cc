#include "modify.h"
int main(int argc, char* argv[]) {
  std::ifstream finput{argv[1]};
  std::ofstream foutput{argv[2]};
  std::string del{argv[3]};
  Borrar(finput, foutput, del);
}