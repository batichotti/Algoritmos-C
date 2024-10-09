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

    if (a || b){
        printf("Alguem nao e zero\n");
    }

    printf("a: %d\n", a);
    printf("b: %ld\n", b);
    printf("c: %f\n", c);
    printf("d: %f\n", d);
    printf("e: %c\n", e);

    return 0;
}
