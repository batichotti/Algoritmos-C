#include <stdio.h>
/*
Escreva uma função que recebe um vetor contendo números inteiros. Ela deve determinar o
segmento de soma máxima e imprimi-lo.
*/

void max_num_slice2(int n, int* vector){
    int soma = vector[0];
    int soma_temporaria = 0;

    if (n > 0){
        for (int i = 0; i < n; i++){
            if (soma_temporaria + vector[i] < vector[i]){
                soma_temporaria = vector[i];
            } else {
                soma_temporaria += vector[i];
            }

            if (soma < soma_temporaria){
                soma = soma_temporaria;
            }
            
        }
    }

    printf("A soma eh %d", soma);
}

int main(){
    int n = 12;
    int v[] = {5, 2,-2,-7, 3,14,10,-3, 9,-6, 4, 1};

    max_num_slice2(n, v);
}