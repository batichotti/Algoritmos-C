#include <stdio.h>
/*
Escreva um programa que lê um inteiro de até 4 dígitos (positivo ou negativo) e o imprime por
extenso. OBS: para extrair os dígitos do número, utilize resto por 10 (para obter a unidade) e
divisão por 10 (para remover a unidade).
*/

int main(){

    int num, u, d, c, m;

    printf("Insira um valor de ate 4 digitos:\n> ");
    scanf(" %d", &num);

    if (num > 9999){
        printf("Numero invalido\n");
        return 0;
    }
    
    if (num < 0){
        printf("Menos ");
        num = num*(-1);
    }

    if(num >= 1000){
        u = num%10;
        num /= 10;
        d = num%10;
        num /= 10;
        c = num%10;
        num /= 10;
        m = num;
    } else if (num >= 100) {
        u = num%10;
        num /= 10;
        d = num%10;
        num /= 10;
        c = num;
        m = -1;
    } else if (num >= 10){
        u = num%10;
        num /= 10;
        d = num;
        c = -1;
        m = -1;
    } else {
        u = num;
        d = -1;
        c = -1;
        m = -1;
    }

    if(m != -1){
        if(m == 1){
            printf("Um");   
        } else if(m == 2){
            printf("Dois");   
        } else if(m == 3){
            printf("Tres");   
        } else if(m == 4){
            printf("Quatro");   
        } else if(m == 5){
            printf("Cinco");   
        } else if(m == 6){
            printf("Seis");   
        } else if(m == 7){
            printf("Sete");   
        } else if(m == 8){
            printf("Oito");   
        } else {
            printf("Nove");
        }

        printf(" Mil");
    }

    if(c > 0){
        if (m > 0) {
            printf(" ");
        }

        if(c == 1){
            printf(" Cento");
        } else if(c == 2){
            printf(" Duzentos");   
        } else if(c == 3){
            printf(" Trezentos");   
        } else if(c == 4){
            printf(" Quatrocentos");   
        } else if(c == 5){
            printf(" Quinhentos");   
        } else if(c == 6){
            printf(" Seiscentos");   
        } else if(c == 7){
            printf(" Setecentos");   
        } else if(c == 8){
            printf(" Oitocentos");   
        } else {
            printf(" Novecentos");
        }
    }

    if (d > 0) {
        if (m > 0 || c > 0){
            printf(" e ");
        }
        if(d == 1){
            
            if (u == 0){
                printf("Dez");
            } if(u == 1){
                printf("Onze");   
            } else if(u == 2){
                printf("Doze");   
            } else if(u == 3){
                printf("Treze");   
            } else if(u == 4){
                printf("Quatorze");   
            } else if(u == 5){
                printf("Quinze");   
            } else if(u == 6){
                printf("Dezesseis");   
            } else if(u == 7){
                printf("Dezesete");   
            } else if(u == 8){
                printf("Dezeito");   
            } else {
                printf("Dezenove");
            }


        } else if(d == 2){
            printf("Vinte");
        } else if(d == 3){
            printf("Trinta");   
        } else if(d == 4){
            printf("Quarenta");   
        } else if(d == 5){
            printf("Cinquenta");   
        } else if(d == 6){
            printf("Sessenta");   
        } else if(d == 7){
            printf("Setenta");   
        } else if(d == 8){
            printf("Oitenta");   
        } else {
            printf("Noventa");
        }
    }

    if (u > 0){ 

        if(d > 1){
            printf(" e ");
        }

        if(u == 1){
            printf("Um");
        } else if(u == 2){
            printf("Dois");   
        } else if(u == 3){
            printf("Tres");   
        } else if(u == 4){
            printf("Quatro");   
        } else if(u == 5){
            printf("Cinco");   
        } else if(u == 6){
            printf("Seis");   
        } else if(u == 7){
            printf("Sete");   
        } else if(u == 8){
            printf("Oito");   
        } else {
            printf("Nove");   
        }
    }

    return 0;
}