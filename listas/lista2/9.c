#include <stdio.h>

int main(){
    int num, dm, um, c, d, u;
    printf("Insira um numero de 5 digitos:\n >");
    scanf(" %d", &num);

    if (num > 99999 || num < 10000){
        printf("Numero invalido");
        return 0;
    }

    u = num%10;
    num /= 10;
    d = num%10;
    num /= 10;
    c = num%10;
    num /= 10;
    um = num%10;
    num /= 10;
    dm = num;

    printf("Unidade: %d\n", u);
    printf("Dezena: %d\n", d);
    printf("Centena: %d\n", c);
    printf("Unidade de milhar: %d\n", um);
    printf("Dezena de milhar: %d\n", dm);

    return 0;
}