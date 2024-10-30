#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Dai jiro su me chi metee";

    long length = strlen(str);
    char copy[25];
    strcpy(copy, str);
    int boolean = strcmp(str, copy);

    char new_str[length+1];
    strcat(str, "eeeeeeeeeeeeeeeeeeeeeee");

    return 0;
}