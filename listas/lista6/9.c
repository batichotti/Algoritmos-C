#include <stdio.h>
#include <string.h>
/*
Escreva uma função que recebe uma string e imprime o número de ocorrências de cada letra da
tabela ASCII (26 possibilidades), bem como, seu percentual sobre o todo (desconsiderando
espaços). A contagem deve desconsiderar letras maiúsculas e minúsculas.
*/

int where_in_vetor(char* vetor, char elem){

    for (int i = 0; vetor[i] != 0; i++){
        if (vetor[i] == elem){
            return i;
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
    int counter[26] = {0};
    char alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X', 'Y', 'Z', '\0'};
    
    char copy[strlen(str)];
    strcpy(copy, str);
    string_to_upper_case(copy);
    int total_letras = 0;

    for (int i = 0; copy[i] != 0; i++){
        int idx = where_in_vetor(alfabeto, copy[i]);
        if ( idx != -1 ) {
            counter[idx]++;
            total_letras++;
        }
    }

    for (int i = 0; alfabeto[i] != 0; i++){
        printf("%c - %d = %.2f%\n", alfabeto[i], counter[i], ((float) counter[i]/total_letras)*100);
    }
    
}

int main(){
    string_count("Em dezembro de oitenta e um, Botou os Ingleses na Roda");

    return 0;
}