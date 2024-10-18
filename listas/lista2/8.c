#include <stdio.h>

int main(){
    int num, escopo;

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

    escopo = num/1000;
    if(escopo > 0){
        if(escopo == 1){
            printf("Um");   
        } else if(escopo == 2){
            printf("Dois");   
        } else if(escopo == 3){
            printf("Tres");   
        } else if(escopo == 4){
            printf("Quatro");   
        } else if(escopo == 5){
            printf("Cinco");   
        } else if(escopo == 6){
            printf("Seis");   
        } else if(escopo == 7){
            printf("Sete");   
        } else if(escopo == 8){
            printf("Oito");   
        } else {
            printf("Nove");
        }

        printf(" Mil");
    }

    escopo = (num - escopo*1000)/100;
    if(escopo > 0){
        if ((num - (num/1000)*1000 - ((num - (num/1000)*1000)/10)*10 ) == 0) {
            printf(" e");
        }

        if(escopo == 1){
            printf(" Cento");
        } else if(escopo == 2){
            printf(" Duzentos");   
        } else if(escopo == 3){
            printf(" Trezentos");   
        } else if(escopo == 4){
            printf(" Quatrocentos");   
        } else if(escopo == 5){
            printf(" Quinhentos");   
        } else if(escopo == 6){
            printf(" Seiscentos");   
        } else if(escopo == 7){
            printf(" Setecentos");   
        } else if(escopo == 8){
            printf(" Oitocentos");   
        } else {
            printf(" Novecentos");
        }
    }
    
    escopo = (num - (num/1000)*1000 - (escopo*100))/10;

    if (escopo > 0) {
        if ((num - (num/1000) - escopo*100) > 0){
            printf(" e ");
        }
        if(escopo == 1){
            escopo = (num - (num/1000) - (escopo*100) - 10);
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
            printf("Vinte");
        } else if(escopo == 3){
            printf("Trinta");   
        } else if(escopo == 4){
            printf("Quarenta");   
        } else if(escopo == 5){
            printf("Cinquenta");   
        } else if(escopo == 6){
            printf("Sessenta");   
        } else if(escopo == 7){
            printf("Setenta");   
        } else if(escopo == 8){
            printf("Oitenta");   
        } else {
            printf("Noventa");
        }
    }

    escopo = (num - (num/1000)*1000 - ((num-(num/1000)*1000)/100)*100 - ((num - (num/1000)*1000 - ((num-(num/1000)*1000)/100)*100)/10)*10 );
    if (escopo > 0){ 

        if(num > 19){
            printf(" e ");
        }

        if(escopo == 1){
            printf("Um");
        } else if(escopo == 2){
            printf("Dois");   
        } else if(escopo == 3){
            printf("Tres");   
        } else if(escopo == 4){
            printf("Quatro");   
        } else if(escopo == 5){
            printf("Cinco");   
        } else if(escopo == 6){
            printf("Seis");   
        } else if(escopo == 7){
            printf("Sete");   
        } else if(escopo == 8){
            printf("Oito");   
        } else {
            printf("Nove");   
        }
    }

    return 0;
}