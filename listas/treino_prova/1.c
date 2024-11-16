#include <stdio.h>
/*
Checar se uma string é um palindromo
*/

char is_palindrome(char* str) {
    int length;
    for (length = 0; str[length] != 0; length++){}
    length--; // tira o \0 da conta

    char boolean = '1';

    for (int i = 0; str[i] != 0; i++){
        if ( str[i] != str[length-i] ){
            boolean = '0';
            break;
        }
    }
    
    return boolean;
}

int main() {

    char str[] = "subinoonibus";

    printf("%c", is_palindrome(str));
    return 0;
}