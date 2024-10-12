/*
Escreva um programa que lê um float e informa, separadamente:
a. O número com 2 casas de precisão;
b. A parte inteira e a parte decimal;
c. Sua representação em notação científica (mantissa/expoente)**
**Verifique a documentação da função printf: http://www.cplusplus.com/reference/cstdio/printf/
*/
#include <stdio.h>

int main(){
    float number;
    printf("Insert the value for the float\n> ");
    scanf(" %f", &number);

    printf("\na.\n");
    printf("%.2f\n", number);
    printf("\nb.\n");
    printf("%f\n", number - (number - (int)number));
    printf("%f\n", number - (int)number);
    printf("\nc.\n");
    printf("%e\n", number);

    return 0;
}