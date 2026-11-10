/**
 * @file tools.cc
 * @brief Contiene funciones de utilidad para el programa principal.
 */

#include <iostream>
#include <string>
#include "tools.h"

/**
 * @brief Imprime el mensaje de ayuda o muestra un mensaje de uso incorrecto y sale del programa.
 * @param argc Número de argumentos de la línea de comandos.
 * @param argv Arreglo de argumentos de la línea de comandos.
 */
void Usage(int argc, char *argv[]) {
    const std::string kHelpText = R"(
./cripto -- Cifrado de ficheros
Modo de uso: ./cripto fichero_entrada fichero_salida método password operación

fichero_entrada: Fichero a codificar
fichero_salida:  Fichero codificado
método:          Indica el método de encriptado
                   1: Cifrado xor
                   2: Cifrado de César
password:        Palabra secreta en el caso de método 1, Valor de K en el método 2
operación:       Operación a realizar en el fichero
                   +: encriptar el fichero
                   -: desencriptar el fichero
)";
    // Verifica si hay al menos dos argumentos y si el primer argumento es "--help"
    if (argc >= 2 && std::string(argv[1]) == "--help") {
        std::cout << kHelpText << std::endl;
        exit(EXIT_SUCCESS); // Sale con código de éxito
    }

    // Verifica si el número de argumentos es correcto
    if (argc != 7) {
        std::cerr << "Uso incorrecto: " << argv[0] << ": Se esperan 6 argumentos, pero se proporcionaron " << (argc - 1) << std::endl;
        std::cerr << "Pruebe " << argv[0] << " --help para más información" << std::endl;
        exit(EXIT_FAILURE); // Sale con código de error
    }
}
