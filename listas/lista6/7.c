#include <stdio.h>
#include <string.h>
/*
Escreva uma função que recebe uma string composta de várias palavras. A função deve modificar
a letra inicial de cada palavra para maiúscula e, as demais, para minúsculas. Considere que
sempre haverá ao menos um espaço entre cada palavra.
*/

void string_capitalize(char* str){
    if (strlen(str) > 0){
        if (str[0] >= 'a' && str[0] <= 'z'){
            str[0] -= 32;
        }
        
        for (int i = 0; i < str[i+1] != 0; i++){
            if ( (str[i+1] >= 'a' && str[i+1] <= 'z') && str[i] == ' ' ){
                str[i+1] -= 32;
            } else if( (str[i+1] >= 'A' && str[i+1] <= 'Z') && str[i] != ' ' ){
                str[i+1] += 32;
            }
        }
    }
}

int main(){
    char str[] = "suArez  E lUizIto";
    string_capitalize(str);
    printf("%s", str);
    return 0;
}