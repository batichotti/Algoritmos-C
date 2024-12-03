#include <stdio.h>
/*
Escreva uma função que verifica a igualdade entre duas matrizes. Ele deve retornar 1 (true) se as
matrizes forem iguais ou 0 (false), caso sejam diferentes. Matrizes iguais possuem os mesmos
elementos e as mesmas dimensões.
*/

int matrix_equals(int r1, int c1, int m[r1][c1], int r2, int c2, int n[r2][c2]){
    if (r1 == r2){
        if (c1 == c2){
            for (int i = 0; i < r1; i++){
                for (int j = 0; j < c1; j++){
                    if (m[i][j] != n[i][j]){
                        return 0;
                    }
                }
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }
    return 1;
}

int main(){
    int v[2][2] = {
        {1,2},
        {1,2}
    };

    int w[2][2] = {
        {1,2},
        {1,2}
    };

    printf("%d", matrix_equals(2,2,v,2,2,w));

    return 0;
}