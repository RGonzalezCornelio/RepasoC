/*
Escribir un programa que rellene un array con los veinte primeros números pares. Posteriormente, recorrerá 
el array y calculará la suma de dichos números. Finalmente, mostrará dicha suma por pantalla.
*/

#include <stdio.h>

int main(){

    int array[20];
    int contadorPares = 0;
    int sumaTotal = 0;
    //Rellenamos el array
    for(int i = 0; i < 20; i++){
        array[i] = contadorPares;
        contadorPares = contadorPares + 2;
    }

    for(int j = 0; j < 20; j++){
        printf("%d ", array[j]);
        sumaTotal = array[j] + sumaTotal;
    }

    printf("La suma total es: %d", sumaTotal);


    return 0;
}