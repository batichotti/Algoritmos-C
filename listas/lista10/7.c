#include <stdio.h>
#include <stdlib.h>
// Escreva uma função que realize a intersecção entre dois vetores, retornado o resultado em um
// vetor alocado na heap. Considere que não há elementos repetidos dentro de um mesmo vetor.

int* create_vector(int n) {
    int* p = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++){
        p[i] = i;
    }
    return p;
}

int* array_intersection(int n1, const int* v1, int n2, const int* v2){
    int size;
    if (n1 < n2){
        size = n1;
    } else {
        size = n2;
    }
    
    int* p = malloc((size)*sizeof(int));
    for (int i = 0; i < size; i++){
        p[i] = 0;
    }

    int cursor = 0;
    for (int i = 0; i < n1; i++){
        char flag = 0;
        for (int j = 0; j < n2; j++){
            if (v1[i] == v2[j]){
                flag = 1;
                break;
            }
        }
        if (flag == 1){
            p[cursor] = v1[i];
            cursor++;
        }
    }

    return p;
}

int main(int argc, char const *argv[]){
    int v1[] = {50,1,2,3,4,5,6,7,8,9};
    int n1 = 10;
    int n2 = 14;
    int* v2 = create_vector(n2);
    int* p = array_intersection(n1, v1, n2, v2);

    int size;
    if (n1 < n2){
        size = n1;
    } else {
        size = n2;
    }

    for (int i = 0; i < size; i++){
        printf("p[%d] = %d\n", i, *(p+i));
    }
    
    free(p);
    return 0;
}
