#include <stdio.h>
/*
Escreva um programa que lê quatro números inteiros e informa o maior digitado.
*/

int main(){
    int a, b, c, d;
    printf("Insira os valores:\n> ");
    scanf(" %d %d %d %d", &a,&b,&c,&d);

    if (a > b && a > c && a > d){
        printf("O numero %d eh o maior\n", a);
    } else if (b > a && b > c && b > d){
        printf("O numero %d eh o maior\n", b);
    } else if (c > b && c > a && c > d){
        printf("O numero %d eh o maior\n", c);
    } else if (d > b && d > c && d > a){
        printf("O numero %d eh o maior\n", d);
    } else {
        printf("Existem numeros repetidos\n");
    }

    return 0;
}