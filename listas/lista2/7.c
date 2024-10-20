#include <stdio.h>
/*
Escreva um programa que lê três números inteiros e os escreve em ordem crescente.
*/

int main(){
    int a, b, c;

    printf("Insira os valores:\n> ");
    scanf(" %d %d %d", &a, &b, &c);

    if (a > b && a > c){
        printf("%d, ", a);
        if(b > c){
            printf("%d, %d\n", b, c);
        } else {
            printf("%d, %d\n", c, b);
        }
    } else if (b > c){
        printf("%d, ", b);
        if(a > c){
            printf("%d, %d\n", a, c);
        } else {
            printf("%d, %d\n", c, a);
        }
    } else {
        printf("%d, ", c);
        if(a > b){
            printf("%d, %d\n", a, b);
        } else {
            printf("%d, %d\n", b, a);
        }
    }

    return 0;
}