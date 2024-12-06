#include <stdio.h>

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