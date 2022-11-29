/*
Desarrolla un programa que realice los siguientes pasos:

1. Pida al usuario un número y lo almacene en una variable numero.
2. Declara una variable que apunte a la variable numero.
3. Modifica el valor de variable numero PERO usando la variable puntero.
4. Comprueba, imprimiendo por pantalla, que tanto el valor de la variable numero es el mismo que el valor al que
apunta la variable puntero.
*/

#include <stdio.h>

int main(){

    int numero, *p;
    printf("Introduce un numero: \n");
    scanf("%d", &numero);


    p = &numero;

    *p = 43;

    printf("Variable numero: %d\n", numero);
    printf("Puntero *p: %d\n", *p);
    printf("El puntero es: %p\n", p);


    // int n, *p;
    // // Petición de número
    // printf("Dame un numero: \n");
    // scanf("%d",&n);

    // // Asignación al puntero de la dirección de n
    // p=&n;
    // // Modificar el valor de n, a través de puntero
    // *p=3;
    // // Incremento de n
    // n++;
    // // Impresión de valores por pantalla
    // printf("El numero es: %d\n", n);
    // printf("El valor al que apunta puntero es: %d\n", *p);
    // printf("El puntero es: %p\n", p);

    return 0;
}