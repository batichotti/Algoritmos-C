/*
Escreva um programa que lê dois números inteiros (a e b) e informa:
a. Multiplicação
b. Divisão inteira (a dividido por b)
c. Divisão float (a dividido por b)
*/
#include <stdio.h>

int main(){
    int a, b;

    printf("Insert a\n> ");
    scanf(" %d", &a);

    printf("Insert b\n> ");
    scanf(" %d", &b);

    printf("Multply: %d\n", a*b);
    printf("Integer division: %d\n", a/b);
    printf("Float division: %f\n", (float)a/b);

    return 0;
}