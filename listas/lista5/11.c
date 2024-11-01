#include <stdio.h>
/*
Considerando o mesmo formato de lista do exercício anterior, escreva uma função que recebe um
vet1 de tamanho n e uma posição. A função deve “remover” o elemento da lista, marcando a
posição com -1. Caso a posição seja inválida, nenhuma operação deve ser realizada.
*/
void vector_remove(int n, int* vector, int pos){
    for (int i = 0; i < n; i++){
        if (i==pos){
            vector[i] = -1;
        }
    }
    

}

int main(){
    int n = 8;
    int v[n];
    int reversed[n];

    for (int i = 0; i < n; i++){
        v[i] = i;
    }
    
    vector_remove(n, v, 4);

    for (int i = 0; i < n; i++){
        printf("%d\n", v[i]);
    }
    
}