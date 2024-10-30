#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Dai jiro su me chi metee";

    long length = strlen(str);
    char copy[150];
    strcpy(copy, str);
    int boolean = strcmp(str, copy); // se a da esquerda for menor retorna negativo, se a da direita for maior (vem antes) retorna positivo

    char new_str[length+1];
    strcat(new_str, "eeeeeeeeeeeeeeeeeeeeeee");

    sprintf(copy, "Teto %.2f aaaa", 7.31415926535); //converte coisas

    return 0;
}