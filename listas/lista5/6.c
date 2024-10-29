#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*
Escreva uma função que verifica se os elementos de um vetor, passado como
parâmetro, estão em ordem crescente. A função deve retornar 1 (true),
caso os elementos estejam dispostos em ordem crescente, ou 0 (false),
em caso contrário.
*/

int is_ascending(int n, int* vector){
    int boolean = 1;
    if (n > 0){
        for (int i = 0; i < n-1; i++){
            if (vector[i] > vector[i+1]){
                boolean = 0;
                break;
            }
        }
    }

    return boolean;
}

int main(){
    int n;
    printf("Len of your array:\n> ");
    scanf(" %d", &n);

    int v[n];
    for (int i = 0; i < n; i++){
        v[i] = rand() % 100;
    }

    int is_order = is_ascending(n, v);
    printf("Is ascending: %d\n", is_order);
    return 0;
}