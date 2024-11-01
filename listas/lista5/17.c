#include <stdio.h>
/*
Escreva uma função que recebe um valor inteiro value e um vetor notes com as possíveis cédulas.
A função deve imprimir a quantidade mínima de cédulas equivalente ao valor.
Dica: use um vetor auxiliar count para armazenar a contagem de cada cédula.
*/

void min_bills(int value, int n, int* bills){
    int count[n];
    int soma = 0;

    for (int i = 0; i < n; i++){
        count[i] = 0;
    }

    for (int i = n; soma != value; i++){
        count[i] += value/bills[i];
    }
    
    for (int i = 0; i < n; i++){
        printf("%d x %d", count[i], bills[i]);
    }
    
}

int main(){
    int n = 7;
    int v[] = {1, 5, 10, 20, 50, 100, 200}; //ordem crescente
    
    min_bills(209, n, v);
}