#include <stdio.h>
#include <string.h>
/*
Escreva uma função que imprime as palavras de maior e menor tamanhos em um array de n
strings de até len-1 letras.
*/

void print_strings_minmax(int n, int len, char list[n][len]){
    int min_pos = 0;
    int max_pos = 0;

    for (int i = 0; i < n; i++){
        if (strlen(list[max_pos]) < strlen(list[i])) {
            max_pos = i;
        } 
        if (strlen(list[min_pos]) > strlen(list[i])){
            min_pos = i;
        }
    }

    printf("Menor: ");
    for (int i = 0; i < n; i++){
        if (strlen(list[i]) == strlen(list[min_pos])){
            printf("%s ", list[i]);
        }
    }
    
    printf("\nMaior: ");
    for (int i = 0; i < n; i++){
        if (strlen(list[i]) == strlen(list[max_pos])){
            printf("%s ", list[i]);
        }
    }
    
}

int main(){
    char v[6][20] = {"Joh", "Mariane", "Jak", "Samuel", "Ada", "Michelangelo"};
    print_strings_minmax(6, 20, v);
    return 0;
}