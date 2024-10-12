/*
Escreva um programa que lê três números inteiros (a, b e c) e informa:
a. A média aritmética simples dos três valores.
b. A média ponderada dos três valores, considerando como pesos 10% (a), 50% (b) e 40% (c)
*/
#include <stdio.h>

int main(){
    int a, b, c;
    float mean_arithmetic, mean_weighted;

    printf("Insert this 3 values (a, b, c)\n> ");
    scanf(" %d %d %d", &a, &b, &c);

    mean_arithmetic = (float) (a+b+c)/3;
    mean_weighted = (float) (a*0.1 + b*0.5 + c*0.4);

    printf("Arithmetic: %f\n", mean_arithmetic);
    printf("Weighted: %f\n", mean_weighted);

    return 0;
}