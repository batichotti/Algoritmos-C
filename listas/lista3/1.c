#include <stdio.h>
/*
Escreva um programa que faz a leitura de um valor N e imprime N linhas de texto, exibindo o
número da linha corrente em contagem decrescente.
*/

int main(){
    int i;
    printf("Insiria i:\n> ");
    scanf(" %d", &i);

    while (i > 0){
        printf("Line %d\n", i);
        i--;
    }

    return 0;
}