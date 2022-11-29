/*
Implementa una función que, dada una cadena de caracteres, devuelva el
número de vocales que tiene. Por ejemplo, la cadena “prueba” debería
devolver 3.
*/

#include <stdio.h>
#include <string.h>

int vocales(char cadena[]);

int main(){

    char cadena1[10];
    printf("Cadena de caracteres: \n");
    scanf("%s", cadena1);
    int resultado = vocales(cadena1);
    printf("El numero de vocales es: %d\n", resultado);

    return 0;
}

int vocales(char c[]){
    int contador = 0;
    for(int i = 0; i < strlen(c); i++){
        if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u'){
            contador++;
        }
    }
    return contador;
}