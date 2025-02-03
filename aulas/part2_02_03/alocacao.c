#include <stdio.h>
#include <stdlib.h> //malloc

int* create_integer_array(int size){
    int* v = (int*) malloc(size * sizeof(int));

    for(int i = 0; i < size; i++){
        v[i] = 0;
    }

    return v; //endereço do primeiro byte do inteiro
}

void print_array(int n, int* p){
    for (int i = 0; i < n; i++){
        printf("%d\n", *(p+i)); // mesma coisa que p[i]
    }
}

int main(int argc, char const *argv[]){
    int p_deprec[] = {1,2,3,4}; // ponteiro some junto ao seu frame
    int* p = (int*) malloc(10*sizeof(int)); // alocação manual na heap
    free(p); // libera a memória alocada


    int size = 10;
    p = create_integer_array(size);
    print_array(size, p);

    return 0;
}
