/*
En este ejercicio tu labor será la de desarrollar un programa que le pida al usuario un número (n) mayor que 0 (Si es
menor, o igual, que 0 deberá volver a preguntar al usuario por otro número).
Después, el programa declarará un array de tamaño n, y le pedirá al usuario los nvalores que tiene el array.
Una vez hecho esto, tienes que imprimir el valor del array en orden inverso usando punteros.
*/


#include <stdio.h>

int main(){
    int n = 0;
    while(n <= 0){
        printf("Dame un numero (mayor que 0): \n");
        scanf("%d", &n);
    }
    int array[n];
    for(int i = 0; i < n; i++){
        int valor = 0;
        printf("Introduce un valor para la posicion %d del array: \n", i);
        scanf("%d", &valor);
        array[i] = valor;
    }
    
    int *p;
    //Inicialmente el puntero apunta a la ultima posicion del array --> p = &array[n]
    p = array;
    //Ojo con el array, la ultima posicion no es array[n] (n es el tamaño maximo, va desde 0 hasta n-1)
    for(int j = n-1; j >= 0; j--){
        printf("%d ", *(p + j));
    }
    printf("\n");

    return 0;
    
}



