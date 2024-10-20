#include <stdio.h>
/*
Escreva um programa que verifica se um número inteiro é primo, isto é, possui divisão exata
somente pelo próprio número ou por 1.
*/

int main(){
    int value, is_primo;

    printf("Insira um valor:\n> ");
    scanf(" %d", &value);

    is_primo = 1;
    for (int i = 2; i < value/2; i++){
        int resto = value % i;
        if (resto == 0){
            is_primo = 0;
            break;
        }
    }

    if (is_primo){
        printf("Resposta: primo\n");
    } else {
        printf("Resposta: nao primo");
    }

    return 0;
}