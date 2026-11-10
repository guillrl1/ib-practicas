#include "compare.h"

int main(int argc, char* argv[]) {
  std::ifstream finput1{argv[1]};
  std::ifstream finput2{argv[2]};
  Comparar(finput1, finput2);

}