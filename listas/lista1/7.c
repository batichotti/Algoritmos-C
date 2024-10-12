/*
Modifique o programa anterior, letra (b), para que seja possível informar os 3 pesos, além dos 3
valores.
*/
#include <stdio.h>

int main(){
    int a, b, c;
    float w1, w2, w3;
    float mean_arithmetic, mean_weighted;

    printf("Insert this 3 values (a, b, c)\n> ");
    scanf(" %d %d %d", &a, &b, &c);
    
    printf("Insert this 3 weights (a, b, c) without divide by 100, junt the percent\n> ");
    scanf(" %f %f %f", &w1, &w2, &w3);

    mean_arithmetic = (float) (a+b+c)/3;
    mean_weighted = (float) (a*(w1/100) + b*(w2/100) + c*(w3/100));

    printf("Arithmetic: %f\n", mean_arithmetic);
    printf("Weighted: %f\n", mean_weighted);

    return 0;
}