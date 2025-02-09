#include <stdio.h>
// Escreva uma função que verifica se o arquivo de caminho informado existe (retorna 1). Caso
// contrário, retorna 0.

int file_exists(const char* filepath){
    FILE* file;
    file = fopen(filepath, "r");

    if (file == NULL){
        fclose(file);
        return 0;
    } else {
        fclose(file);
        return 1;
    }
}


int main(int argc, char const *argv[]){

    int i = file_exists("pokemon.txt");
    if (i == 1){
        printf("O arquivo existe");
    } else {
        printf("O arquivo não existe");
    }

    return 0;
}
