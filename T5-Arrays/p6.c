/*
Escribir un programa que sume dos matrices de 4X6 y multiplique dos matrices de 4X4.
*/

#include <stdio.h>

int main(){
    int i, j;
    int matriz1[4][6] = {
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6},
    };
    int matriz2[4][6] = {
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6},
    };

    int matriz3[4][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
    }; 
    int matriz4[4][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
    };

    //Suma m1 y m2
    int sumaTotal[4][6];

    for(i = 0; i < 4; i++){
        for(j = 0; j < 6; j++){
            sumaTotal[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d ", sumaTotal[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    //Producto m3 y m4
    int producto[4][4];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            producto[i][j] = 0;
            for(int k = 0; k < 4; k++){
                producto[i][j] += matriz3[i][k] * matriz4[k][j];
                
            }
            printf("%d ", producto[i][j]);
        }
        printf("\n");
    }





    return 0;
}