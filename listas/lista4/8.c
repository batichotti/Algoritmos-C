#include <stdio.h>
/*
Escreva um programa que imprime um triângulo centralizado de caracteres '[]'.
*/

int main(){
    int high, blanks;
    printf("Insert the high:\n> ");
    scanf(" %d",&high);

    blanks = high-1;

    for (int i = 0; i < high; i++){
        for (int j = 0; j < blanks; j++){
            printf("  ");
        }
        for (int k = 0; k < i; k++){
            printf("[ ] ");
        }
        printf("\n");
        blanks -= 1;
    }

    return 0;
}

   