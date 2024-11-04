#include <stdio.h>
/*
Escreva uma função que recebe uma string e a converte para letras maiúsculas. Atenção: a string
poderá conter letras maiúsculas e símbolos.
*/

void string_to_upper_case(char* str){
    for (int i = 0; str[i] != 0; i++){
        if ( str[i] >= 65 && str[i] <= 90 ){
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int main(){
    char str[] = "O gabigol voltou a marcar dois gols ontem!";

    string_to_upper_case(str);

    for (int i = 0; str[i] != 0; i++){
        printf("%c", str[i]);
    }

    return 0;
}