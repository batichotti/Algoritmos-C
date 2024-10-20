#include <stdio.h>
/*
Escreva um programa que, dado um número inteiro positivo, o imprime em notação binária. O
processo de obtenção é similar à extrair os dígitos de um número: divisões sucessivas por 2, até
que o quociente seja 0 (zero). A cada divisão, o resto indica um dígito binário. Entretanto, assim
como no algoritmo de obter os dígitos, os dígitos binários estarão em ordem inversa. Logo, será
preciso remontar o número binário (na ordem correta) em uma variável inteira.
*/

int main(){
    int dec, bin, i;
    printf("Insert a decimal:\n> ");
    scanf(" %d", &dec);

    i = 1;
    bin = 0;
    while (dec / 2 != 0){
        bin += i * (dec%2);
        i *= 10;
        dec /= 2;
    }

    bin += i * (dec%2);

    printf(" > bin: %d", bin);
    return 0;
}