#include <stdio.h>
/*
Escreva um programa que lê um número x do terminal e informa (imprimr) seu valor absoluto |x|,
isto é:
a. |x| = x, se x > 0
b. |x| = -x, se x < 0
*/
int main(){
    int x;

    printf("Insira um numero:\n> ");
    scanf(" %d", &x);

    if (x < 0) return printf("%d", x*(-1));
    else printf("%d", x);

    return 0;
}