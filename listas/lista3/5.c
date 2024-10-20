#include <stdio.h>
/*
Escreva um programa que calcula a divisão inteira e o resto de dois números inteiros utilizando
somente o operador aritmético de subtração (-). O programa deve informar o quociente e o resto.
Não é permitido utilizar os operadores de divisão (/) e resto (%). Exemplo:
*/

int main(){
    int a, b, sum, resultado, resto, i;
    printf("Insira a & b para divisao inteira:\n> ");
    scanf(" %d %d", &a, &b);

    sum = a;
    i, resultado = 0;
    while (sum >= b){
        sum -= b;
        resultado++;
    }
    resto = sum;

    printf("%d / %d = %d\n%d %% %d = %d", a, b, resultado, a, b, resto);

    return 0;
}