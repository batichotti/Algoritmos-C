#include <stdio.h>
/*
Escreva uma função que recebe dois vetores v1 e v2 ordenados crescentemente. Ela deve mesclar
ordenadamente os conteúdos de v1 e v2, colocando em v3. Considere que v3 tem tamanho n1 +
n2. Note que é possível se beneficiar do fato dos vetores estarem ordenados. OBS: você não deve
concatenar e ordenar.
*/


void merge(int n1, int* v1, int n2, int* v2, int* v3) {
    int c1 = 0;
    int c2 = 0;

    for (int i = 0; i < n1 + n2; i++) {
        if (c1 < n1 && (c2 >= n2 || v1[c1] < v2[c2])) {
            v3[i] = v1[c1];
            c1++;
        } else {
            v3[i] = v2[c2];
            c2++;
        }
    }
}

int main(){
    int n;
    printf("Length for the first vector\n> ");
    scanf(" %d", &n);
    int v[n];

    int n2;
    printf("Length for the second vector\n> ");
    scanf(" %d", &n2);
    int v2[n2];

    int final_vector[n+n2];

    for (int i = 0; i < n; i++){
        v[i] = i;
    }

    for (int i = 0; i < n2; i++){
        v2[i] = i+8;
    }
    
    merge(n, v, n2, v2, final_vector);

    for (int i = 0; i < n+n2; i++){
        printf("%d\n", final_vector[i]);
    }
    
}