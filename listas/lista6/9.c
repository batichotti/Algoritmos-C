#include <stdio.h>
#include <string.h>
/*
Escreva uma função que recebe uma string e imprime o número de ocorrências de cada letra da
tabela ASCII (26 possibilidades), bem como, seu percentual sobre o todo (desconsiderando
espaços). A contagem deve desconsiderar letras maiúsculas e minúsculas.
*/

void string_to_upper_case(char* str){
    for (int i = 0; str[i] != 0; i++){
        if ( str[i] >= 97 && str[i] <= 122 ){
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

void string_count(const char* str){
    char str_copy[strlen(str)];
    int counter[strlen(str)];
    strcpy(str_copy, str);
    
    string_to_upper_case(str_copy);

    for (int i = 0; str[i] != 0; i++){
            for (int j = 0; j < strlen(str); j++){
                if (counter[j] == str_copy[i]){
                       
                }   
            }   
    }
}

int main(){

    return 0;
}