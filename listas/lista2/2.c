#include <stdio.h>
/*
Escreva um programa que lê um número de 0 a 9 e o imprime por extenso. O programa deve
validar a entrada (0 <= x <= 9) e informar erro, caso ocorra.
*/
int main(){
    int num;
    printf("Insira um numero:\n> ");
    scanf(" %d", &num);

    if (num < 0 || num > 9){
        printf("Numero invalido, tente novamente");
    } else {
        if(num == 0){
            printf("Zero");   
        } else if(num == 1){
            printf("Um");   
        } else if(num == 2){
            printf("Dois");   
        } else if(num == 3){
            printf("Tres");   
        } else if(num == 4){
            printf("Quatro");   
        } else if(num == 5){
            printf("Cinco");   
        } else if(num == 6){
            printf("Seis");   
        } else if(num == 7){
            printf("Sete");   
        } else if(num == 8){
            printf("Oito");   
        } else {
            printf("Nove");   
        }
    }
    return 0;
}