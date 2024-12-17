#include <stdio.h>
#include <stdlib.h>
// Malloc aloca memória na heap
// Malloc é utilizado quando se precisa criar algo dentro de uma função e manter vivo até fora deste escopo de criação
// MALLOC PRECISA ESTAR VINCULADO A UM PONTEIRO
// Se a alocação der errado o retorno é NULL

char* fn(int amount){
    //amount in MegaBytes(MB)
    char* p = malloc(amount * 1000000 * sizeof(char));

    for (int i = 0; i < amount*1000000; i++){
        p[i] = i % 126 + 1;
    }

    return p;
}

int* create(int n){
    int* pointer;

    pointer = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        pointer[i] = 0;
    }

    return pointer;
}

int** create2(int rows, int cols){ // cria matriz
    int** v = malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++){
        v[i] = malloc(cols * sizeof(int));
    }
    
    return v;
}

int main(int argc, char const *argv[]){
    int* p;

    int n = 10;
    p = create(n);

    for (int i = 0; i < n; i++){
        printf("%p -> %d\n", (p+i), *(p+i));
    }
    
    free(p);
    p = NULL; // Boa prática (anular ponteiro depois do free)
    // printf("%c", p[2]); // Retorna segmentation fault

    // Sintoma comum de memory leak: só aumentar a memória utilizada

    // for (int i = 0; i < 50000; i++){
    //     int* v = create(100*i);
    // }

    return 0;
}
