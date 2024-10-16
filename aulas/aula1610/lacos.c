#include <stdio.h>

int main(){
    int j;

    for (int i = 0; i < 10; i++){
        printf("i: %d\n", i);
    }

    printf("\n");

    // for (int i = 0; i < 10; i++){
    //     printf("i: %d\n", i);
    //     i--;
    // }
    
    printf("\n");

    while (j != 0){
        printf("j:\n> ");
        scanf(" %d", &j);
    }

    return 0;
}