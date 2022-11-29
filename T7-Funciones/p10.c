/*
Implementa una función que censure una contraseña recibida como una
cadena de caracteres. Para ello, sustituirá cada valor de la contraseña por un
carácter ‘*’.
*/

#include <stdio.h>
#include <string.h>

char* contraseña(char c[10]);

int main(){

    char c[10];
    printf("Introduce una contraseña: ");
    scanf("%s", c);

    char* cadena = contraseña(c);
    for(int i = 0; i < strlen(cadena); i++){
        printf("%c",cadena[i]);
    }
    printf("\n");


    return 0;
}

char* contraseña(char c[10]){
    for(int i = 0; i < strlen(c); i++){
        c[i] = '*';
    }
    return c;
}