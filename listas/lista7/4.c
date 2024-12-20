#include <stdio.h>

/*
Escreva uma função que retorna a média aritmética simples de todos os elementos da matriz.
*/

float avg(int rows, int cols, int m[rows][cols]){
    int acumulador = 0;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            acumulador += m[i][j];
        }
    }

    float mean = (float) acumulador/(rows*cols);
    
    return mean;
}

int main(){
    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    avg(3,3,matriz);
    return 0;
}