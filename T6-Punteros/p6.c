/*
En este último ejercicio, tu tarea consistirá en trabajar con matrices (arrays bi-dimensionales) pero usando punteros.
Para ello, debes hacer un programa que le pida al usuario dos números enteros (n y m), y con ellos inicializará una
matriz de tamaño n × m a la que le tendrás que dar valores.

Cuando tengas hecho esto, el programa le pedirá al usuario las coordenadas de dos casillas, y el programa
deberá imprimir el valor de la primera casilla (primeras dos coordenadas), el valor de la segunda casilla (las dos úl-
timas coordenadas) y la suma de estas casillas. NOTA: el acceso a estas dos casillas se debe de hacer usando punteros.

Por último, este proceso de pedir al usuario las dos coordenadas se debe repetir hasta alguna de las coorde-
nadas introducidas sea negativa. Y además, deberías incorporar los mecanismos necesarios para que si el usuario
introduce valores que están fuera de las dimensiones de la matriz, se muestre un mensaje de error y continúe pidiendo
más números.
*/

#include <stdio.h>

int main(){

    int N, M;
    printf("Dame el valor de las filas: \n");
    scanf("%d", &N);
    printf("Dame el valor de las columnas: \n");
    scanf("%d", &M);

    int array[N][M];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int valor;
            printf("Introduce un valor para la coordenada (%d,%d): ", i, j);
            scanf("%d", &valor);
        }
    }

    int *primerElemento;
    primerElemento = &array[0][0];

    //*p2 = array[N-1][M-1];

    printf("El valor de la primera casilla es: %d\n", *primerElemento);
    //printf("El valor de la ultima casilla es: %d\n", *p2);
 

    
}