#include <stdio.h>
#include <stdlib.h>

int main(){
    int v1[10] = {0}; // 0-9

    for (int i = 0; i < 10; i++){
        v1[i] = rand() % 10; // [0..n-1], onde n é o lado direito do %
    }

    //imprime o vetor
    for (int i = 0; i < 10; i++){
        printf("%d\n", v1[i]);
    }
    
    printf("Fim do programa :)");
    return 0;
}