#include <stdio.h>
#include <stdlib.h>
// Escreva uma função que realize a união entre dois vetores, retornado o resultado em um vetor
// alocado na heap. Considere que não há elementos repetidos dentro de um mesmo vetor.

int* create_vector(int n) {
    int* p = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++){
        p[i] = i;
    }
    return p;
}

int* array_union(int n1, const int* v1, int n2, const int* v2){
    int* p = malloc((n1+n2)*sizeof(int));
    for (int i = 0; i < n1+n2; i++){
        p[i] = 0;
    }

    for (int i = 0; i < n1; i++){
        p[i] = v1[i];
    }

    int cursor = n1;

    for (int i = 0; i < n2; i++){
        int flag = 0;
        for (int j = 0; j < n1; j++){
            if (v2[i] == p[j]){
                flag = 1;
                break;
            }
        }
        
        if (flag == 0){
            p[cursor] = v2[i];
            cursor++;
        }
    }
    
    return p;
}

int main(int argc, char const *argv[]){
    int v1[] = {0,1,2,3,4,5,6,7,8,9};
    int n1 = 10;
    int n2 = 14;
    int* v2 = create_vector(n2);
    int* p = array_union(n1, v1, n2, v2);

    for (int i = 0; i < n1+n2; i++){
        printf("p[%d] = %d\n", i, *(p+i));
    }
    
    free(p);
    return 0;
}
