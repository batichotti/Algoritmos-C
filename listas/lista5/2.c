#include <stdio.h>
#include <stdlib.h>
/*
Escreva uma função que recebe um vetor vet de tamanho n contendo números
inteiros positivos e negativos. A função deve inverter o sinal dos números
 negativos, passando-os para positivo
*/

void set_positive(int n, int* vector){
    for (int i = 0; i < n; i++){
        if (vector[i] < 0){
            vector[i] = (-1)*vector[i];
        }
    }
}

int main(){
    int n;
    printf("Len of your array:\n> ");
    scanf(" %d", &n);

    int v[n];
    for (int i = 0; i < n; i++){
        v[i] = rand() % 100 * (-1);
    }

    set_positive(n, v);
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    
    return 0;
}