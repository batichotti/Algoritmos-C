#include <stdio.h>
#include <string.h>
/*
Escreva uma função que recebe o endereço de uma string. A função deve concatenar, ao final da
string original, uma barra vertical, seguida do conteúdo da string de forma invertida. Considere que
o vetor possui comprimento suficiente para a adição dos novos caracteres. Você não deve utilizar o
operador de índice [ ] para acessar os caracteres da string.
*/

void make_mirrored(char* str){
    int i;
    for (i = 0; *(str+i) != 0; i++){
        printf("%c", *(str+i));
    }
    printf("|");
    for (i = i; i > 0; i--){
        printf("%c", *(str+i));
    }

}

int main(){
    char name[40] = "John Doe";
    make_mirrored(name);
    printf("%s\n", name);
    return 0;
}