#include <stdio.h>
#include <stdlib.h>
// Escreva uma função que receba um caminho de arquivo e retorna uma string (vetor de caracteres
// terminado em nulo) alocada em heap contendo o conteúdo do arquivo. Caso ocorra algum
// problema, retorna NULL.

char* get_content(const char *filepath){
    FILE* file = fopen(filepath, "r");
    if (file == NULL){
        return NULL;
    }
    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    rewind(file);
    char* p = (char*) malloc((size+1) * sizeof(char));
    int i;
    char c = fgetc(file);
    for (i = 0; c != EOF ; i++){
        p[i] = c;
        c = fgetc(file);
    }
    p[i] = 0;

    fclose(file);
    return p;
}

int main(int argc, char const *argv[]){

    char* p = get_content("kakaroto.txt");
    
    for(int i = 0; p[i]!= 0;i++){
        printf("%c", *(p+i));
    }

    free(p);

    return 0;
}
