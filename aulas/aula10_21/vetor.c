#include <stdio.h>

int main(){
    int v1[10] = {0}; // 0-9

    int n2;
    printf("tamanho de v2> ");
    scanf(" %d", &n2);
    int v2[n2]; // variavel de tamanho variavel

    int v3[] = {1,552,0,-1,7,99};

    for (size_t i = 0; i < 10; i++){
        v1[i] = 9;
    }

    //mostrando os lixos de memoria
    for (int i = 0; i < 10; i++){
        printf("%d\n", v1[i]);
    }
    
    printf("\n");

    for (int i = 0; i < n2; i++){
        printf("%d\n", v2[i]);
    }

    printf("\n");

    for (int i = 0; i < 6; i++){
        printf("%d\n", v3[i]);
    }
    
    printf("Fim do programa :)");
    return 0;
}