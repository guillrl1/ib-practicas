/**
 * @file tools.h
 * @brief Contiene funciones de utilidad para el programa principal.
 */

#ifndef TOOLS_H
#define TOOLS_H

#include <iostream>

// Definición de la constante kHelpText con el mensaje actualizado
extern const std::string kHelpText;

/**
 * @brief Imprime el mensaje de ayuda.
 */
void PrintHelp();

/**
 * @brief Imprime un mensaje de uso incorrecto y sugiere utilizar la opción --help.
 * @param program_name Nombre del programa (argv[0]).
 */
void PrintIncorrectUsage(const std::string& program_name);

/**
 * @brief Imprime el mensaje de ayuda o mensaje de uso incorrecto según el primer argumento.
 * @param argc Número de argumentos de la línea de comandos.
 * @param argv Arreglo de argumentos de la línea de comandos.
 */
void Usage(int argc, char* argv[]);

#endif // TOOLS_H
