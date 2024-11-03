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

    for (int i = 0; i < n; i++){ //ordenando crescente bills
        for (int k = 0; k < n-1; k++) {
            if (bills[k] > bills[k+1]){
                int escopo = bills[k];
                bills[k] = bills[k+1];
                bills[k+1] = escopo;
            }
        }
        
    }

    for (int i = n-1; i >= 0; i--){
        count[i] = (value) / (bills[i]);
        value = value - count[i] * bills[i];
    }
    

    for (int i = 0; i < n; i++){
        printf("%d x %d\n", count[i], bills[i]);
    }

}

int main(){
    int n = 8;
    int v[] = {5, 1, 10, 200, 20, 100, 50, 2};
    
    min_bills(209, n, v);
}