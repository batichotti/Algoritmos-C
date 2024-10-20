#include <stdio.h>
/*
A série de Fibonacci é 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Os dois primeiros termos são iguais a 1 e, a
partir do terceiro, o termo é dado pela soma dos dois termos anteriores. Dado um número n≥3,
exiba o n-ésimo termo da série de Fibonacci.
*/

int main(){
    int atual, anterior, soma, n;

    printf("Insira um numero maior que 2:\n> ");
    scanf(" %d", &n);

    if (n <= 2){
        printf("Eu falei que nao vale, tanso\n");
        return 0;
    }

    atual, anterior = 1;
    for (int i = 0; i < n; i++){
        soma = atual + anterior;
        anterior = atual;
        atual = soma;
    }

    printf("%d° termo: %d\n", n, atual);
    return 0;
}