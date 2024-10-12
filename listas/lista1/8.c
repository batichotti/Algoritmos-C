/*
Escreva um programa que lê dois números inteiros (a e b) e informa:
a. Resto (utilizado o operador %)
b. Resto (sem utilizar o operador %)
i. Dica: Faça a divisão “no papel” e observe quais outras operações podem ser
utilizadas para obter o resto.
*/
#include <stdio.h>

int main(){
    int a, b;
    printf("Insert values for a and b\n> ");
    scanf(" %d %d", &a, &b);
    
    printf("a.\n");
    printf("With the operator: %d\n", a%b);

    printf("b.\n");
    printf("Without the operator: %d\n", a - (a/b)*b);

    return 0;
}