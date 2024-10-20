#include <stdio.h>
/*
Escreva um programa que lê um inteiro representando um ano e verifica se o mesmo é bissexto.
Para um ano ser bissexto (leap year), ele precisa:
a. Ser divisível por 4 e não divisível por 100, OU, ser divisível por 400
*/

int main(){
    int ano;
    printf("Insira o ano:\n> ");
    scanf(" %d", &ano);

    if (ano%4 == 0 && ano%100 != 0){
        printf("Bissexto\n");
    } else {
        printf("Nao bissexto\n");
    }

    return 0;
}