#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma função que inicia uma matriz com valores aleatórios, sorteados entre min e max, isto
é [min..max]. Utilize a função rand() da biblioteca <stdlib.h> para obter os valores:
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

int main(){
    int matriz[3][3] = {};

    matrix_random(3,3,matriz,5,50);
    
    print_matrix(3,3,matriz);
    return 0;
}