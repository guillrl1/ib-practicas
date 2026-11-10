# Build process:
#   1. cd <project_folder>
#   2. mkdir build
#   3. cd build
#   4. cmake ..
#   5. make

cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name 
project(scalar_product                # Mandatory
    VERSION 1.0
    DESCRIPTION "A simple program"
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17) 						# Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# Adds an executable target called "scalar_product" to be built from the source files listed in the command invocation.
add_executable(scalar_product
    src/tools.h
    src/tools.cc
    src/scalar_product.h
    src/scalar_product_func.cc
    src/scalar_product_main.cc)

# Add expected compiler features to a target.
target_compile_features(scalar_product PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(scalar_product PRIVATE -Wall -Wextra -Wpedantic -Weffc++)
