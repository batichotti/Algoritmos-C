#include <stdio.h>
/*
Escreva um programa que faz a leitura de três notas escolares float - n1, n2 e n3 - no intervalo
[0..10]. Após, deve calcular e informar a média aritmética simples das três notas, bem como, o
conceito que o aluno obteve com base na média, segundo estes critérios:
a. Conceito A, se média no intervalo [8,5..10]
b. Conceito B, se média no intervalo [7,0..8,5[
c. Conceito C, se média no intervalo [5,5..7,0[
d. Conceito F, se média no intervalo [0..5,5[
*/

int main(){
    float n1, n2, n3, media;

    printf("Insira as notas:\n> ");
    scanf(" %f %f %f", &n1, &n2, &n3);

    if (n1 < 0 || n2 < 0 || n3 < 0 || n1 > 10 || n2 > 10 || n3 > 10){
        printf("Entrada(s) invalida(s)\n");
    } else {
        media = (n1+n2+n3)/3;

        if (media < 5.5){
            printf("Conceito F\n");
        } else if (media < 7){
            printf("Conceito C\n");
        } else if (media < 8.5){
            printf("Conceito B\n");
        } else {
            printf("Conceito A\n");
        }
    }

    return 0;
}