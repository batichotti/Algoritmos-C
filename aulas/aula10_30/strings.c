#include <stdio.h>

int length(char* array){
    int i;
    for (i = 0; array[i] != 0; i++){}
    return i;
}

void print_str(char* str){
    for (int i = 0; str[i] != 0; i++){
        printf("%c-", str[i]);
    }
    printf("\b \n");
}

int main(){
    char str[] = "Computaria"; //10 + \0
    char another_str[10]; //9 letras + \0
    //veteres de caracteres não tem \0 no final, string tem o \0
    char string_burra[] = {'O', 'i', 0};

    printf("%s\n", str);
    printf("%s\n", string_burra);

    // for (int i = 0; str[i] != 0; i++){
    //     if (str[i+1] == 0){
    //         printf("%c", str[i]); 
    //     } else {
    //         printf("%c-", str[i]);
    //     }
    // }
    // printf("\n");

    printf("%d", length(str));

    return 0;
}