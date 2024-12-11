#include <stdio.h>
/*
Escreva uma função que recebe as dimensões e o endereço de uma matriz (vetor bidimensional).
A função deve imprimir seu conteúdo, sem utilizar o operador de índice [ ] para acessar os
elementos da matriz.
*/
void print_vector2D(int rows, int cols, const int* v){
    int elem = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%d ",  *(v + elem));
            elem++;
        }
        printf("\n");
    }
}

int main(){
    int v[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9,10,11,12}
    };
    print_vector2D(3, 4, (int*)v);

    return 0;
}