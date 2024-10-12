/*
Escreva um programa que imprime a tabuada de um número informado via terminal. Dica:
lembre-se que você pode alinhar os valor na saída com %2d (dois dígitos, alinhados à direita)
*/
#include <stdio.h>

int main(){
    int number;
    printf("Insert the number to see the multiplication table\n> ");
    scanf(" %d", &number);

    printf("-------------------------------\n");
    printf("%d x 1 = %2d\n", number, number*1);
    printf("%d x 2 = %2d\n", number, number*2);
    printf("%d x 3 = %2d\n", number, number*3);
    printf("%d x 4 = %2d\n", number, number*4);
    printf("%d x 5 = %2d\n", number, number*5);
    printf("%d x 6 = %2d\n", number, number*6);
    printf("%d x 7 = %2d\n", number, number*7);
    printf("%d x 8 = %2d\n", number, number*8);
    printf("%d x 9 = %2d\n", number, number*9);
    printf("%d x 10= %2d\n", number, number*10);
    printf("-------------------------------\n");

    return 0;
}