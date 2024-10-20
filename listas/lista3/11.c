#include <stdio.h>
/*
Escreva um programa que verifica se um número inteiro é um palíndromo, isto é, se representa o
mesmo valor quando invertido. Note que será necessário desmontar o número e remontá-lo
invertido. Para tanto, lembre-se de que utilizamos a base 10, o que torna possível “mover” um
número para esquerda multiplicando-o por 10.
*/

int main(){
    int value, original, invertido;

    printf("Insira um valor:\n> ");
    scanf(" %d", &value);

    original = value;

    while (value > 0) {
        int digito = value % 10;
        invertido = invertido * 10 + digito;
        value /= 10;
    }

    if (invertido == original){
        printf("%d == %d\nPalindrome!", original, invertido);
    } else {
        printf("%d != %d\nNot Palindrome!", original, invertido);
    }
    
    return 0;
}