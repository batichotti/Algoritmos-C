#include <stdio.h>

int main(){
    int x;

    printf("Insira um numero:\n> ");
    scanf(" %d", &x);

    if (x < 0) return printf("%d", x*(-1));
    else printf("%d", x);

    return 0;
}