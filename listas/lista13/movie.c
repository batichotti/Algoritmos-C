#include <stdio.h>
#include <stdlib.h>
// Para os exercícios que seguem, considere o tipo estruturado Movie, que deverá ser utilizado para
// manipular arquivos de registros de filmes:
typedef struct {
    int id;
    char name[51];
} Movie;
// Escreva uma função que grava o conteúdo de um vetor de filmes (Movie) em um arquivo. Caso o
// arquivo não exista, a função deve criá-lo.
void write_all_movies(const char* filepath, const Movie* list, int n){
    FILE* file = fopen(filepath, "w");
    if (file == NULL){
        printf("Erro ao acessar %s", filepath);
    }
    
    fwrite(list, sizeof(Movie), n, file);
    fclose(file);
}

// Escreva uma função que retorna a quantidade de registros de filmes contidos em um arquivo.
int count_movies(const char* filepath){
    FILE* file = fopen(filepath, "r");
    if (file == NULL){
        return -1;
    }
    fseek(file, 0, SEEK_END);
    long byte_size = ftell(file);
    fclose(file);
    return (int) (byte_size/sizeof(Movie));
}

int main(int argc, char const *argv[]){
    Movie list[] = {
        {6, "They Live"},
        {11,"Big Trouble in Little China"},
        {10,"The Thing"},
        {1, "In the Mouth of Madness"},
        {8, "Ghosts of Mars"},
        {23,"Halloween"},
        {7, "Village of the Damned"}
        };


    char path[] = "movies";
    write_all_movies(path, list,7);
    printf("%d", count_movies(path));
    return 0;
}
