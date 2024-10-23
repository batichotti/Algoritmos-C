#include <stdio.h>
#include <stdlib.h>

void vector_copy(int n, int* vector_to_overwrite, int* vector_to_copy){
    if (n>0){
        for (int i = 0; i < n; i++){
            vector_to_overwrite[i] = vector_to_copy[i];
        }   
    }
}

void print_vector_integer(int n, int * vector){
    for (int i = 0; i < n; i++){
        printf("%d \n", vector[i]);
    }
}

int main(){
    int n;
    printf("Len of your array to be copied:\n> ");
    scanf(" %d", &n);

    int v[n], new_v[n];
    for (int i = 0; i < n; i++){
        v[i] = rand() % 100;
    }
    vector_copy(n, v, new_v);

    print_vector_integer(n, new_v);
    return 0;
}