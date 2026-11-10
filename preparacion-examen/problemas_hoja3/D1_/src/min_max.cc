/**
 * @brief min_max.cc
 * @brief Contiene funciones para calcular los numeros minimos y maximos de un numero
*/
#include "min_max.h"
/**
 * @brief función que calcula el minimo de un numero
 * @param num el numero recibido por el ususario
 * @return el numero mas pequeño del numero
*/
int Min(unsigned long int num) {
  int min{9};
  while(num > 0) {
    if(min > (num % 10)) {
      min = (num % 10);
    }
    num /= 10;
 }
 return min;
}
/**
 * @brief funcion para calcular el maximo de un numero
 * @param num el numero recibido por el usuario
 * @return el numero mas grande del numero
*/
int Max(unsigned long int num) {
  int max{0};
  while(num > 0) {
    if(max < (num % 10)) {
      max = (num % 10);
    }
    num /= 10;
  }
  return max;
}