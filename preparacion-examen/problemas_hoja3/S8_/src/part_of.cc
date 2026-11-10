#include "part_of.h"

bool Comprobar(const std::string& cadena, const std::string& subcadena) {
  std::string temp{""};
  int n{0};
  for(int i{0} ; cadena.size() > i ; i++) {
    if(cadena[i] == subcadena[n]) {
      temp += cadena[i];
      n++;
      i = 0;
    }
  }
  if (temp == subcadena) {
    return true;
  }
  return false;
}