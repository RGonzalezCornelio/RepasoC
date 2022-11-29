/*
Implementa una función que reciba un entero e imprima por pantalla el
número en el que termina con letras. Por ejemplo, para 542 imprimiría por
pantalla “dos”.
*/

#include <stdio.h>

char* convertir(int *n);

int main(){

    int n;

    printf("Dame un numero: \n");
    scanf("%d", &n);

    char* resultado = convertir(&n);

    printf("%s\n", resultado);    

    return 0;
}

char* convertir (int *n){

    while(*n >= 10){
        *n = *n % 10; //Asi solo me quedo con el ultimo digito
    }

    switch (*n)
    {
    case 1:
        return "uno";
        break;
    case 2:
        return "dos";
        break;
    case 3:
        return "tres";
    case 4:
        return "cuatro";
        break;
    case 5:
        return "cinco";
        break;
    case 6:
        return "seis";
        break;
    case 7:
        return "siete";
        break;
    case 8:
        return "ocho";
        break;
    case 9:
        return "nueve";
    default:
        break;
    }

}