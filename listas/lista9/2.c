#include <stdio.h>
/*
Escreva uma função que recebe o endereço de duas variáveis inteiras. A função deve somar os
valores contidos nessas variáveis por meio de seus endereços, colocando o resultado na primeira.
*/

void add(int* a, int* b){
    printf("%d\n", *a+*b);
}

int main(){

    int a = 1;
    int b = 2;
    int* pa = &a;
    int* pb = &b;

    add(pa, pb);

    return 0;
}