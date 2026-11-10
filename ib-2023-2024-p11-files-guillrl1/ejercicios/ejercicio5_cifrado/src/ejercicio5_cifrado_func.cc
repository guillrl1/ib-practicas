/**
 * @file ejercicio5_cifrado_func.cc
 * @brief Contiene las funciones para cifrar y descifrar archivos.
 */

#include "ejercicio5_cifrado.h"
#include <iostream>

/**
 * @brief Realiza el cifrado César en un archivo de entrada y escribe el resultado en un archivo de salida.
 * @param finput Archivo de entrada.
 * @param foutput Archivo de salida.
 * @param k Clave para el cifrado César.
 * @param operacion Operación a realizar: '+' para cifrar, '-' para descifrar.
 */
void CifradoCesar(std::ifstream& finput, std::ofstream& foutput, int k, char operacion) {
    if (!finput.is_open() || !foutput.is_open()) {
        std::cerr << "Error al abrir archivos." << std::endl;
        exit(1);
    }
    char c;
    while (finput.get(c)) {
        if (std::isalpha(c)) {
            c = std::toupper(c);
            switch (operacion) {
                case '+':
                    c = (c - 'A' + k) % 26 + 'A';
                    break;
                case '-':
                    c = (c - 'A' - k + 26) % 26 + 'A';
                    break;
                default:
                    std::cerr << "Operación no válida. Use '+' o '-'." << std::endl;
                    return; // Sal del bucle para procesar el siguiente carácter
            }
        }
        foutput.put(c);
    }
}

/**
 * @brief Realiza el cifrado XOR en un archivo de entrada y escribe el resultado en un archivo de salida.
 * @param finput Archivo de entrada.
 * @param foutput Archivo de salida.
 * @param password Clave para el cifrado XOR.
 * @param operacion Operación a realizar: '+' para cifrar, '-' para descifrar.
 */
void CifradoXOR(std::ifstream& finput, std::ofstream& foutput, const std::string& password, char operacion) {
    if (!finput.is_open() || !foutput.is_open()) {
        std::cerr << "Error al abrir archivos." << std::endl;
        exit(1);
    }
    char c;
    size_t len = password.length();
    size_t i = 0;
    while (finput.get(c)) {
        if (std::isalpha(c)) {
            char base = std::isupper(c) ? 'A' : 'a';
            if (operacion == '-') {
                c = (c - base + 26 - (password[i] - 'A')) % 26 + base;
            } else {
                c = (c - base + (password[i] - 'A')) % 26 + base;
            }
            i = (i + 1) % len;
        }
        foutput.put(c);
    }
}

/**
 * @brief Determina el tipo de cifrado a aplicar y llama a la función correspondiente.
 * @param finput Archivo de entrada.
 * @param foutput Archivo de salida.
 * @param metodo Método de cifrado a aplicar ("xor" o "Cesar").
 * @param password Clave para el cifrado.
 * @param operacion Operación a realizar: '+' para cifrar, '-' para descifrar.
 */
void TipoCifrado(std::ifstream& finput, std::ofstream& foutput, const std::string& metodo, const std::string& password, char operacion) {
    if (metodo == "xor") {
        CifradoXOR(finput, foutput, password, operacion);
    } else if (metodo == "Cesar") {
        if (password.size() != 1 || !std::isdigit(password[0])) {
            std::cerr << "Clave Cesar no válida. Debe ser un solo dígito." << std::endl;
            exit(1);
        }
        int k = password[0] - '0';
        CifradoCesar(finput, foutput, k, operacion);
    } else {
        std::cerr << "Método no reconocido. Pruebe --help" << std::endl;
        exit(1);
    }
}
