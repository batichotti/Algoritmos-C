#include <stdio.h>
#include <stdlib.h>
/*
Escreva uma função que recebe três vetores e seus tamanhos. A função deve realizar a
intersecção entre os vetores v1 e v2, colocando os valores em v3. Considere que v3 tem tamanho
min(n1, n2). Os vetores contém apenas números naturais (inteiros positivos) e v3 deve ser iniciado
com 0.
*/

void vector_intersection(int n1, int* v1, int n2, int* v2, int* v3){
    int nf = n1;
    if (n1 > nf){
        nf = n2;
    }
    

    for (int i = 0; i < nf; i++){
        /* code */
    }
    
    

}

int main(){
    int n = rand() % 10 + 1;
    int n1 = rand() % 10 + 1;

    int v[n];
    for (int i = 0; i < n; i++){
        v[i] = rand() % 10;
    }

    int v1[n1];
    for (int i = 0; i < n1; i++){
        v1[i] = rand() % 10;
    }

    int nf = n1;
    if (n1 > n){
        nf = n;
    }

    int v_final[nf];
    
    for (int i = 0; i < n+n1; i++){
        v_final[i] = 0;
    }
    
    vector_intersection(n, v, n1, v1, v_final);

    for (int i = 0; i < n+n1; i++){
        printf("%d\n", v_final[i]);
    }

    return 0;
}