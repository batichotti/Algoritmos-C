#include <stdio.h>

void imprime_vetor(int n, int* vector){
    for (int i = 0; i < n; i++){
        printf("%d\n", vector[i]);
    }
}

int main(){
    int n = 20;
    int v[n]; //loaded with memory trash

    imprime_vetor(n, v);
    return 0;
}