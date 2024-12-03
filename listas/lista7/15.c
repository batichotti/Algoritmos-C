#include <stdio.h>
/*
Escreva uma função que verifica se uma matriz é identidade e devolve 1 (true) ou 0 (false).
*/

int check_identity(int rows, int cols, int m[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if ((i == j && m[i][j] != 1) || (i != j && m[i][j] != 0)) {
                return 0;
            }
        }
    }
    return 1;
}

int main(){

    int m[3][3] = {
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };

    printf("%d", check_identity(3,3,m));

    return 0;
}