#include "Luhn.h"

/**
 * @brief Calcula si un número de tarjeta cumple con el algoritmo de Luhn.
 * 
 * @param tarjeta El número de tarjeta a verificar.
 * @return true si el número de tarjeta es válido, false en caso contrario.
 */
 bool Calcular(const std::string& tarjeta) {
    // Eliminar espacios del número de tarjeta
    std::string numeroSinEspacios;
    for (char c : tarjeta) {
        if (!std::isspace(c)) {
            numeroSinEspacios += c;
        }
    }
æ
    // Verificar si el número de tarjeta está vacío o contiene caracteres no numéricos
    if (numeroSinEspacios.empty() || 
        !std::all_of(numeroSinEspacios.begin(), numeroSinEspacios.end(), [](char c) { return std::isdigit(c); })) {
        std::cerr << "Error: El número de tarjeta no es válido." << std::endl;
        Usage("programa");
        return false;
    }

    int longitud = numeroSinEspacios.length();
    int suma = 0;
    bool duplicar = false;

    // Aplicar el algoritmo de Luhn en sentido inverso
    for (int i = longitud - 1; i >= 0; --i) {
        int digito = numeroSinEspacios[i] - '0';

        if (duplicar) {
            digito *= 2;
            if (digito > 9) {
                digito -= 9;
            }
        }

        suma += digito;
        duplicar = !duplicar;
    }

    // La suma total debe ser un múltiplo de 10
    return (suma % 10 == 0);
}