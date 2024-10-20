#include <stdio.h>
/*
Escreva um programa que lê um caractere da entrada. Se não for letra, informa. Se for letra,
verifica se é maiúscula (e passa para maiúscula se necessário). Ao final, deve informar a letra
digitada em maiúsculo.
*/

int main(){
    char string;

    printf("Insira um caractere:\n> ");
    scanf(" %c", &string);

    if ( (string >= 'a' && string <= 'z') || (string >= 'A' && string <= 'Z') ){
        if (string >= 'a' && string <= 'z'){
            string = string - 'a' + 'A';
        }
        
        printf("Upper case: %c\n", string);
    } else {
        printf("Not a letter\n");
    }
    
    return 0;
}