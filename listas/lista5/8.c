#include <stdio.h>
/*
Escreva uma função que recebe um vetor e inverte os seus elementos. OBS: o código não deve
apenas imprimir o vetor ao contrário, mas sim, inverter os elementos no próprio vetor.
*/

int* inverter_vetor(int n, int* vector, int* reversed){
    for (int i = n-1; i <= 0; i--){
        reversed[i-n+1] = vector[i];
    }

}

int main(){
    int n = 8;
    int v[n];
    int reversed[n];

    for (int i = 0; i < n; i++){
        v[i] = 1;
    }
    
    inverter_vetor(n, &v, &reversed);

    for (int i = 0; i < n; i++){
        printf("%d\n", reversed[i]);
    }
    
}