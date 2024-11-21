#include <stdio.h>
#include <string.h>
/*
Escreva uma função que informa, com 1 (true) ou 0 (false), se uma string está contida em outra.
*/

int find_substring(const char* string, const char* substring){
    int substring_len = strlen(substring);
    int string_len = strlen(string);

    if (substring_len < string_len) {
        for (int i = 0; i < string_len - substring_len + 1; i++){
            int flag = 1;
            for (int j = 0; j < substring_len; j++){
                if (string[i+j]!= substring[j]){
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                return 1;
            }
        }
    }

    return 0;
}

int main(){

    printf("%d\n", find_substring("Em dezembro de oitenta e um", "dezembro"));
    printf("%d\n", find_substring("Em dezembro de oitenta e um", "spiff"));
    printf("%d\n", find_substring("Em dezembro de oitenta e um", " e um"));
    printf("%d\n", find_substring("Em dezembro de oitenta e um", "Haroldo"));

    return 0;
}