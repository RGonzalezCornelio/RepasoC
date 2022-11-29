/*
Escribir un programa que calcule el producto escalar de dos vectores de tamaño 4. La respuesta que debe 
dar el programa debe ser similar a la siguiente:  
El producto escalar de los vectores (  1.00,  1.00,  1.00) 
 y                                  (  2.00,  2.00,  2.00) 
 es  15.00
*/

#include <stdio.h>

int main(){

    float array1[4] = {1.00, 1.00, 1.00, 1.00};
    float array2[4] = {2.00, 2.00, 2.00, 2.00};
    float productoEscalar = 0;

    for(int i = 0; i < 4; i++){
        productoEscalar = array1[i]*array2[i] + productoEscalar;
    }
    printf("El producto escalar es: %f\n", productoEscalar);

    return 0;
}
