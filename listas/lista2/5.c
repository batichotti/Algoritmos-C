#include <stdio.h>

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