#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Escreva uma função que receba um caminho de arquivo e retorna um vetor de strings contendo
// todas as palavras do arquivo. Considere como separadores de palavras o caractere de espaço e a
// quebra de linha '\n'. O número de palavras encontradas e colocadas no vetor de strings deve ser
// retornado via parâmetro words_count (por endereço). Caso ocorra algum problema, a função
// retorna NULL.

char** get_words(const char *path, int* words_count) {
    FILE* file = fopen(path, "r");
    if (file == NULL) {
        return NULL;
    }

    char** words = malloc(1000 * sizeof(char*));
    char word[200]; //buffer
    int index = 0;
    int w_index = 0;

    while (1) {
        char c = fgetc(file);

        if (c == ' ' || c == '\n' || c == EOF) {
            if (w_index > 0) {
                word[w_index] = '\0';
                words[index] = malloc(strlen(word) + 1);
                strcpy(words[index], word);
                index++;
                w_index = 0;
            }
            if (c == EOF) break;
        } else {
            word[w_index++] = c;
        }
    }

    fclose(file);
    *words_count = index;
    return words;
}

int main() {
    int count;
    char** words = get_words("kakaroto.txt", &count);

    if (words == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Palavras encontradas (%d):\n", count);
    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i]);
        free(words[i]);
    }

    free(words);
    return 0;
}
