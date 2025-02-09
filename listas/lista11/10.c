#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Escreva uma função que receba um caminho de arquivo e retorna um vetor de strings contendo
// todas as palavras do arquivo. A string de separadores é passada como argumento à função. O
// número de palavras encontradas e colocadas no vetor de strings deve ser retornado via parâmetro
// words_count (por endereço). Caso ocorra algum problema, a função retorna NULL.
// Considerando exemplo do exercício anterior, este seria o retorno da função para
// os separadores " ,;.:?!-":
char** get_words_sep(const char *path, const char* separators, int* words_count){
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
        char flag = 0;
        
        for (int i = 0; separators[i] != 0; i++){
            if (c == separators[i]){
                flag = 1;
                break;
            }
        }
        
        if (flag == 1 || c == EOF) {
            if (w_index > 0) {
                word[w_index] = '\0';
                words[index] = malloc(strlen(word) + 1);
                strcpy(words[index], word);
                index++;
                w_index = 0;
                flag = 0;
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
    char** words = get_words_sep("kakaroto.txt", " ,;.:?!-\n", &count);

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
