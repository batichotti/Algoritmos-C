#include <stdio.h>

void print_vector(int n, const int* v){
    for (int i = 0; i < n; i++){
        printf("%d\n", *(v+i));
    }
    
}

int main(){
    int v[] = {1,2,3,4,5,6};

    print_vector(6, v);

    return 0;
}
