# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

project(ejercicio5_cifrado VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(ejercicio5_cifrado
    src/tools.h
    src/tools.cc
    src/ejercicio5_cifrado.h
    src/ejercicio5_cifrado_func.cc  # Asegúrate de incluir el archivo con la implementación de TipoCifrado
    src/ejercicio5_cifrado_main.cc)

target_compile_features(ejercicio5_cifrado PRIVATE cxx_std_17)
target_compile_options(ejercicio5_cifrado PRIVATE -Wall -Wextra -Wpedantic -Weffc++)
