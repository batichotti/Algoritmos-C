#include <stdio.h>


int main(int argc, char const *argv[]) {

    FILE* file;
    char* path = "texto.txt";
    file = fopen(path, "w");

    if (file == NULL){
        printf("ERRO: Acesso ao local de escrita do arquivo inválido.");
        return 1;
    }
    
    char* text_to_replace = "Fernanda Torres\nAinda Estou Aqui\n";

    for (int i = 0; text_to_replace[i] != 0; i++){
        fputc(text_to_replace[i], file);
    }

    fclose(file);

    return 0;
}