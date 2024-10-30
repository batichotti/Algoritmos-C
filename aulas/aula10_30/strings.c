#include <stdio.h>

int main(){
    char str[] = "Computaria"; //10 + \0
    char another_str[10]; //9 letras + \0
    //veteres de caracteres não tem \0 no final, string tem o \0
    char string_burra[] = {'O', 'i', 0};

    printf("%s\n", str);
    printf("%s\n", string_burra);

    return 0;
}