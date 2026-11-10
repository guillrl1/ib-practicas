#include <iostream>
#include <fstream>
#include "ejercicio5_cifrado.h"

void TipoCifrado(std::ifstream& finput, std::ofstream& foutput, const std::string& metodo, const std::string& password, char operacion) {
    if (metodo == "xor") {
        // Implementa lógica para cifrado XOR
    } else if (metodo == "Cesar") {
        int k = password[0]; // Suponiendo que el primer carácter de la contraseña es la clave
        CifradoCesar(finput, foutput, k, operacion);
    } else {
        std::cerr << "Método no reconocido. Pruebe --help" << std::endl;
        exit(1);
    }
}

void CifradoCesar(std::ifstream& finput, std::ofstream& foutput, int k, char operacion) {
    if (!finput.is_open() || !foutput.is_open()) {
        std::cerr << "Error al abrir archivos." << std::endl;
        exit(1);
    }

    char c;
    while (finput.get(c)) {
        // Verificar si el carácter es una letra antes de cifrar o descifrar
        if (std::isalpha(c)) {
            switch(operacion) {
                case '+':
                  c += k;
                  break;
                case '-':
                  c -= k;
                  break;
            }
        } else {
            // Mantener sin cambios los caracteres no alfabéticos
        }

        foutput.put(c);
    }
}
