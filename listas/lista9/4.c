#include <stdio.h>

void print_vector_reverse(int n, const int* v){
    for (int i = n-1; i >= 0; i--){
        printf("%d\n", *(v+i));
    }
    
}

int main(){
    int v[] = {1,2,3,4,5,6};

    print_vector_reverse(6, v);

    return 0;
}
