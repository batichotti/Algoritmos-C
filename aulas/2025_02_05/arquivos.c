#include <stdio.h>


long getTextSize(FILE* file){
    fseek(file, 0, SEEK_END);
    return ftell(file);
}

int main(int argc, char const *argv[]) {

    FILE* file;
    char* path = "texto.txt";
    file = fopen(path, "w");
    //cada caractere é igual a um byte
    // fgetc(file) -> obtem o caractere do cursor
    //fputc(char, file) -> escrever um caractere
    //fseek(file, offset [bytes], ref [SEEK_SET, SEEK_END, SEEK_CUR]) -> move o cursor
    //ftell(file) -> informa onde está o cursor

    if (file == NULL){
        printf("ERRO: Acesso ao local de escrita do arquivo inválido.");
        return 1;
    }
    
    char* text_to_replace = "Fernanda Torres\nAinda Estou Aqui\n";

    for (int i = 0; text_to_replace[i] != 0; i++){
        fputc(text_to_replace[i], file);
    }

    printf("File created with %ld bytes", getTextSize(file));
    fclose(file);

    return 0;
}