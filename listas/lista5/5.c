#include <stdio.h>
/*
Escreva uma função que faz a leitura de n números inteiros e os coloca no vetor vet fornecido.
Considere que o vet possui tamanho n.
*/

void read_vector(int n, int* vector){
    for (int i = 0; i < n; i++){
        int input;
        printf("> ");
        scanf(" %d", &input);
        vector[i] = input;
    }
}

int main(){
    int n;
    n = 5;
    int vector[n];

    read_vector(n, vector);

    for (int i = 0; i < n; i++){
        printf("%d\n", vector[i]);
    }
    return 0;
}