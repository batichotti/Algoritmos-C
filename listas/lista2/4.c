#include <stdio.h>

int main(){
    int ano;
    printf("Insira o ano:\n> ");
    scanf(" %d", &ano);

    if (ano%4 == 0 && ano%100 != 0){
        printf("Bissexto\n");
    } else {
        printf("Nao bissexto\n");
    }

    return 0;
}