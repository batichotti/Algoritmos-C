#include <stdio.h>

int main(){

    //Matriz
    int v[3][4] = { //3 linhas x 4 colunas + da pra omitir a primeira dimensão + v[linha][coluna]
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };
    int rows = 3; int cols = 4;

    for (int i = 0; i < rows; i++){ //linhas
        for (int j = 0; j < cols; j++){ //colunas
            printf("%*d ", 2, v[i][j]);
        }
        printf("\n");
    }
    return 0;
}