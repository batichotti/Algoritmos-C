#include <stdio.h>


int get_text_size(FILE* file){
    fseek(file, 0, SEEK_END);
    return ftell(file);
}

int main(int argc, char const *argv[]) {

    FILE* file;
    char* path = "texto.txt";
    file = fopen(path, "w");
    //cada caractere é igual a um byte
    // fgetc(file) -> obtem o caractere do cursor (retorna EOF se der merda)
    //fputc(char, file) -> escrever um caractere
    //fseek(file, offset [bytes], ref [SEEK_SET, SEEK_END, SEEK_CUR]) -> move o cursor
    //ftell(file) -> informa onde está o cursor
    //fgets(vector/buffer, vector_size, file)  -> le n-1 chars da entrada até \n, coloca no buffer e adiciona \0 no final (retorna NULL se der merda)
    //fputs(text, file) -> Escreve string
    //fprintf(file, strf, values_f) -> printf para escrever em arquivos (se file for stdout vc imprime no terminal)
    //rewind(file) -> SEEK_SET
    //fcanf(file, str, &vars) -> lê os dados de uma string formatada

    if (file == NULL){
        printf("ERRO: Acesso ao local de escrita do arquivo inválido.");
        return 1;
    }
    
    char* text_to_replace = "Fernanda Torres\nAinda Estou Aqui\n";

    for (int i = 0; text_to_replace[i] != 0; i++){
        fputc(text_to_replace[i], file);
    }

    printf("File created with %d bytes", get_text_size(file));
    fclose(file);

    return 0;
}