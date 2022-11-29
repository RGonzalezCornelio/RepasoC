/*
Implementa la función toUpperCase que, dada una letra recibida como
parámetro, la convierta en mayúscula. Por ejemplo, para entrada ‘a’ debería
convertirse en ‘A’, mientras que la entrada ‘B’ se mantendría como ‘B’.
*/

#include <stdio.h>
#include <ctype.h>

char toUpperCase(char *c);

int main(){

    char c;
    printf("Introduce una letra minuscula: ");
    scanf("%c", &c);

    char mayuscula = toUpperCase(&c);
    printf("La letra mayuscula es: %c\n", mayuscula);

    return 0;
}
char toUpperCase(char *c){
    return toupper(*c);
}