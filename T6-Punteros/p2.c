/*
Desarrolla un programa que realice los siguientes pasos:
1. Declara una variable en coma flotante e inicialízala a 5.0.
2. Declara una variable (llamada puntero) que apunte a la variable que acabas de crear.
3. Imprime por pantalla la dirección de memoria a la que apunta la variable puntero.
4. Queremos incrementar en 1 el valor anterior. Para hacerlo, incluimos la siguiente línea de código:
puntero = puntero + 1;
5. Imprime el contenido al que apunta esa dirección.
¿El programa imprime 6.0? ¿Dónde estaría el error (si es que lo hay)? Recuerda que puedes ayudarte del debug-
ger
*/

#include <stdio.h>

int main(){
    float x = 5.0;
    float *puntero;

    puntero = &x;

    printf("Direccion de memoria de puntero: %p\n", puntero);

    puntero = puntero + 1;
    printf("Direccion de memoria de puntero tras suma: %p\n", puntero);

    printf("Contenido del puntero: %f\n", *puntero);
}