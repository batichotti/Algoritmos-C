#include <stdio.h>
/*
Escreva uma função que recebe três vetores e seus tamanhos. A função deve concatenar (juntar) o
conteúdo de v1 e v2 em v3. Considere que v3 tem tamanho n1 + n2. Os vetores contém apenas
inteiros positivos
*/

void vector_concat(int n1, int*v1, int n2, int* v2, int* v3){
    if (n1+n2 > n1){ 
        for (int i = 0; i < n1; i++){
            v3[i] = v1[i];
        }
        for (int i = 0; i < n2; i++){
            v3[i+n1] = v2[i];
        }
    }
}

int main(){
    int n ;
    printf("Length for the first vector\n> ");
    scanf(" %d", &n);
    int v[n];

    int n2;
    printf("Length for the first vector\n> ");
    scanf(" %d", &n2);
    int v2[n2];

    int final_vector[n+n2];

    for (int i = 0; i < n; i++){
        v[i] = i;
    }
    
    vector_concat(n, v, n2, v2, final_vector);

    for (int i = 0; i < n+n2; i++){
        printf("%d\n", final_vector[i]);
    }
    
}