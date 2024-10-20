#include <stdio.h>
/*
Escreva um programa que lê um número de 5 dígitos e imprime cada dígito separado. Para
desmontar um número, podemos utilizar a notação posicional, isto é, o valor de cada dígito em
relação a uma potência de 10. Observe o exemplo:
O processo ocorre como uma repetição de dois passos:
a. Calcular o resto da divisão do número por 10 para obtermos o dígito da unidade.
b. Atualizar o número, dividindo-o por 10. Isso fará o número perder um dígito.
*/

int main(){
    int num, dm, um, c, d, u;
    printf("Insira um numero de 5 digitos:\n >");
    scanf(" %d", &num);

    if (num > 99999 || num < 10000){
        printf("Numero invalido");
        return 0;
    }

    u = num%10;
    num /= 10;
    d = num%10;
    num /= 10;
    c = num%10;
    num /= 10;
    um = num%10;
    num /= 10;
    dm = num;

    printf("Unidade: %d\n", u);
    printf("Dezena: %d\n", d);
    printf("Centena: %d\n", c);
    printf("Unidade de milhar: %d\n", um);
    printf("Dezena de milhar: %d\n", dm);

    return 0;
}