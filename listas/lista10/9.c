#include <stdio.h>
#include <stdlib.h>
// Escreva uma função que aloca na heap uma matriz de inteiros de dimensões mxn e retorna o seu
// endereço. A matriz deve ser preenchida com uma sequência crescente de inteiros.

void print_vector2D(int m, int n, const int** v){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("v[%d][%d] = %d\n", i, j, v[i][j]);
        }
    }
}

int** create_vector2D(int m, int n){
    int** p = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++){
        p[i] = (int*)malloc(n*sizeof(int));
    }

    int v = 0;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            p[i][j] = v;
            v++;
        }
    }
    return p;
}

int main(int argc, char const *argv[]){
    int** p = (int**)create_vector2D(3,4);
    print_vector2D(3,4,p);

    for(int i = 0; i < 3;i++){
        free(*(p+i));
    }
    free(p);
    return 0;
}
