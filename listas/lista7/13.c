#include <stdio.h>

/*
Escreva uma função que cria o Triângulo de Pascal em uma matriz e depois o imprime. A função
deve receber o número de linhas desejado para o triângulo.
*/

void print_matrix(int rows, int cols, int m[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

void pascal_triangle(int n){
    int m[n][n+1];

    for (int i = 0; i < n; i++){
       for (int j = 0; j < n+1; j++){
         m[i][j] = 0;
       }
    }

    m[0][1] = 1;

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n; j++){
            m[i+1][j+1] = m[i][j] + m[i][j+1];
        }
    }

    print_matrix(n, n+1, m);
}

int main(){
    pascal_triangle(6);
    return 0;
}