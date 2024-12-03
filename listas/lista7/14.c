#include <stdio.h>
/*
Escreva uma função que verifica se uma matriz contém um triângulo superior e devolve 1 (true) ou
0 (false). Considere que a matriz é quadrada, com dimensões d. Dica: nesta matriz, todos os
elementos do triângulo esquerdo inferior, nos quais row > col, devem ser iguais a zero.
*/

int check_upper_triangle(int d, int m[d][d]){
    for (int i = 0; i < d; i++){
        for (int j = 0; j < d; j++){
            if (i > j && m[i][j] != 0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){

    int m[3][3] = {
        {1,2,3},
        {0,5,6},
        {0,1,9},
    };


    printf("%d", check_upper_triangle(3, m));

    return 0;
}