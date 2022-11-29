/*
Escribir un programa que indique a una máquina expendedora de un producto cualquiera,  cuántas monedas de cada valor se deben dar para entregar el 
cambio  a un cliente que ha hecho  una compra. Las  monedas pueden ser de 1 ó 2 euros y de 50, 20, 5, 2 y 1 céntimos. El cambio debe incluir el 
menor número posible de monedas.  El  precio  y  la  cantidad  pagada  por  el  cliente  se  leen  por  pantalla.  
*/

#include <stdio.h>
#include <math.h>

int main(){

    int monedas[7] = {200, 100, 50, 20, 5, 2, 1};

    int numMonedas = 0;
    int monedasNecesarias = 0;

    float compra, pagado;
    printf("Precio de la compra: \n");
    scanf("%f", &compra);
    printf("Cantidad pagada: \n");
    scanf("%f", &pagado);

    float vuelta = (pagado - compra);
    printf("El cambio es: %.2f€\n", vuelta);

    int cambio = vuelta*100;

    for(int i = 0; i < 7; i++){
        int monedaActual = monedas[i];

        monedasNecesarias = cambio/monedaActual;
        cambio = cambio % monedaActual;
        
        float aEuros = monedas[i]/100.00;
        
        printf("Se necesita %d monedas de %.2f €\n", monedasNecesarias, aEuros);

    }



    return 0;
}