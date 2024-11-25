#include <stdio.h>

void print_matriz(int r, int c, int v[r][c]){
     for (int i = 0; i < r; i++){ //linhas
        for (int j = 0; j < c; j++){ //colunas
            printf("%*d ", 2, v[i][j]);
        }
        printf("\n");
    }
}

int main(){

    //Matriz
    int v[3][4] = { //3 linhas x 4 colunas + da pra omitir a primeira dimensão + v[linha][coluna]
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };
    int rows = 3; int cols = 4;

    // Matriz como parâmetro
    print_matriz(rows, cols, v);

    return 0;
}