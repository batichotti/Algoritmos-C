#include <stdio.h>
#include <stdlib.h>
/*
Escreva uma função que recebe três vetores e seus tamanhos. A função deve realizar a
intersecção entre os vetores v1 e v2, colocando os valores em v3. Considere que v3 tem tamanho
min(n1, n2). Os vetores contém apenas números naturais (inteiros positivos) e v3 deve ser iniciado
com 0.
*/

void vector_intersection(int n1, int* v1, int n2, int* v2, int* v3){
    int n3 = n1;
    if (n2 < n1){
        n3 = n2;
    }
    
    int v3_idx = 0;

    for (int i = 0; i < n1; i++){
        for (int k = 0; k < n2; k++){

            if (v1[i] == v2[k]){

                int already_exist = 0;

                for (int y = 0; y < n3; y++){
                    if(v1[i] == v3[y]){
                        already_exist = 1;
                        break;
                    }
                }

                if (already_exist == 0){
                    v3[v3_idx] = v1[i];
                    v3_idx++;
                }

            }
        
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

    // int v1[5] = {1,1,1,3,5};
    // int v2[2] = {1,5};
    // int n1 = 5;
    // int n2 = 2;

    int nf = n1;
    if (n1 > n2){
        nf = n2;
    }

    int v_final[nf];
    
    for (int i = 0; i < nf; i++){
        v_final[i] = 0;
    }
    
    vector_intersection(n1, v1, n2, v2, v_final);

    for (int i = 0; i < nf; i++){
        printf("%d\n", v_final[i]);
    }

    return 0;
}