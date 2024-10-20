#include <stdio.h>
/*
Escreva um programa que faz a leitura de um número e exibe os dígitos que o formam, enquanto
for diferente de 0. Dica: use o quociente (divisão inteira) e o resto (%) por 10 para desmontar o
número. O exemplo abaixo demonstra o processo usando as variáveis x (número) e d (dígito).
Observe-o e monte uma solução com laço que permita desmontar números inteiros de qualquer
quantidade de dígitos.
*/

int main(){
    int num, x;

    printf("Insira um valor:\n> ");
    scanf(" %d", &num);

    while (num > 0) {
        x = num % 10;
        printf("%d\n", x);
        num /= 10;
    }
    return 0;
}