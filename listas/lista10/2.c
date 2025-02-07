#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// Escreva uma função que receba um vetor de inteiros e seu tamanho n. A função deve retornar o
// endereço de um novo vetor, alocado na heap, contendo os max maiores elementos contidos no
// vetor original. OBS: você pode modificar o conteúdo do vetor original, se necessário.

int* create_vector(int n) {
    int* p = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++){
        p[i] = 0;
    }
    return p;
}

int* get_largest(int n, int* v, int max){
    if (n < max){
        max = n;
    }
    
    int* returnable = create_vector(max);

    for (int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if (v[j] < v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < max; i++){
        returnable[i] = v[i];
    }

    return returnable;
}

int main(int argc, char const *argv[]){
    
    int array[] = {70,1,2,3,42,2,1,23,2,1222,212,5};
    int n = 12;
    int max = 3;

    int* p = get_largest(n, array, max);

    for (int i = 0; i < max; i++){
        printf("p[%d] = %d\n", i, *(p+i));
    }
    
    free(p);
    return 0;
}
