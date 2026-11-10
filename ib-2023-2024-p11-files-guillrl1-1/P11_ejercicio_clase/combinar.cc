#include <iostream>
#include <fstream>
#include <string>
#include <combinar.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Uso: " << argv[0] << " archivo1.txt archivo2.txt salida.txt" << std::endl;
        return 1;
    }
    std::ifstream archivo1(argv[1]);
    std::ifstream archivo2(argv[2]);
    std::ofstream salida(argv[3]);
    std::string palabraArchivo1, palabraArchivo2;

    Combinar(archivo1, archivo2, salida, palabraArchivo1, palabraArchivo2);

    return 0;
}

