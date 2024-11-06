#include <stdio.h>
#include <stdlib.h>
/*
Escreva uma função que recebe três vetores e seus tamanhos. A função deve realizar a
intersecção entre os vetores v1 e v2, colocando os valores em v3. Considere que v3 tem tamanho
min(n1, n2). Os vetores contém apenas números naturais (inteiros positivos) e v3 deve ser iniciado
com 0.
*/

int in(int n, int* v, int elem){
    for (int y = 0; y < n; y++){
        if (v[y] == elem){
            return 1;
        }
    }
    return 0;
}

void intersect(int n1, int *v1, int n2, int *v2, int *v3){
    int v3_controller = 0;

    for (int i = 0; i < n1; i++){
        if (in(n2, v2, v1[i]) && !(in(v3_controller, v3, v1[i]))){
            v3[v3_controller] = v1[i];
            v3_controller++;
        }
    }
}

int main(){
    int n1 = rand() % 10 + 1;
    int n2 = rand() % 10 + 1;

    int v1[n1];
    for (int i = 0; i < n1; i++){
        v1[i] = rand() % 10;
    }

    int v2[n2];
    for (int i = 0; i < n2; i++){
        v2[i] = rand() % 10;
    }

    int nf = n1;
    if (n1 > n2){
        nf = n2;
    }

    int v_final[nf];
    
    for (int i = 0; i < nf; i++){
        v_final[i] = 0;
    }
    
    intersect(n1, v1, n2, v2, v_final);

    for (int i = 0; i < nf; i++){
        printf("%d\n", v_final[i]);
    }

    return 0;
}