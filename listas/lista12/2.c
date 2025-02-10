#include <stdio.h>
#include <string.h>
// Escreva uma função que substitui todas as ocorrências de uma dada palavra por outra, em um
// arquivo. A função deve retornar a quantidade de substituições realizadas.

int replace_word(const char* filepath, const char* old_str, const char* new_str){
    FILE* file = fopen(filepath, "r");
    if (file == NULL) {
        return 0;
    }
    
    char* tempstr = "temp.txt";
    FILE* temp = fopen(tempstr, "w");

    int count = 0;
    char buffer[256];
    int i = 0;

    char c = fgetc(file);
    while(c != EOF){
        if (c == ' ' || c == '\n') {  
            buffer[i] = '\0';
            if (strcmp(buffer, old_str) == 0) {
                fprintf(temp, "%s", new_str);
                count++;
            } else {
                fprintf(temp, "%s", buffer);
            }
            fputc(c, temp);
            i = 0;
        } else {
            buffer[i++] = c;
        }
        c = fgetc(file);
    }

    buffer[i] = '\0';  
    if (strcmp(buffer, old_str) == 0) {
        fprintf(temp, "%s", new_str);
        count++;
    } else {
        fprintf(temp, "%s", buffer);
    }

    fclose(temp);
    fclose(file);

    remove(filepath);
    rename(tempstr, filepath);
    
    return count;
}

int main(int argc, char const *argv[]){
    
    const char *filename = "teste.txt";
    const char *word = "maneskin";
    const char *word_new = "Billie Eilish";
    int occurrences = replace_word(filename, word, word_new);
    printf("A palavra '%s' ocorre %d vezes no arquivo.\n", word, occurrences);
    return 0;
}
