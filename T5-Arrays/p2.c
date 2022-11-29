/*
Consideremos unas elecciones en las que se han presentado cuatro candidatos. Cada uno de ellos ha tenido
un nº de votos. Además existirán votos nulos y también en blanco. Realizar un programa que pida el número
de votos de cada candidato, de votos en blanco y de votos nulos, y los almacene. Escribir el resultado de las
elecciones en forma de histograma con un asterisco por voto. Por ejemplo:
CANDIDATO1
CANDIDATO2
CANDIDATO3
CANDIDATO4
NULOS
BLANCOS
**************************
*********************************************
****
************
*
***

*/

#include <stdio.h>

int main(){

    int candidato1, candidato2, candidato3, nulos, blanco, i;
    printf("Votos candidato 1: ");
    scanf("%d", &candidato1);

    printf("Votos candidato 2: ");
    scanf("%d", &candidato2);

    printf("Votos candidato 3: ");
    scanf("%d", &candidato3);

    printf("Votos nulos: ");
    scanf("%d", &nulos);

    printf("Votos en blanco: ");
    scanf("%d", &blanco);

    char c1[candidato1];
    char c2[candidato2];
    char c3[candidato3];
    char n[nulos];
    char b[blanco];

    for( i = 0; i < candidato1; i++){
        c1[i] = '*';
    }

    for( i = 0; i < candidato2; i++){
        c2[i] = '*';
    }

    for( i = 0; i < candidato3; i++){
        c3[i] = '*';
    }

    for( i = 0; i < nulos; i++){
        n[i] = '*';
    }
    for(i = 0; i < blanco; i++){
        b[i] = '*';
    }

    printf("CANDIDATO1: ");
    for(i = 0; i < candidato1; i++){
        printf("%c", c1[i]);
    }
    printf("\n");
    printf("CANDIDATO2: ");
    for(i = 0; i < candidato2; i++){
        printf("%c", c2[i]);
    }
    printf("\n");
    printf("CANDIDATO3: ");
    for(i = 0; i < candidato3; i++){
        printf("%c", c3[i]);
    }
    printf("\n");
    printf("NULOS: ");
    for(i = 0; i < nulos; i++){
        printf("%c", n[i]);
    }
    printf("\n");
    printf("BLANCO: ");
    for(i = 0; i < blanco; i++){
        printf("%c", b[i]);
    }
    printf("\n");


    return 0;
}
