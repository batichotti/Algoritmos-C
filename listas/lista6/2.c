#include <stdio.h>
#include <string.h>
/*
Escreva uma função que recebe uma string e a imprime ao contrário (da direita para esquerda).
Faça duas versões da função: (1) utilizando strlen() e (2) não utilizando a função.
*/

void print_string_reversed(char* str){
    //VERSAO SEM STRLEN
    int i;
    for (i = 0; str[i] != '\0'; i++){}
    for (int j = i; j > 0; j--){
        printf("%c", str[j]);
    }
}

void print_string_reversed2(char* str){
    //VERSAO COM STRLEN
    int len = strlen(str);
    for (int i = len; i > 0; i--){
        printf("%c", str[i]);
    }
}

int main(){
    char str[] = "O gabigol voltou a marcar dois gols ontem!";

    print_string_reversed(str);

    printf("\n");

    print_string_reversed2(str);

    return 0;
}