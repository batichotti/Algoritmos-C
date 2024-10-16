#include <stdio.h>

int fn(){
    int a = 5;

    return a;
}

int main(){
    {
        int a = fn();
        printf("%d\n", a);
        {
            int a = 2;
            printf("%d\n", a);
        }
        printf("%d\n", a);
    }

    return 0;
}