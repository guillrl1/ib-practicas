#include <iostream>
#include <fstream>
#include "ejercicio5_cifrado.h"
#include "tools.h" // Asegúrate de incluir los archivos de encabezado necesarios

int main(int argc, char* argv[]) {
    if (argc != 6) {
        std::cerr << "Uso incorrecto. Pruebe --help" << std::endl;
        return 1;
    }

    std::ifstream finput{argv[1]};
    std::ofstream foutput{argv[2]};
    std::string metodo{argv[3]};
    std::string password{argv[4]};
    std::string operacioninput{argv[5]};
    char operacion = operacioninput[0];
    
    // Llama a la función TipoCifrado para realizar la lógica de cifrado
    TipoCifrado(finput, foutput, metodo, password, operacion);

    return 0;
}
