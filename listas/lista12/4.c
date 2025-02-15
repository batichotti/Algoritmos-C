#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar cada palavra e sua contagem
struct Word {
    char text[256];
    int count;
};

typedef struct Word word;

void count_all_words(const char* filepath) {
    FILE* file = fopen(filepath, "r");
    if (!file) {
        printf("Erro ao abrir o arquivo: %s\n", filepath);
        return;
    }
    
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    rewind(file);
    int size = 1 + file_size / 2;
    
    word words[size];

    for (int i = 0; i < size; i++) {
        words[i].text[0] = '\0';
        words[i].count = 0;
    }
    
    int wcount = 0;
    char buffer[256];
    
    while (fscanf(file, "%255s", buffer) == 1) {
        int found = 0;
        for (int i = 0; i < wcount; i++) {
            if (strcmp(words[i].text, buffer) == 0) {
                words[i].count++;
                found = 1;
                break;
            }
        }
        if (found == 0) {
            strcpy(words[wcount].text, buffer);
            words[wcount].count = 1;
            wcount++;
        }
    }
    for (int i = 0; i < wcount; i++) {
        printf("%s: %d\n", words[i].text, words[i].count);
    }
    
    fclose(file);
}

int main(int argc, char const *argv[]) {
    char path[] = "teste.txt";
    count_all_words(path);
    return 0;
}
