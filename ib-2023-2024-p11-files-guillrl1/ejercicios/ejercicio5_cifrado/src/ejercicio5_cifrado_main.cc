/**
 * @file main.cc
 * @brief Programa principal para cifrado de archivos.
 */

#include <iostream>
#include <fstream>
#include "ejercicio5_cifrado.h"
#include "tools.h"

/**
 * @brief Punto de entrada principal del programa.
 * @param argc Número de argumentos de la línea de comandos.
 * @param argv Arreglo de argumentos de la línea de comandos.
 * @return Código de salida del programa (0 si es exitoso, otro valor si hay errores).
 */
int main(int argc, char* argv[]) {
    // Verifica si el número de argumentos es correcto
    if (argc != 6) {
        std::cerr << "Uso incorrecto. Pruebe --help" << std::endl;
        return 1; // Devuelve código de error
    }

    // Abre el archivo de entrada y salida según los argumentos proporcionados
    std::ifstream finput{argv[1]};
    std::ofstream foutput{argv[2]};

    // Extrae los argumentos restantes
    std::string metodo{argv[3]};
    std::string password{argv[4]};
    std::string operacioninput{argv[5]};
    char operacion = operacioninput[0];

    // Llama a la función TipoCifrado para realizar la lógica de cifrado
    TipoCifrado(finput, foutput, metodo, password, operacion);

    return 0; // Devuelve código de éxito
}
