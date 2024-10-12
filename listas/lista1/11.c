/*
Escreva um programa que lê um número de dias e informa a quantidade correspondente em:
anos + semanas + dias.
a. Considere:
i. Ano = 365 dias
ii. Semana = 7 dias
Exemplo:
Dias: 427 = 1 ano(s), 8 semana(s) e 6 dia(s)
*/
#include <stdio.h>

int main(){
    int dias, anos, semanas, resto;
    printf("Insert a value for days\n> ");
    scanf(" %d", &dias);

    anos = dias/365;
    semanas = (dias-365*anos)/7;
    resto = dias - 365*anos - 7*semanas;

    printf(">> %d years, %d weeks and %d days\n", anos, semanas, resto);

    return 0;
}