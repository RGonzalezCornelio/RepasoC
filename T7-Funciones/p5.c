/*
Implementa una función que, dadas dos cadenas de caracteres, devuelva el
número de caracteres diferentes entre ellas. Por ejemplo, las cadenas “hola” y
“halo”, debería devolver 2.
*/

#include <stdio.h>
#include <string.h>

int caracteres_diferentes(char c1[10], char c2[10]);

int main(){

    char cadena1[10], cadena2[10];
    printf("Primera cadena de caracteres: \n");
    scanf("%s", cadena1);
    printf("Segunda cadena de caracteres: \n");
    scanf("%s", cadena2);

    int resultado = caracteres_diferentes(cadena1, cadena2);
    printf("Numero de caracteres diferentes: %d\n", resultado);

    return 0;
}

int caracteres_diferentes(char c1[10], char c2[10]){
    
    int contador = 0;
    for(int i = 0; i < 10; i++){
        if(c1[i] != c2[i]){
            contador++;
        }
    }

    return contador;
}