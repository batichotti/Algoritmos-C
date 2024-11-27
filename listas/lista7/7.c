#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*
Escreva uma função que retorna o total da linha de maior soma em uma matriz. A função deve
somar todos os elementos em cada linha da matriz, para então encontrar a linha de maior soma.
*/

void matrix_random(int rows, int cols, int m[rows][cols], int min, int max){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            m[i][j] = (rand() % (max-min))+min;
        }
    }
}

void print_matrix(int rows, int cols, int m[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

int max_sum(int rows, int cols, int m[rows][cols]){
    int acumulador = 0;
    int max = INT_MIN;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            acumulador += m[i][j];
        }
        if (acumulador > max){
            max = acumulador;
        }
        acumulador = 0;
    }

    return max;
}

int main(){
    int matriz[4][4] = {};
    matrix_random(4,4,matriz,5,50);
    
    printf("%d", max_sum(4,4,matriz));
    printf("\n\n");
    print_matrix(4,4,matriz);
    return 0;
}