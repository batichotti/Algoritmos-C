/*
Escreva um programa que lê um valor em graus e o converte para radianos. Considere:
a. 1π rad = 3.141593 rad ⇒ 180 graus
OBS: crie uma constante para PI ⇒ const float PI = 3.141593
*/
#include <stdio.h>

int main(){
    const float PI = 3.141593;
    float degress, radians;

    printf("Input a degress value\n> ");
    scanf(" %f", &degress);

    radians = (degress*PI)/180;

    printf("Rad = %f\n", radians);
    return 0;
}