#include <stdio.h>
/*
Escreva uma função que troca as diagonais de uma matriz. Considere que a matriz é quadrada,
com dimensões d.
*/

void print_matrix(int rows, int cols, int m[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

void switch_diagonals(int d, int m[d][d]){

    int first = 0;
    int last = d-1;
    for (int i = 0; i < d; i++){
        int temp = m[i][first];
        m[i][first] = m[i][last];
        m[i][last] = temp;
        first++;
        last--;
    }
}

int main(){

    int m1[4][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };

    switch_diagonals(4, m1);
    print_matrix(4,4,m1);
    return 0;
}