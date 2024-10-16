#include <stdio.h>
//mantem o registro de chamadas da funcao enquanto elas nao foram resolvidas

int max(int a, int b){
    if (a > b) return a;
    else return b;
    return 0;
}

int maiorDeTres(){
    int a, b, c;
    printf("Informe 3 valores:\n> ");
    scanf(" %d %d %d", &a, &b, &c);

    printf("Max: %d\n", max(max(a,b),c));
    return 0;
}

int main(){
    maiorDeTres();
    return 0;
}