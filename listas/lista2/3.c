#include <stdio.h>

int main(){
    int x;
    scanf(" %d", &x);
    if (x & 1) printf("impar");
    else printf("par");
    return 0;
}