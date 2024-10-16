#include <stdio.h>

int max(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}

int main(){

    int a, b, maior;
    printf("Informe os valores:\n> ");
    scanf(" %d %d", &a, &b);
    maior = max(a, b);
    
    printf("\nO maior entre %d e %d é %d", a, b, maior);
    return 0;
}