#include <stdio.h>
/*
Escreva um programa que faz a leitura de vários números inteiros (um a cada iteração do laço), até
que se digite zero. O programa deve imprimir a soma e a média aritmética simples dos números
digitados.
*/

int main(){
    int value, amount, sum;
    float mean;

    printf("Insira numeros:\n> ");
    scanf(" %d", &value);

    amount = 1;
    sum += value;

    while (value != 0){
        printf("> ");
        scanf(" %d", &value);

        amount++;
        sum += value;
    }

    mean = (float) sum/amount;

    printf("Soma: %d\nMedia: %.2f\n", sum, mean);
    return 0;
}