#include <stdio.h>

/*
Escreva uma função que inicia uma matriz com valores inteiros, iniciando em start e progredindo
com step.
*/

void int_values(int rows, int cols, int m[rows][cols], int start, int step){
    int iterador = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            m[i][j] = start + iterador*step;
            iterador++;
        }
    }
}


int main(){
    int matriz[3][3];

    int_values(3,3,matriz, 10, 2);
    printf("%d", matriz[2][2]);
    return 0;
}