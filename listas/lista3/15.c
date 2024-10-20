#include <stdio.h>
/*
Escreva um programa que, dado dois números inteiros positivos (A e B), imprime o MMC (Mínimo
Múltiplo Comum) entre ambos. O MMC é o menor número que resulta da multiplicação de A e B
por um número (não necessariamente igual para ambos). Dica: o mínimo múltiplo comum entre A e
B pode ser encontrado verificando se algum múltiplo do MAIOR(A, B) é divisível pelo MENOR(A,
B). Sempre há um MMC entre dois números quaisquer.
*/

int main(){
    int a, b, mmc, maior, menor;
    printf("Insira os valores:\n> ");
    scanf(" %d %d", &a, &b);

    if (a > b){
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = b;
    }
    
    {
        int i = 1;
        int escopo = maior;
        while (1){
            if (escopo % menor == 0){
                mmc = escopo;
                break;
            }
            i++;
            escopo += maior;
        }
    }

    printf("   > Minimo multiplo comum: %d", mmc);
    return 0;
}
