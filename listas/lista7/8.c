#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma função que recebe uma matriz e coloca as somas de cada linha na última coluna.
*/

void matrix_random(int rows, int cols, int m[rows][cols], int min, int max){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            m[i][j] = (rand() % (max-min))+min;
        }
    }
}

void put_totals(int rows, int cols, int m[rows][cols]){
    for (int i = 0; i < rows; i++){
        int soma = 0;
        int j;
        for (j = 0; j < cols-1; j++){
            soma += m[i][j];
        }
        m[i][j] = soma;
    }
}

void print_matrix(int rows, int cols, int m[rows][cols]){
    for (int i = 0; i < rows; i++){
        int soma = 0;
        int j;
        for (j = 0; j < cols; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[3][3] = {};

    matrix_random(3,3,matriz,5,50);
    
    put_totals(3,3,matriz);

    print_matrix(3,3,matriz);
    return 0;
}