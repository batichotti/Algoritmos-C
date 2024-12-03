#include <stdio.h>
/*
Escreva uma função que verifica se uma matriz é simétrica e devolve 1 (true) ou 0 (false). Em uma
matriz simétrica os valores são espelhados em relação à diagonal principal. Considere que a matriz
é quadrada, com dimensões d.
*/

void print_matrix(int rows, int cols, int m[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

int check_symmetric(int d, int m[d][d]){

    for (int i = 0; i < d; i++){
        for (int j = 0; j < d; j++){
            if (m[i][j] != m[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int m[3][3] = {
        {1,2,3},
        {2,4,5},
        {3,5,8}
    };

    printf("%d", check_symmetric(3, m));
    return 0;
}