#include <stdio.h>

int main(){
    int a;
    long b;
    float c;
    double d;
    char e = 66;

    printf("Informe um inteiro \n> ");
    scanf(" %d", &a);
    scanf(" %d %ld", &a, &b);

    printf("a: %d\n", a);
    printf("a: %ld\n", b);
    printf("a: %f\n", c);
    printf("a: %f\n", d);
    printf("a: %c\n", e);

    return 0;
}
