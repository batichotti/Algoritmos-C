#include <stdio.h>
/*
Escreva uma função que recebe um vetor vet de tamanho n, bem como, um elemento elem a ser
procurado. A função deve substituir todas as ocorrência de elem por -1.
*/

void replace_all(int n, int* vet, int elem){
    for (int i = 0; i < n; i++){
        if (vet[i] == elem){
            vet[i] = -1;
        }
        
    }
    
}

int main(){
    int n;
    n = 19;
    int vector[n];

    replace_all(n, vector, 0);

    for (int i = 0; i < n; i++){
        printf("%d\n", vector[i]);
    }
    return 0;
}