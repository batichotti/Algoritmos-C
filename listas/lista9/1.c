#include <stdio.h>
/*
Escreva um programa em C que declara três variáveis (char, int e double) e imprime seus
endereços.
*/

int main(){
    int inteiro = 9;
    char caractere = 'A';
    double duplo = 10;

    printf("%p\n", &inteiro);
    printf("%p\n", &caractere);
    printf("%p\n", &duplo);

    return 0;
}