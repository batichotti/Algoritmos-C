#include <stdio.h>

int main(){
    int v1[10]; // 0-9

    int n2;
    printf("> ");
    scanf(" %d", &n2);
    int v2[n2]; // variavel de tamanho variavel

    int v3[] = {1,552,0,-1,7,99};

    for (int i = 0; i < n2; i++){
        printf("%d\n", v2[i]);
    }
    
    return 0;
}