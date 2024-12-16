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
        p[i] = 'g';
    }

    return p;
}

int* create(int n){
    int* pointer;

    pointer = malloc(n * sizeof(int));

    return pointer;
}

int main(int argc, char const *argv[]){
    char* p;
    p = fn(100);

    printf("%c", p[2]);

    int* p = create(10);

    int* newp = kalloc();

    int* newnewp = realloc(p, 15*sizeof(int));

    free(p);
    p = NULL; // Boa prática (anular ponteiro depois do free)
    // printf("%c", p[2]); // Retorna segmentation fault

    return 0;
}
