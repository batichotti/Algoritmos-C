#include <stdio.h>
/*
Escreva um programa que imprime um triângulo invertido de caracteres '[]', alinhado à direita, com
o número de linhas informado.
*/

int main(){
    int high;
    printf("Insert the high:\n> ");
    scanf(" %d",&high);

    for (int i = 0; i <= high; i++){
        for (int j = 0; j < (high-i); j++){
            printf("  ");
        }
        for (int k = 0; k < i; k++){
            printf("[]");
        }
        printf("\n");
    }
    return 0;
}