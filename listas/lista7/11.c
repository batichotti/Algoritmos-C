#include <stdio.h>
/*
Escreva uma função que monta a transposta da matriz m1 em m2. Observe que deve haver uma
compatibilidade entre as dimensões das matrizes.
*/

void print_matrix(int rows, int cols, int m[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

void transpose(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2]){
    if (r1 == c2 && c1 == r2){
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                m2[j][i] = m1[i][j];
            }
        }
    } else {
        printf("Transposition is impossible, look at the dimension of both matrixes\n");
    }
    
}

int main(){

    int m1[3][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };

    int m2[4][3];

    transpose(3,4,m1,4,3,m2);
    print_matrix(4,3,m2);
    return 0;
}