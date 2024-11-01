#include <stdio.h>
/*
Escreva uma função que recebe um vetor preenchido com inteiros positivos. A função deve
imprimir as ocorrências (contagem) de cada número no vetor. Dica: utilize um vetor count para
armazenar a contagem de cada elemento no vetor vet, relacionando as posições de count aos
valores em vet.
*/

void count_elements(int n, int* vector){
    int incidences[n];

    for (int i = 0; i < n; i++){
        incidences[i] = 0;
    }
    

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if (vector[i] == vector[j]){
                incidences[j] += 1;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++){
        if (incidences[i] != 0){
            printf(" O elemento %d se repetiu %d vezes\n", vector[i], incidences[i]);
        }
    }
}

int main(){
    int n = 12;
    int v[n];

    for (int i = 0; i < n; i++){
        v[i] = i;
        if (i%2==0){
            v[i] = -1;
        }
        
    }
    
    count_elements(n, v);
}