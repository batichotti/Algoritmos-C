#include <stdio.h>
/*
Escreva um programa que, dado dois números inteiros positivos (A e B), imprime o MMC (Mínimo
Múltiplo Comum) entre ambos. O MMC é o menor número que resulta da multiplicação de A e B
por um número (não necessariamente igual para ambos). Dica: o mínimo múltiplo comum entre A e
B pode ser encontrado verificando se algum múltiplo do MAIOR(A, B) é divisível pelo MENOR(A,
B). Sempre há um MMC entre dois números quaisquer.
*/

int main(){
    int a, b, mmc, menor, mdc;
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

    if(a < 0 || b < 0){
        a *= -1;
    }

    mmc = (a*b)/mdc;
    printf("   > Minimo multiplo comum: %d", mmc);
    return 0;
}
