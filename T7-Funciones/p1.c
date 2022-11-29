/*
Implementa una función que, dado un número entero, devuelva su inverso. Por 
ejemplo, para 𝑛 = 3, devolvería 1/3 = 0.33 
*/

#include <stdio.h>

float invertir(float *n);

int main(){
    float n;
    printf("Dame un numero: \n");
    scanf("%f", &n);
    float numInverso = invertir(&n);
    printf("El inverso de %.1f es: %.4f", n, numInverso);
    

    return 0;
}

float invertir(float *n){

    float inverso = 1 / *n;
    return inverso;
}