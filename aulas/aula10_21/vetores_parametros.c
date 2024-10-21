#include <stdio.h>
#include <stdlib.h>

void print_vector(int length, int* vector){
    for (int i = 0; i < length; i++){
        printf("%d\n", vector[i]);
    }
    printf("\n");
}

void set_vector(int n, int* vector){
    //insere valores no vetor
    for (int i = 0; i < n; i++){
        vector[i] = rand() % 10;
    }
    printf("\n");
}

int main(){
    int n;
    printf("> ");
    scanf(" %d", &n);

    int vector[n];

    set_vector(n, vector);

    print_vector(n, vector);
    return 0;
}