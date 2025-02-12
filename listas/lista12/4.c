#include <stdio.h>
// Escreva uma função que imprime a quantidade de ocorrências de cada palavra, em um arquivo.

struct Word{
    char text[256];
    int count;
};

typedef struct Word word;

void count_all_words(const char* filepath){

    FILE* file = fopen(filepath, "r");
    fseek(file, 0, SEEK_END);
    int size = 1 + ftell(file)/2;
    rewind(file);
    word words[size];

    for (int i = 0; i < size; i++){
        words->count = 0;
    }
    
    

    free(words);
    fclose(file);
}

int main(int argc, char const *argv[]){
    
    return 0;
}
