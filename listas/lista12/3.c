#include <stdio.h>
#include <string.h>
// Escreva uma função que imprime a contagem de palavras por quantidade de letras, de um arquivo.
// A contagem deve ser informada em ordem crescente de quantidade de letras.

void report_by_chars(const char* filepath){
    FILE* file = fopen(filepath, "r");
    if (file == NULL) {
        exit(1);
    }
    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    rewind(file);

    int count = 0;
    char buffer[256];
    int letras[255];

    for (int i = 0; i < 255; i++){
        letras[i] = 0;
    }
    
    while(fscanf(file, "%255s", &buffer) == 1){
        letras[strlen(buffer)]++;
    }

    for (int i = 0; i < 255; i++){
        if (letras[i] != 0){
            printf("%d letra(s): %d\n", i, letras[i]);
        }
    }
    
    fclose(file);
}

int main() {
    const char *filename = "teste.txt";
    report_by_chars(filename);
    return 0;
}
