#include <stdio.h>

int main(){
    int j;

    for (int i = 0; i < 10; i++){
        printf("i: %d\n", i);
    }

    // printf("\n Laco infinito \n");

    // for (int i = 0; i < 10; i++){
    //     printf("i: %d\n", i);
    //     i--;
    // }
    
    printf("\n Agora com while \n");

    int i = 0;

    while (i < 10){
        printf("i-> %d\n", i);
        i++;
    }

    return 0;
}