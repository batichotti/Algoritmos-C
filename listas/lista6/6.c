#include <stdio.h>
#include <string.h>
/*
Escreva uma função que conta e devolve o número de palavras em uma string. Considere que
poderá haver mais de um espaço entre as palavras, bem como, no início e final da string.
*/

int count_words(const char* str){
    int str_len = strlen(str);
    int words = 0;
    if ( str_len > 0 ){
      for (int i = 0; str[i] != 0; i++){
        if (str[i] == ' ') {
            words++;
        }
      }   
    }

    return words;
}

int count_words_plus(const char* str){
    int words = 0;
    if (str[0] != ' ' && str[0] != 0){ // (strlen(str) > 0)
        words++;
    } else {
        for (int i = 0; str[i+1] != 0; i++){
            if (str[i] == ' ' && str[i+1] != ' '){
                words++;
            }
        }
    }

    return words;
}

int main(){
    printf("%d", count_words_plus(" Eu to em   todo lugar"));
    return 0;
}