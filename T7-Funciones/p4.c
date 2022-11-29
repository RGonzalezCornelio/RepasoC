/*
Implementa un programa que calcule el código hash de una cadena de
caracteres que reciba como argumento. Para calcular el código hash de una
cadena, sumaremos cada valor ASCII de la letra multiplicado por la posición que
ocupa. Por ejemplo, para la cadena “hola”, su código hash sería 104 ⋅ 1 + 111 ⋅
2 + 108 ⋅ 3 + 97 ⋅ 4 = 1038.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcular_hash(char cadena[10]);

int main(){

    char cadena[10];
    printf("Dame una cadena de caracteres: \n");
    scanf("%s", cadena);

    int resultado = calcular_hash(cadena);
    printf("El codigo hash de la cadena es: %d\n", resultado);

    return 0;
}

int calcular_hash(char cadena[10]){
    int hash = 0;
    //Si representamos un caracter como entero nos devuelve su numero ASCII
    //printf("%d ", cadena[i]);
    for(int i = 0; i < strlen(cadena); i++){
        int ascii = cadena[i];
        hash = hash + ascii*(i+1);
    }
    return hash;
}