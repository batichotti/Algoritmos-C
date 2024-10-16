#include <stdio.h>

int main(){
    int a;

    printf("a:\n> ");
    scanf(" %d", &a);

    if (a < 10){
        printf("a é menor que 10\n");
    } else if(a <= 55){
        printf("a é menor ou igual que 55\n");
    } else {
        printf("a é deveras grande\n");
    }

    
}