#include <stdio.h>
/*
Escreva uma função que imprime o conteúdo de uma matriz ao contrário, isto é, do último elemento
para o primeiro. Considerando a matriz do exemplo anterior, a função imprimiria do 9 ao 1.
*/

void print_matrix(int rows, int cols, int m[rows][cols]){

    for (int i = rows-1; i >= 0; i--){
        for (int j = cols-1; j >= 0; j--){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
    

}

int main(){

    int matriz[3][3] = {1,2,3,4,5,6,7,8,9};
    print_matrix(3,3,matriz);
    return 0;
}