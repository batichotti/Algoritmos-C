#include <stdio.h>
/*
Escreva um programa que imprime a tabela ASC com valores em decimal (formato "%03d"), octal
(formato "%03o"), hexadecimal (formato "%03X") e o caractere (formato "%02c"). Imprima apenas
os caracteres 33 ao 126
*/

int main(){
    printf("%03s %03s %03s %03s\n", "DEC", "OCT", "HEX", "CHR");
    for (int i = 33; i <= 126; i++){
        printf("%3d %3o %3X %2c\n", i, i, i, i);
    }
    return 0;
}