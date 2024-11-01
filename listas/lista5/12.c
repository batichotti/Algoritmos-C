#include <stdio.h>
/*
Considere as operações dos dois exercícios anteriores. Após algumas operações de inserção e
remoção, o vetor ficará repleto de “buracos”. Escreva uma função que recebe um vetor vet de
tamanho n. O vetor contém inteiros positivos e posições livres, marcadas com -1. A função deve
desfragmentar o vetor, colocando todos os valores válidos à esquerda.
*/
void vector_defrag(int n, int* vector){
    for (int i = 0; i < n; i++){
        if (vector[i] == -1 && (i+1 < n) ){
            for (int k = i+1; k < n; k++){
                if (vector[k] != -1){
                    vector[i] = vector[k];
                    vector[k] = -1;
                    break;
                }
            }
        }
    }
}

int main(){
    int n = 8;
    int v[n];

    for (int i = 0; i < n; i++){
        v[i] = i;
        if (i%2==0){
            v[i] = -1;
        }
        
    }
    
    vector_defrag(n, v);

    for (int i = 0; i < n; i++){
        printf("%d\n", v[i]);
    }
    
}