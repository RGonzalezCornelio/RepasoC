/*
Escribir un programa que compare dos arrays de enteros y diga si son idénticos o no. También debe indicar 
a partir de qué posición son diferentes.
*/


#include <stdio.h>
#include <string.h>

int main(){

    int array1[5] = {1,2,3,4,5};
    int array2[5] = {1,2,3,4,5};
    int iguales = 0;
    int posicion;

    for(int i = 0; i < 5; i++){
        int valorArray1 = array1[i];
        int valorArray2 = array2[i];

        if(valorArray1 != valorArray2){
            posicion = i;
            iguales = 1;
        }
    }
    if(iguales == 0){
        printf("Los arrays son iguales\n");
    }else{
        printf("Los arrays no son iguales, son distintos en la posicion: %d\n", posicion);
    }
    
    

}