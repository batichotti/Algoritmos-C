#include <stdio.h>
/*
Escreva um programa que imprime uma caixa de caracteres '[]' com as dimensões informadas. O
ler as dimensões da caixa (largura e altura).
*/

int main(){
    int length, high;
    printf("Insert length and high:\n> ");
    scanf(" %d %d", &length, &high);

    for (int i = 0; i < high; i++){
        for (int j = 0; j < length; j++){
            printf("[]");
        }
        printf("\n");
    }
    
    return 0;
}