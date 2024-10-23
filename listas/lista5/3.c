#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int find_max(int n, int* vector){
    int max = INT_MIN;

    if (n > 0){
        max = vector[0];
        for (int i = 0; i < n; i++){
            if (max < vector[i]){
                max = vector[i];// if you want the position, just store the value of i
            }
        }
    }

    return max;
}

int main(){
    int n;
    printf("Len of your array:\n> ");
    scanf(" %d", &n);

    int v[n];
    for (int i = 0; i < n; i++){
        v[i] = rand() % 100;
    }

    int max = find_max(n, v);
    printf("Max: %d\n", max);
    return 0;
}