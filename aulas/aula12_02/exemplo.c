#include <stdio.h>

/*
imprimir posições impares de um vetor sem o operador de deslocamento.
*/

void impares(int n, int* v){
    for (int i = 1; i < n; i++){
        printf("%d ", *(v+i));
        i++;
    }
}

int main(){
    int v[] = {1,2,3,4,5,6,7,8,9,10};

    impares(10, v);
    return 0;
}