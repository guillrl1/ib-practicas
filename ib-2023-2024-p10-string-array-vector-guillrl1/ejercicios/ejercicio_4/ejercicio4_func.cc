#include <iostream>
#include <vector>

/**
 * @brief Calcula el máximo, mínimo y promedio de un vector de enteros.
 *
 * @param vector Vector de enteros del cual se calcularán las estadísticas.
 * @param maximo Variable de referencia para almacenar el valor máximo.
 * @param minimo Variable de referencia para almacenar el valor mínimo.
 * @param promedio Variable de referencia para almacenar el promedio.
 */
void calcularEstadisticas(const std::vector<int>& vector, int& maximo, int& minimo, double& promedio) {
    // Verificamos si el vector no está vacío
    if (vector.empty()) {
        std::cout << "El vector está vacío." << std::endl;
        return;
    }

    // Inicializamos variables
    maximo = vector[0];
    minimo = vector[0];
    promedio = 0;

    // Calculamos máximo, mínimo y suma para el promedio
    for (int valor : vector) {
        if (valor > maximo) {
            maximo = valor;
        }
        if (valor < minimo) {
            minimo = valor;
        }
        promedio += valor;
    }

    // Calculamos el promedio dividiendo la suma entre el tamaño del vector
    promedio /= vector.size();