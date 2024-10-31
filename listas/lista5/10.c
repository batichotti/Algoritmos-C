#include <stdio.h>
/*
. Um vetor pode ser utilizado como uma lista que permite inserções e remoções de números inteiros
positivos. No vetor, o valor -1 indica posição vazia (disponível). Escreva uma função que recebe um
vet1 de tamanho n e um novo elemento. A função deve inserir o novo elemento na primeira
posição válida disponível, isto é, marcada com -1 (se houver). A função deve retornar 1, caso a
inserção ocorra, ou 0, em caso contrário.
*/

int vector_insert(int n, int* vector, int elem){
    int indisponivel = -1;

    for (int i = 0; i < n; i++){
        if (vector[i] == indisponivel){
            vector[i] = elem;
            return 1;
        }
    }
    
    return 0;
}

int main(){
    int n;
    printf("> ");
    scanf(" %d", &n);

    int v[n];

    int retorno = vector_insert(n, v, 14);
    printf("%d", retorno);

    return 0;
}