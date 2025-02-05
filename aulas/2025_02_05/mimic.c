#include <stdio.h>

FILE* open_txt(char* path, char* mode){
    FILE* file = fopen(path, mode);
    if (file == NULL){
        printf("ERRO: Acesso ao local do arquivo inválido.");
        return NULL;
    }

    return file;
}

int main(int argc, char const *argv[]){
    FILE* file1 = open_txt("texto.txt", "r");    
    FILE* file2 = open_txt("copy.txt", "w");

    char ch = fgetc(file1);
    while (ch != EOF){
        fputc(ch, file2);
        ch = fgetc(file1);
    }
    
    fclose(file1);
    fclose(file2);
    return 0;
}
