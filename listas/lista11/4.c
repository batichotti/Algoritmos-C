#include <stdio.h>
// Escreva uma função que receba um caminho de arquivo e retorna a quantidade de linhas de texto
// contidas no arquivo. Dica: o caractere '\n' define a quebra de linha no texto.

int count_lines(const char *filepath){
    FILE* file = fopen(filepath, "r");

    if (file == NULL){
        fclose(file);
        return -1;
    } else {
        int linhas = 1;
        char c = fgetc(file);
        while (c != EOF){
            if (c == '\n'){
                linhas++;
            }
            c = fgetc(file);
        }
        fclose(file);
        return linhas;
    }
}

int main(int argc, char const *argv[]){
    int linhas = count_lines("kakaroto.txt");
    printf("%d", linhas);
    return 0;
}
