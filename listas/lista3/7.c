#include <stdio.h>
/*Escreva um programa que faz a leitura de vários números inteiros (um a cada iteração do laço), até
que se digite zero. O programa deve imprimir o maior e o menor entre os números digitados
*/


int main(){
    int value, max, min;

    printf("Insira numeros:\n> ");
    scanf(" %d", &value);

    max, min = value;

    while (value != 0){
        if (max < value){
            max = value;
        }
        if (min > value){
            min = value;
        }

        printf("> ");
        scanf(" %d", &value);
    }

    printf("Max: %d\nMin: %d\n", max, min);
    return 0;
}