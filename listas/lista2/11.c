#include <stdio.h>
/*
Escreva um programa que lê um caractere e informa:
a. Se é letra e, neste caso, também informa se é vogal ou consoante;
b. Se é número;
c. Se é símbolo (ASCII 33 ao 126, exceto números e símbolos).
*/

int main(){
    char string;

    printf("Insira um caractere:\n> ");
    scanf(" %c", &string);

    if ((string >= 'a' && string <= 'z') || (string >= 'A' && string <= 'Z')){
        printf("Is a letter\n");
        if (string == 'a' || string == 'A' || string == 'e' || string == 'E' || string == 'i' || string == 'I' || string == 'o' || string == 'O' || string == 'u' || string == 'U'){
            printf("And its a vowel\n");
        } else {
            printf("And its a consonant\n");
        }
        
    } else if (string >= 0 && string <= '9'){
        printf("Its a number\n");
    } else if (string >= 33 && string <= 126){
        printf("Its a symbol\n");
    } else {
        printf("Thats something else");
    }
    return 0;
}