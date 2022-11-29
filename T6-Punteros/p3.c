/*
Desarrolla un programa que pida al usuario un número entero, y lo almacene en una variable llamada numero.
Después, declara una variable (puntero1) que apunte a la variable numero.
Ahora crea otra variable nueva (puntero2) que apunte a la variable puntero1.
Modifica el valor de la variable numero pero usando la variable puntero2.
¿Cuál es el contenido de numero, puntero1 y puntero2?
¿Cuál es la dirección de memoria donde se almacenan numero, puntero1 y puntero2?

*/

#include <stdio.h>

int main(){

    int numero;
    printf("Introduce un numero: \n");
    scanf("%d", &numero);

    int *puntero1;
    //printf("Direccion de memoria de puntero1 antes de asignacion: %p\n", puntero1);
    puntero1 = &numero;
    //printf("Direccion de memoria de puntero1 despues de asignacion: %p\n", puntero1);
    //printf("Contenido de puntero1: %d\n", *puntero1);
    

    int *puntero2;
    puntero2 = puntero1;
    printf("Contenido de puntero2: %d\n", *puntero2);

    *puntero2 = 99;

    printf("Numero: %d\n", numero);
    printf("Numero: %d\n", *puntero1);
    printf("Numero: %d\n", *puntero2);

    printf("Direccion de memoria de numero: %p\n", &numero);
    printf("Direccion de memoria de puntero1: %p\n", puntero1);
    printf("Direccion de memoria de puntero2: %p\n", puntero2);
}