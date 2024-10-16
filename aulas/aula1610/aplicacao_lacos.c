#include <stdio.h>
//ler uma sequencia de inteiros até 0 quebrar a sequencia e mostre sua soma 

int main(){

    int valor;
    int soma = 0;

    printf("Insira valores e descubra sua soma! (0 para obter a soma)\n");

    printf("Informe seu valor:\n> ");
    scanf(" %d", &valor);


    while (valor != 0){
        soma = soma + valor;
        printf("\n> ");
        scanf(" %d", &valor);
    }

    printf("\nSoma: %d", soma);
    return 0;
}