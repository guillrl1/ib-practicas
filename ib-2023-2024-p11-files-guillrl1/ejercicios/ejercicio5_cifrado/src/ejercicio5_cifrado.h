#pragma once
#include <string>
#include <fstream>

/**
 * @file ejercicio5_cifrado.h
 * @brief Contiene las declaraciones de funciones para cifrado y descifrado de archivos.
 */

/**
 * @brief Realiza el cifrado César en un archivo de entrada y escribe el resultado en un archivo de salida.
 * @param finput Archivo de entrada.
 * @param foutput Archivo de salida.
 * @param k Clave para el cifrado César.
 * @param operacion Operación a realizar: '+' para cifrar, '-' para descifrar.
 */
void CifradoCesar(std::ifstream& finput, std::ofstream& foutput, int k, char operacion);

/**
 * @brief Realiza el cifrado XOR en un archivo de entrada y escribe el resultado en un archivo de salida.
 * @param finput Archivo de entrada.
 * @param foutput Archivo de salida.
 * @param password Clave para el cifrado XOR.
 * @param operacion Operación a realizar: '+' para cifrar, '-' para descifrar.
 */
void CifradoXOR(std::ifstream& finput, std::ofstream& foutput, const std::string& password, char operacion);

/**
 * @brief Determina el tipo de cifrado a aplicar y llama a la función correspondiente.
 * @param finput Archivo de entrada.
 * @param foutput Archivo de salida.
 * @param metodo Método de cifrado a aplicar ("xor" o "Cesar").
 * @param password Clave para el cifrado.
 * @param operacion Operación a realizar: '+' para cifrar, '-' para descifrar.
 */
void TipoCifrado(std::ifstream& finput, std::ofstream& foutput, const std::string& metodo, const std::string& password, char operacion);
