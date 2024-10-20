#include <stdio.h>
/*
Escreva um programa que calcula a multiplicação de dois números inteiros utilizando somente o
operador aritmético de adição (+). Não é permitido utilizar o operador de multiplicação (*).
*/

int main(){
    int a, b, sum;
    printf("Insira a x b:\n> ");
    scanf(" %d %d", &a, &b);

    sum = 0;
    for (int i = 0; i < b; i++){
        sum += a;
    }
    
    printf("%d x %d = %d", a, b, sum);
    return 0;
}