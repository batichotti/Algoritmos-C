#include <stdio.h>
/*
Escreva um programa que, dado um número inteiro positivo, verifica se o mesmo é um Número
Perfeito. Um número perfeito é igual à soma de seus divisores positivos.
*/

int main(){
    int input, sum_of_divisors;
    printf("Insert a value:\n> ");
    scanf(" %d", &input);

    printf("Divisors of %d: ", input);
    sum_of_divisors = 0;
    for (int i = 1; i < input; i++){
        if ( input % i == 0 ){
            sum_of_divisors += i;
            printf(" %d ", i);
        }
    }
    
    printf("\n");
    if (sum_of_divisors == input){
        printf("Its a perfect number: %d == %d", input, sum_of_divisors);
    } else {
        printf("Its NOT a perfect number: %d != %d", input, sum_of_divisors);
    }
    
    return 0;
}