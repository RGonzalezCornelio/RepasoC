/*
En este ejercicio trabajaremos con la resta de punteros. Para ello, realiza un programa que pida al usuario dos
números enteros.
Después crea dos punteros, uno a cada variable e imprime la resta de punteros. ¿Qué valor es el resultante? ¿sabrías
explicar por qué?.
Ahora, pide al usuario un número n y crea un array de double de tamaño n. Crea un puntero que apunte a la
primera posición del array, y otro que apunte a la segunda. Calcula la resta de ambos punteros, ¿cuál es el resultado?
¿Crees que tiene sentido?
*/

#include <stdio.h>

int main(){

    int n1, n2;
    printf("Dame el primer numero: \n");
    scanf("%d", &n1);
    printf("Dame el segundo numero: \n");
    scanf("%d", &n2);

    int *p1, *p2;
    p1 = &n1;
    p2 = &n2;
    printf("Direccion de memoria primer puntero: %p\n", p1);
    printf("Direccion de memoria segundo puntero: %p\n", p2);
    //La diferencia entre punteros es la distancia que separa las direcciones de memoria a las que apuntan
    printf("La diferencia de punteros es: %ld\n", (p2-p1));


    int n;
    printf("Dame un numero n para el array: \n");
    scanf("%d", &n);
    double array[n];
    double *puntero1, *puntero2;
    puntero1 = array; //puntero1 = &array[0]; *puntero1 = array[0]
    puntero2 = &array[1]; // *(puntero1 + 1) = array[1]; *(puntero1 + 2) = array[2]

    printf("La diferencia de punteros es %ld\n", (puntero2 - puntero1));

}