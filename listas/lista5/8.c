#include <stdio.h>
/*
Escreva uma função que recebe um vetor e inverte os seus elementos. OBS: o código não deve
apenas imprimir o vetor ao contrário, mas sim, inverter os elementos no próprio vetor.
*/

int* inverter_vetor(int n, int* vector){
    for (int i = n-1; i <= 0; i--){
        reversed[i-n+1] = vector[i];
    }
    

}

int main(){
    int n = 8;
    int v[n];
    int reversed[n];

    for (int i = 0; i < n; i++){
        v[i] = i;
    }
    
    inverter_vetor(n, v);

    for (int i = 0; i < n; i++){
    }
    
}