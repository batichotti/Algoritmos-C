#include <stdio.h>
#include <string.h>
/*
Escreva uma função que recebe o endereço de duas strings e calcula a distância de Hamming
entre ambas. A distância de Hamming corresponde à quantidade de caracteres diferentes em
posições correspondentes nas duas strings. Considere que as strings terão o mesmo comprimento,
mas certifique-se de que o código não acessa posições inválidas para strings de tamanhos
distintos.
*/
int get_hamming_distance(const char* str1, const char* str2){
    int hamming = 0;
    if (strlen(str1) != strlen(str2)){
        printf("Strings with different sizes");
        return -1;
    }

    for (int i = 0; *(str1+i) != 0; i++){
        if (*(str1+i) != *(str2+i)){
            hamming++;
        }
    }

    return hamming;
}

int main(){
    printf("%d", get_hamming_distance("banana", "cabana"));
    return 0;
}