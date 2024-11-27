#include <stdio.h>

/*
Escreva uma função que encontra e imprime o maior e o menor valores contidos em uma matriz.
*/

void print_min_max(int rows, int cols, int m[rows][cols]){
    int max = m[0][0];
    int min = m[0][0];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (m[i][j] > max){
                max = m[i][j];
            }
            if (m[i][j] < min) {
                min = m[i][j];
            }
        }
    }
    
    printf("Max: %d\nMin: %d", max, min);

}

int main(){
    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    print_min_max(3,3,matriz);
    return 0;
}