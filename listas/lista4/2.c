#include <stdio.h>
/*
Escreva um programa que imprime a tabela ASC com valores em decimal (%03d), hexadecimal
(%03X) e o caractere (%c). Imprima apenas os caracteres 33 ao 125, separados em 3 colunas
(cada uma conterá 31 elementos).
*/

int main(){
    printf("%03s %03s %03s %03s\n", "DEC", "OCT", "HEX", "CHR");
    for (int i = 33; i <= 126; i++){
        printf("%3d %3o %3X %2c\n", i, i, i, i);
    }
    return 0;
}