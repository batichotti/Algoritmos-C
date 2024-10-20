#include <stdio.h>

int main(){
    char string;

    printf("Insira um caractere:\n> ");
    scanf(" %c", &string);

    if ( (string >= 'a' && string <= 'z') || (string >= 'A' && string <= 'Z') ){
        if (string >= 'a' && string <= 'z'){
            string = string - 'a' + 'A';
        }
        
        printf("Upper case: %c\n", string);
    } else {
        printf("Not a letter\n");
    }
    
    return 0;
}