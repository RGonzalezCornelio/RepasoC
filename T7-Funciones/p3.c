/*
Implementa una función que reciba un precio en euros y su IVA, y devuelva el
precio del producto IVA incluido.
*/

#include <stdio.h>

float producto(int *precioInicial, int *iva);

int main(){

    int precio_inicial, IVA;
    printf("Precio del producto: \n");
    scanf("%d", &precio_inicial);
    printf("IVA (en porcentaje): \n");
    scanf("%d", &IVA);

    float precio_final = producto(&precio_inicial, &IVA);
    printf("El precio con el IVA añadido es: %0.2f€\n", precio_final);

    return 0;
}

float producto(int *precioInicial, int *iva){
    return *precioInicial * (*iva+100) / 100.00; //Ojo cuando se maneja con floats el poner a los enteros tambien como floats (100 --> 100.00)
}