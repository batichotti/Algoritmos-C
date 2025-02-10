#include <stdio.h>
#include <string.h>
// Escreva uma função que conta todas as ocorrências de uma dada palavra, em um arquivo.

int count_word(const char* filepath, const char* word){

    FILE *file = fopen(filepath, "r");
    if (file == NULL) {
        return 0;
    }

    int count = 0;
    char buffer[256];

    while (fscanf(file, "%255s", &buffer) == 1) {
        if (strcmp(buffer, word) == 0) {
            count++;
        }
    }

    fclose(file);
    return count;
}

int main() {
    const char *filename = "teste.txt";
    const char *word = "maneskin";
    int occurrences = count_word(filename, word);
    printf("A palavra '%s' ocorre %d vezes no arquivo.\n", word, occurrences);
    return 0;
}
