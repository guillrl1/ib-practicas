#include "leap_years.h"

bool Comprobar(const int& fecha) {
  if ((fecha % 4) == 0) {
    if ((fecha % 100) != 0 || (fecha % 400) == 0) {
      return true;
    }
  }
  return false;
}
