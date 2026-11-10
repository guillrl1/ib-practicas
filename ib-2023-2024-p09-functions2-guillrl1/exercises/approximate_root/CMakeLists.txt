# Build process:
#   1. cd <project_folder>
#   2. mkdir build
#   3. cd build
#   4. cmake ..
#   5. make

cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name 
project(approximate_root                # Mandatory
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

# Adds an executable target called "approximate_root" to be built from the source files listed in the command invocation.
add_executable(approximate_root
    src/tools.h
    src/tools.cc
    src/approximate_root.h
    src/approximate_root_func.cc
    src/approximate_root_main.cc)

# Add expected compiler features to a target.
target_compile_features(approximate_root PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(approximate_root PRIVATE -Wall -Wextra -Wpedantic -Weffc++)
