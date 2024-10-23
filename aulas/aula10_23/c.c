#include <stdio.h>
#include <stdlib.h>

void print_even(int n, int * vector){
    for (int i = 0; i < n; i++){
        if (vector[i] % 2 == 0){
                printf("%d \n", vector[i]);
        }
        
    }
}

int main(){
    int n;

    printf("Input a value for the length of the array:\n> ");
    scanf(" %d", &n);
    int v[n];

    for (int i = 0; i < n; i++){
        v[i] = rand() % 10;
    }

    print_even(n, v);
    return 0;
}