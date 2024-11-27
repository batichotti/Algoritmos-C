#include <stdio.h>
/*
Escreva uma função que imprime o conteúdo de uma matriz.
*/

void print_matrix(int rows, int cols, int m[rows][cols]){

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
    

}

int main(){

    int matriz[3][3] = {3,3,3,6,6,6,9,9,9};
    print_matrix(3,3,matriz);
    return 0;
}