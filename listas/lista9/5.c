#include  <stdio.h>
/*
Escreva uma função que recebe o comprimento e o endereço de um vetor. A função deve retornar,
via parâmetros min e max, o maior e o menor valor contido no vetor. Você não deve utilizar o
operador de índice [ ] para acessar os elementos do vetor.
*/
void get_min_max(int n, const int* v, int* min, int* max){
    *min = v[0];
    *max = v[0];

    for (int i = 0; i < n; i++){
        if (v[i] > *max){
            *max = v[i];
        }
        if (v[i] < *min) {
            *min = v[i];
        }
    }
}


int main(int argc, char const *argv[]){
    
    int v[] = {1,2,3,4,5,6,7,8,9,0};

    int min, max;

    get_min_max(10, v, &min, &max);

    printf("Min: %d;\n Max: %d\n", min, max);

    return 0;
}
