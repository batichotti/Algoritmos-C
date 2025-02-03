#include <stdio.h>

int main(int argc, char const *argv[]){
    //Em C (e em Python) manipulação de texto é 'diferente' de manipulação de binários
    //C é mapeado em ASCII

    FILE* file;
    char path[] = "texto.txt";
    file = fopen(path, "r"); // modo de abertura: r, w, a, r+, w+, a+ (r não cria, apenas tenta abrir)
    
    if (file == NULL) {
        printf("ERRO\nArquivo %s não encontrado.\n", path); 
        return 1;
    }

    printf("INFO: Arquivo aberto com sucesso!\n\n");

    char c = fgetc(file);
    for (int i = 0; c != EOF ; i++){ // EOF == -1
        printf("%c", c); // cursor do SO faz isso funcionar
        c = fgetc(file);
    }

    fclose(file);
    return 0;
}
