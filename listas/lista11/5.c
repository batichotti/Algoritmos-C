#include <stdio.h>
// Escreva uma função que receba um caminho de arquivo e escreva uma string no mesmo. A função
// deve (re)criar o arquivo especificado. Retorna 1 para sucesso ou 0, em caso de erro.

int save_string(const char *filepath, const char* text){
    FILE* file = fopen(filepath, "w");
    if (file == NULL){
        fclose(file);
        return 0;
    } else {
        for (int i = 0; text[i] != 0; i++){
            fputc(text[i], file);
        }
        fclose(file);
        return 1;
    }
}

int main(int argc, char const *argv[]){
    char text[] = "Goku\nVegeta\nBills\nFreeza\nKuririn";
    save_string("kakaroto.txt", text);
    return 0;
}
