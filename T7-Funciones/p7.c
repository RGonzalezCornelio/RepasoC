/*
Implementa una función que reciba un array de enteros 𝑣 y un entero 𝑛, y
devuelva el número de elementos que hay en ese array que son divisibles por
𝑛. Por ejemplo, para la entrada [2,3,5,8,10] y 2, debería devolver 3
*/

#include <stdio.h>

int divisible(int v[10], int n);

int main(){

    int valor, n;

    int v[10];
    for(int i = 0; i < 10; i++){
        printf("Introduce valor para la posicion %d: ", i);
        scanf("%d", &valor);
        v[i] = valor;
    }
    printf("Introduce entero n: ");
    scanf("%d", &n);

    int resultado = divisible(v, n);
    printf("Es divisible por %d: %d numeros\n",n, resultado);



    return 0;
}

int divisible(int v[10], int n){
    int divisibles = 0;
    for(int i = 0; i < 10; i++){
        if(v[i] % n == 0){
            divisibles++;
        }
    }


    return divisibles;
}