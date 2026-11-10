#pragma once
#include <string>
#include <fstream>

void CifradoCesar(std::ifstream& finput, std::ofstream& foutput, int k, char operacion);
void TipoCifrado(std::ifstream& finput, std::ofstream& foutput, const std::string& metodo, const std::string& password, char operacion);
