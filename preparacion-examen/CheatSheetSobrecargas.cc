#include <iostream>

class Example {
public:
    int value;

    Example() : value(0) {}
    Example(int v) : value(v) {}

    // Sobrecarga del operador de inserción (<<) para std::cout
    friend std::ostream& operator<<(std::ostream& os, const Example& example);

    // Sobrecarga del operador de extracción (>>) para std::cin
    friend std::istream& operator>>(std::istream& in, Example& example);

    // Sobrecarga del operador de adición (+)
    Example operator+(const Example& other) const;

    // Sobrecarga del operador de sustracción (-)
    Example operator-(const Example& other) const;

    // Sobrecarga del operador de multiplicación (*)
    Example operator*(const Example& other) const;

    // Sobrecarga del operador de división (/)
    Example operator/(const Example& other) const;

    // Sobrecarga del operador de comparación igual (==)
    bool operator==(const Example& other) const;

    // Sobrecarga del operador de comparación no igual (!=)
    bool operator!=(const Example& other) const;

    // Sobrecarga del operador de incremento (++)
    Example& operator++();  // Pre-incremento

    // Sobrecarga del operador de incremento (++) con un parámetro adicional int para distinguir del pre-incremento
    Example operator++(int);  // Post-incremento
};

// Implementación de sobrecargas fuera de la clase

std::ostream& operator<<(std::ostream& os, const Example& example) {
    os << "Value: " << example.value;
    return os;
}

std::istream& operator>>(std::istream& in, Example& example) {
  in >> example.value;
  return in;
}

Example Example::operator+(const Example& other) const {
    return Example{value + other.value};
}

Example Example::operator-(const Example& other) const {
    return Example{value - other.value};
}

Example Example::operator*(const Example& other) const {
    return Example{value * other.value};
}

Example Example::operator/(const Example& other) const {
    return Example{value / other.value};
    }


bool Example::operator==(const Example& other) const {
    return value == other.value;
}

bool Example::operator!=(const Example& other) const {
    return !(*this == other);
}

Example& Example::operator++() {
    // Pre-incremento
    ++value;
    return *this;
}

Example Example::operator++(int) {
    // Post-incremento
    Example temp = *this;
    ++value;
    return temp;
}

int main() {
    Example obj1(10);
    Example obj2(5);

    std::cout << "Objeto 1: " << obj1 << "\n";
    std::cout << "Objeto 2: " << obj2 << "\n\n";

    Example sum = obj1 + obj2;
    Example difference = obj1 - obj2;
    Example product = obj1 * obj2;
    Example quotient = obj1 / obj2;

    std::cout << "Suma: " << sum << "\n";
    std::cout << "Diferencia: " << difference << "\n";
    std::cout << "Producto: " << product << "\n";
    std::cout << "Cociente: " << quotient << "\n";

    if (obj1 == obj2) {
        std::cout << "Objeto 1 es igual a Objeto 2\n";
    } else {
        std::cout << "Objeto 1 no es igual a Objeto 2\n";
    }

    Example obj3 = obj1++;
    std::cout << "Objeto 3 (post-incremento): " << obj3 << "\n";
    std::cout << "Objeto 1 después del post-incremento: " << obj1 << "\n";

    Example obj4 = ++obj2;
    std::cout << "Objeto 4 (pre-incremento): " << obj4 << "\n";
    std::cout << "Objeto 2 después del pre-incremento: " << obj2 << "\n";

    return 0;
}
