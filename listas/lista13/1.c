#include <stdio.h>
// Escreva uma função que grava o conteúdo de um vetor de inteiros em um arquivo. Caso o arquivo
// não exista, a função deve criá-lo.
void write_array(const char* filepath, const int* v, int n){
    FILE* file = fopen(filepath, "w");
    if (file == NULL){
        printf("Erro ao tentar abrir: %s", filepath);
    }
    
    fwrite(v, sizeof(int), 10, file);
    fclose(file);
}

int main(int argc, char const *argv[]){
    int v[] = {1,2,3,4,5,6,7,8,9,0};
    write_array("dados.bin", v, 10);
    
    return 0;
}

