#include <stdio.h>
/*
Escreva um programa que imprime a tabela ASC com valores em decimal (%03d), hexadecimal
(%03X) e o caractere (%c). Imprima apenas os caracteres 33 ao 125, separados em 3 colunas
(cada uma conterá 31 elementos).
*/

int main(){
    printf("%03s %03s %03s %03s\n", "DEC", "HEX", "CHR");
    for (int i = 33; i <= 64; i++){
        printf("%3d %3X %2c ", i, i, i);
        printf("%3d %3X %2c ", i+31, i+31, i+31);
        printf("%3d %3X %2c\n", i+62, i+62, i+62);
    }
    return 0;
}