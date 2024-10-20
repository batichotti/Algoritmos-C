#include <stdio.h>
/*
Escreva um programa que, dado um número inteiro (positivo ou negativo), troca o último dígito pelo
primeiro. OBS: não basta imprimir o número dessa forma, é preciso inverter o número em uma
variável int.
*/

int main(){
    int value, new_value, length, antigo_menor, antigo_maior, tira_maior;
    printf("Insira um número:\n> ");
    scanf(" %d", &value);

    if (value < 0){
        new_value = value * -1;
    } else {
        new_value = value;
    }

    if (value < 10) {
        printf(" > %d", value);
        return 0;
    }
    
    
    length = 0;

    // pega os digitos mais e menos significativos
    while (new_value > 0){
        if (length == 0){
            antigo_menor = new_value%10;
        }
        length += 1;
        antigo_maior = new_value%10;
        new_value /= 10;
    }

    // pega 10^(length-1) para tirar o digito maior do numero
    tira_maior = 1;
    for (int i = 1; i < length; i++){
        tira_maior *= 10;
    }
    
    new_value = value;
    new_value = new_value%(tira_maior);
    new_value /= 10;
    new_value = new_value*10 + antigo_maior;

    for (int i = 1; i < length; i++){
        antigo_menor *= 10;
    }
    new_value += antigo_menor;

    if (value < 0){
        new_value *= -1;
    }

    printf(" > %d", new_value);
    return 0;
}