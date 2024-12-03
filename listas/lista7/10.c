#include <stdio.h>
/*
Escreva uma função que realiza a adição de duas matrizes m1 e m2, colocando o resultado em
m3. Considere que todas as matrizes possuem as mesmas dimensões (rows x cols).
*/

void print_matrix(int rows, int cols, int m[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

void sum(int rows, int cols, int m1[rows][cols], int m2[rows][cols], int m3[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

int main(){

    int m1[2][2] = {
        {3,4},
        {6,7}
    };

    int m2[2][2] = {
        {1,1},
        {1,1}
    };

    int m3[2][2];

    sum(2,2,m1,m2,m3);

    print_matrix(2,2,m3);
    return 0;
}