#include <stdio.h>
#include <string.h>
/*
Escreva uma função que recebe uma string e imprime o número de ocorrências de cada letra da
tabela ASCII (26 possibilidades), bem como, seu percentual sobre o todo (desconsiderando
espaços). A contagem deve desconsiderar letras maiúsculas e minúsculas.
*/

int in(char* v, char elem){
    for (int y = 0; v[y] != 0; y++){
        if (v[y] == elem){
            return y;
        }
    }
    return -1;
}

void string_to_upper_case(char* str){
    for (int i = 0; str[i] != 0; i++){
        if ( str[i] >= 'a' && str[i] <= 'z' ){
            str[i] -= 32;
        }
    }
}

void string_count(const char* str){
    char str_copy[strlen(str)];
    int counter[strlen(str)];
    strcpy(str_copy, str);
    
    string_to_upper_case(str_copy);

    for (int i = 0; str[i] != 0; i++){  

    }
}

int main(){
    string_count("Em dezembro de oitenta e um");

    return 0;
}