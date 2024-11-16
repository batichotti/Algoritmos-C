#include <stdio.h>
/*
'Descomprimir os vetores'
*/

void descomprimir_vetor(int n, int* v);

int main() {
    int v[10] = {1,2,3,-1,5,6,7,-1,9,8};

    descomprimir_vetor(10, v);
    return 0;
}

void descomprimir_vetor(int n, int* v){
    for (int i = 0; i < n; i++){
        if (v[i] == -1){
            for (int j = 0; j < v[i+2]; j++){
                printf("%d\n", v[i+1]);
            }
            i += 2;
        } else {
            printf("%d\n", v[i]);
        }   
    }
}