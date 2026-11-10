#include "AreEqual.h"
#include <cmath>

bool AreEqual(const double number1, const double number2, const double epsilon) {
    return std::abs(number1 - number2) < epsilon;
}