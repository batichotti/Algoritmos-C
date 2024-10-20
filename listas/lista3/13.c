#include <stdio.h>
/*
Escreva um programa que, dado um número inteiro positivo, imprime seus fatores primos.
*/

int main(){
    int value, original, performance_saver;
    printf("Insira um valor:\n> ");
    scanf(" %d", &value);

    original = value;
    performance_saver = 1;

    if (value < 0 || value == 1){
        printf("Numero invalido");
        return 0;
    }

    for (int i = 2; i <= original; i++){
        while (value % i == 0){
            printf("%d ", i);
            value /= i;
            performance_saver *= i;
        }
        if (performance_saver == original){
            break;
        }
    }

    return 0;
}