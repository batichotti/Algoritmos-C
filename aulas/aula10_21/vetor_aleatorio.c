#include <stdio.h>
#include <stdlib.h> // rand é calculado a partir do clock do computador

int main(){
    int n;

    n = 1000;

    int v1[n];

    for (int i = 0; i < n; i++){
        v1[i] = rand() % 10; // [0..n-1], onde n é o lado direito do %
        v1[i] = (rand() % 5) + 1; // [1..5]
    }

    //imprime o vetor
    for (int i = 0; i < 10; i++){
        printf("%d\n", v1[i]);
    }
    
    printf("Fim do programa :)");
    return 0;
}