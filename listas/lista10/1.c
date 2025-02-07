#include <stdio.h>
#include <stdlib.h>
// Escreva uma função que aloca na heap um array de inteiros de tamanho n, preenchido com zeros,
// e retorna seu endereço.

int* create_vector(int n) {
    int* p = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++){
        p[i] = 0;
    }
    return p;
}

int main(int argc, char const *argv[]){
    int n = 10;
    int* p = create_vector(n);

    for (int i = 0; i < n; i++){
        printf("p[%d] = %d\n", i, *(p+i));
    }
    
    return 0;
}
