#include <stdio.h>
/*
Escreva uma função que verifica se uma string é um palíndromo. Caso positivo, a função deve
cortar a string, removendo a parte "espelhada". Dicas: para cortar a string, basta colocar um
caractere NULO ('\0' ou 0) na posição desejada; se a string for um palíndromo, será cortada pela
metade, ou metade+1, caso tenha comprimento ímpar.
*/

char remove_palindrome(char* str) {
    int length;
    for (length = 0; str[length] != 0; length++){}
    length--;

    char boolean = '1';

    for (int i = 0; str[i] != 0; i++){
        if ( str[i] != str[length-i] ){
            boolean = '0';
            break;
        }
    }
    
    length++;//quantidade de letras
    if (boolean == '1'){
        if (length % 2 == 0){ // se é par
            str[(length/2)] = 0;
        } else {
            str[(length/2)+1] = 0;
        }
        
    }
    
}

int main() {

    char str[] = "subinoonibus";
    remove_palindrome(str);

    printf("%s", str);
    return 0;
}