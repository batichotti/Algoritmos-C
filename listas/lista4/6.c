#include <stdio.h>
/*
Escreva um programa que imprime um triângulo de caracteres '[]' com o número de linhas
informado.
*/

int main(){
    int high;
    printf("Insert the high:\n> ");
    scanf(" %d",&high);

    for (int i = 0; i <= high; i++){
        for (int j = 0; j < i; j++){
            printf("[]");
        }
        printf("\n");
    }
    return 0;
}