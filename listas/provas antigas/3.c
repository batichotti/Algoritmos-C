#include <stdio.h>
/*
Escreva uma função que recebe um vetor de inteiros positivos vec, contendo um formato de
compressão de contagem de repetições consecutivas. A função deve expandir e imprimir a
contagem, contida de forma comprimida no vetor. A compressão utiliza o seguinte formato:
a. Quando o número é inteiro positivo, deve ser impresso;
b. Quando o número é -1, o próximo inteiro indica o número de fato e, o seguinte, a
quantidade de repetições do mesmo
*/

void uncompress(int n, int v[]);

int main() {
    int v[10] = {1,2,3,-1,5,6,7,-1,9,8};

    descomprimir_vetor(10, v);
    return 0;
}

void uncompress(int n, int v[]){
    for (int i = 0; i < n; i++){
        if (v[i] == -1){
            for (int j = 0; j < v[i+2]; j++){
                printf("%d\n", v[i+1]);
            }
            i += 2;
        } else {
            printf("%d\n", v[i]);
        }   
    }
}