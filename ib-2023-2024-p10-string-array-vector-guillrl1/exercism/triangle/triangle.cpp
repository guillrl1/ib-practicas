// triangle.cpp
#include "triangle.h"
#include <stdexcept>
namespace triangle {
    flavor kind(double a, double b, double c) {
        // Check if sides form a valid triangle
        if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || a + c <= b) {
            throw std::domain_error("Invalid triangle sides");
        }
        // Classify the triangle
        if (a == b && b == c) {
            return flavor::equilateral;
        } else if (a == b || b == c || a == c) {
            return flavor::isosceles;
        } else {
            return flavor::scalene;
        }
    }
}