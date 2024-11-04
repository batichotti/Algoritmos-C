#include <stdio.h>
/*
Escreva uma função que recebe uma string como parâmetro e a imprime na tela, com cada
caractere separado por um espaço. Você não pode utilizar strlen().
*/

void print_string(char* str){
    for (int i = 0; str[i] != '\0'; i++){
        printf("%c ", str[i]);
    }
}

int main(){
    char str[] = "O gabigol voltou a marcar dois gols ontem!";

    print_string(str);

    return 0;
}