#include <stdio.h>

int main(){
    int num, escopo;

    printf("Insira um valor de até 4 digitos:\n> ");
    scanf(" %d", &num);

    if (num > 9999){
        printf("Numero invalido\n");
        return 0;
    }
    
    if (num < 0){
        printf("Menos ");
        num = num*(-1);
    }

    escopo = num/1000;
    if(escopo > 0){
        if(escopo == 1){
            printf("Mil");   
        } else if(escopo == 2){
            printf("Dois Mil");   
        } else if(escopo == 3){
            printf("Tres Mil");   
        } else if(escopo == 4){
            printf("Quatro Mil");   
        } else if(escopo == 5){
            printf("Cinco Mil");   
        } else if(escopo == 6){
            printf("Seis Mil");   
        } else if(escopo == 7){
            printf("Sete Mil");   
        } else if(escopo == 8){
            printf("Oito Mil");   
        } else {
            printf("Nove Mil");   
        }

        printf(" ");
    }

    escopo = (num-escopo*1000)/100;
    if(escopo > 0){
        if(escopo == 1){
            escopo = escopo - 10;

            if (escopo == 0){
                printf("Dez");
            } if(escopo == 1){
                printf("Onze");   
            } else if(escopo == 2){
                printf("Doze");   
            } else if(escopo == 3){
                printf("Treze");   
            } else if(escopo == 4){
                printf("Quatorze");   
            } else if(escopo == 5){
                printf("Quinze");   
            } else if(escopo == 6){
                printf("Dezesseis");   
            } else if(escopo == 7){
                printf("Dezesete");   
            } else if(escopo == 8){
                printf("Dezeito");   
            } else {
                printf("Dezenove");
            }

        } else if(escopo == 2){
            printf("Duzentos");   
        } else if(escopo == 3){
            printf("Trezentos");   
        } else if(escopo == 4){
            printf("Quatrocentos");   
        } else if(escopo == 5){
            printf("Quinhentos");   
        } else if(escopo == 6){
            printf("Seiscentos");   
        } else if(escopo == 7){
            printf("Setecentos");   
        } else if(escopo == 8){
            printf("Oitocentos");   
        } else {
            printf("Novecentos");
        }

        printf(" e ");
    }
    
    escopo = (num - (num/1000) - escopo)/10;
    if (escopo > 0) {
        if(num == 1){
            printf("");   
        } else if(num == 2){
            printf("Duzentos");   
        } else if(num == 3){
            printf("Trezentos");   
        } else if(num == 4){
            printf("Quatrocentos");   
        } else if(num == 5){
            printf("Quinhentos");   
        } else if(num == 6){
            printf("Seiscentos");   
        } else if(num == 7){
            printf("Setecentos");   
        } else if(num == 8){
            printf("Oitocentos");   
        } else {
            printf("Novecentos");
        }
    }

    return 0;
}