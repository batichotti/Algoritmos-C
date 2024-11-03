#include <stdio.h>
#include <stdlib.h>
/*
Escreva uma função que recebe três vetores e seus tamanhos. A função deve realizar a união
entre os vetores v1 e v2, colocando os valores em v3. Considere que v3 tem tamanho n1 + n2. Os
vetores contém apenas inteiros positivos e v3 deve ser iniciado com 0.
*/

void vector_union(int n1, int* v1, int n2, int* v2, int* v3){
    
    for (int i = 0; i < n1; i++){
        
        int is_repeted = 0;
        int k;
        for (k = 0; k <= i; k++){
            if (v1[i] == v3[k]){
                is_repeted = 1;
                break;
            } else if(v3[k] == 0){
                break;
            }
        }
        
        if (is_repeted == 0){
            v3[k] = v1[i];
        }
    }
    
    for (int i = 0; i < n2; i++){
        
        int is_repeted = 0;
        int k;
        for (k = 0; k <= i+n2; k++){
            if (v2[i] == v3[k]){
                is_repeted = 1;
                break;
            } else if(v3[k] == 0){
                break;
            }
        }
        
        if (is_repeted == 0){
            v3[k] = v2[i];
        }
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

    int v_final[n+n1];

    for (int i = 0; i < n+n1; i++){
        v_final[i] = 0;
    }
    
    vector_union(n, v, n1, v1, v_final);

    for (int i = 0; i < n+n1; i++){
        printf("%d\n", v_final[i]);
    }

    return 0;
}