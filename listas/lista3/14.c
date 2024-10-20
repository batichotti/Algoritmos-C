#include <stdio.h>
/*
Escreva um programa que, dado dois números inteiros positivos (A e B), imprime o MDC (Máximo
Divisor Comum) entre ambos. O MDC é o maior número que divide A e B (divisão exata, de resto
zero). Dica: o máximo divisor comum entre A e B está, necessariamente, entre 2 e o menor entre A
e B, isto é, MENOR(A, B). Se você não encontrar um divisor comum entre A e B, então MDC = 1.
*/

int main(){
    int a, b, mdc, menor;
    printf("Insira os valores:\n> ");
    scanf(" %d %d", &a, &b);

    if (a > b){
        menor = b;
    } else {
        menor = a;
    }
    mdc = 1;

    for (int i = 2; i < menor; i++){
        if (a % i == 0 && b % i == 0){
            mdc = i;
        }
    }

    printf("   > Maximo divisor comum: %d", mdc);
    return 0;
}
