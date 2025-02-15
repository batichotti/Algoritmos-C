#include <stdio.h>
#include <stdlib.h>
// Escreva uma função que lê o conteúdo de um arquivo para um vetor de inteiros, alocado em heap.
// A função deve retornar o endereço do vetor alocado na heap. O tamanho do vetor deve ser
// retornado pelo parâmetro 'n'. Caso o arquivo não exista, a função deve retornar NULL.
int* read_array(const char* filepath, int* n){
    int* r = malloc(sizeof(int)*(*n));
    FILE* file = fopen(filepath, "r");
    if (file == NULL){
        printf("Erro ao tentar abrir: %s", filepath);
        return NULL;
    }
    
    fread(r, sizeof(int), *n, file);
    return r;
}

int main(int argc, char const *argv[]){

    char path[] = "dados.bin";
    int var = 10;

    int* array = read_array(path, &var);
    
    for(int i = 0; i < var;i++){
        printf("v[%d] = %d\n", i, array[i]);
    }
    free(array);
    return 0;
}
