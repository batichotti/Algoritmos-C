#include <stdio.h>
/*
O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares
consecutivos. Por exemplo, 1²=1, 2²=1+3, 3²=1+3+5, 4²=1+3+5+7, etc. Dado um número n, calcule
seu quadrado usando a soma de ímpares.
*/

int main(){
    int value, sum, i;
    printf("Informe o numero: ");
    scanf(" %d", &value);

    sum = 0;
    i = 1;
    while ( sum != (value*value) ){
        if (i%2 != 0){
            sum += i;
            printf("%d", i);
        } else {
            printf(" + ");
        }
        i++;
    }

    printf(" = %d\n", sum);

    return 0;
}