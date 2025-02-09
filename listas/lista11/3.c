#include <stdio.h>
// Escreva uma função que receba um caminho de arquivo e imprima seu conteúdo no terminal.
// Retorna 1 para sucesso ou 0, caso o arquivo não exista.
int print_content(const char *filepath){
    FILE* file = fopen(filepath, "r");
    if (file == NULL){
        fclose(file);
        return 0;
    } else {
        char c = fgetc(file);
        for (int i = 0; c != EOF; i++){
            printf("%c", c);
            c = fgetc(file);
        }
        
        fclose(file);
        return 1;
    }
    
}

int main(int argc, char const *argv[]){
    int i = print_content("kakaroto.txt");
    return 0;
}
