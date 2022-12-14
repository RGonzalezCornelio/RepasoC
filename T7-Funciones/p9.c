/*
Implementa una funciรณn que reciba un float ๐ y un entero ๐, y modifique ๐
para que se redondee a ๐ decimales. Para ello, basta con multiplicar ๐ por 10^r ,
almacenarlo en un entero, y asignar a ๐ el resultado de ๐ /10^r .
*/


//OJO PARA COMPILAR INTRODUCIR EL COMANDO -lm
//Para hacer potencias en c, hay que usar pow(double, double) de math.h que 
#include <stdio.h>
#include <math.h>

float funcion(float n, double r);

int main(){

    float n;
    double r;
    printf("Introduce un float: \n");
    scanf("%f", &n);
    printf("Introduce un entero para redondear el float: \n");
    scanf("%lf", &r);

    float resultado = funcion(n, r);
    printf("Numero %f redondeado a %lf decimales: %f\n", n, r, resultado);

    return 0;
}

float funcion(float n, double r){
    double diez = 10;
    double elevado = pow(diez, r);
    int entero = n * elevado;
    printf("%d\n", entero);
    return (entero / elevado);
}