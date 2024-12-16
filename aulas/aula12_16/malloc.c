#include <stdio.h>
#include <stdlib.h>
// MALLOC PRECISA ESTAR VINCULADO A UM PONTEIRO

char* fn(int amount){
    //amount in MegaBytes(MB)
    char* p = malloc(amount * 1000000 * sizeof(char));

    for (int i = 0; i < amount*1000000; i++){
        p[i] = 'g';
    }

    return p;
}

int main(int argc, char const *argv[]){
    char* p;
    p = fn(10);

    printf("%c", p[2]);
    free(p);
    // printf("%c", p[2]); // Retorna segmentation fault

    return 0;
}
