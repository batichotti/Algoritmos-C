#include <stdio.h>
/*
Escreva um programa que lê um número inteiro e informa se o mesmo é par ou ímpar.
*/

int main(){
    int x;
    scanf(" %d", &x);
    if (x & 1) printf("impar");
    else printf("par");
    return 0;
}