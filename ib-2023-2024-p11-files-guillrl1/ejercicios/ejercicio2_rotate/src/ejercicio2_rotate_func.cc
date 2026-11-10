#include <iostream>
#include <fstream>
#include "ejercicio2_rotate.h"

char Rotate(char c) {
  switch (c) {
    case 'a': return 'e';
    case 'e': return 'i';
    case 'i': return 'o';
    case 'o': return 'u';
    case 'u': return 'a';
    default: return c;
  }
}

void Convert(std::ifstream& finput, std::ofstream& outputfile) {
  char c;
  while(finput.get(c)) {
    c = Rotate(c);
    outputfile.put(c);
  }
  outputfile.close();
}