#include <stdio.h>
#include <string.h>
/*
A função strcmp(str1, str2) compara duas strings alfabeticamente. Ela devolve:
a. res < 0 se str1 < str2 << str1 vem antes de str2
b. res = 0 se str1 = str2
c. res > 0 se str1 > st2 << str1 vem depois de str2
Escreva uma função que compara duas strings independente do caso (maiúsculo ou minúsculo).
Ela deve retornar os mesmos tipos de valores que strcmp(). Dica: com a função do exercício
anterior, você poderá passar ambas strings para maiúsculas e, então, compará-las com strcmp().
OBS: você não deve modificar as strings s1 e s2 ("const" garante isso).
*/

void string_to_upper_case(char* str){
    for (int i = 0; str[i] != 0; i++){
        if ( str[i] >= 97 && str[i] <= 122 ){
            str[i] = str[i] - 32;
        }
    }
}

void duplica_string(char* destino, char* objeto){
    
    int len_1;
    int len_2;
    for (int len_1 = 0; objeto[len_1] != 0; len_1++){}
    for (int len_2 = 0; destino[len_2] != 0; len_2++){}
    
    if (len_1 != len_2) {
        printf("Vetores de tamanhos diferentes, tarefa abortada.\n");
    } else {
        for (int i = 0; objeto[i] != 0; i++){
            destino[i] = objeto[i];
        }
    }
}


int strcmp_plus(const char* str1, const char* str2){
    int i;
    for (int i = 0; str1[i] != 0; i++){}
    int j;
    for (int j = 0; str1[j] != 0; j++){}
    
    char str1_copy[i];
    char str2_copy[j];
    duplica_string(str1_copy, str1);
    duplica_string(str2_copy, str2);

    string_to_upper_case(str1_copy);
    string_to_upper_case(str2_copy);

    return strcmp(str1_copy, str2_copy);
}

int main(){
    printf("%d", strcmp_plus("JOanna", "joanna"));
    return 0;
}