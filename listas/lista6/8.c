#include <stdio.h>
/*
Escreva uma função que implementa um comportamento similar à strcmp(). Entretanto, você não
deve utilizar strcmp() em sua implementação.
*/

int string_compare(const char* str1, const char* str2){
    int res = 0;

    for (int i = 0; str1[i] != 0 && str2[i] != 0; i++){
        if (str1[i] < str2[i]){
            res = -1;
            break;
        } else if (str1[i] > str2[i]) {
            res = 1;
            break;
        }
    }

    return res;
}

int main(){

    printf("%d", string_compare("Aa", "aAa"));

    return 0;
}