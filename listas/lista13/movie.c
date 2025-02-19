#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void show_all_movies(const char* filepath){
    FILE* file = fopen(filepath, "r");
    if (file == NULL){
        printf("Deu merda\n");
    } else {
        int count = count_movies(filepath);
        for (int i = 0; i < count; i++){
            Movie mv;
            fread(&mv, sizeof(Movie), 1, file);
            printf("ID: %d\nTitle: %s\n", mv.id, mv.name);
        }
    }
}

// Escreva uma função que lê um registro de filme de um arquivo, na posição indicada (0, 1, 2, …). A
// função deve retornar uma cópia do registro. Se a posição for inválida, a função deve retornar um
// registro preenchido com zeros. OBS: você não deve trazer todos os registros para a RAM, em um
// array. A função deve ler somente somente o registro em questão.
Movie read_movie(const char* filepath, int pos){
    FILE* file = fopen(filepath, "r");
    if (file == NULL){
        printf("Deu problema pra abrir o arquivo\n");
        Movie erro;
        erro.id = -1;
        strcpy(erro.name, "erro");
        return erro;
    }
    
    fseek(file, sizeof(Movie)*pos, SEEK_SET);
    Movie movie;
    fread(&movie, sizeof(Movie), 1, file);
    rewind(file);
    fclose(file);
    return movie;
}

// Escreva uma função que retorna a posição de um registro de filme em um arquivo, a partir de seu
// ID (campo Movie::id). A função deve retornar a posição (índice) que o registro ocupa no arquivo ou
// -1, caso ID inexistente. OBS: você não deve trazer todos os registros para a RAM, em um array. A
// função deve acessar registro por registro, no próprio arquivo.
int find_movie(const char* filepath, int id){
    FILE* file = fopen(filepath, "r");
    if (file == NULL){
        printf("Deu ruim\n");
        return -2;
    }
    // Movie* movies;
    // fread(movies, sizeof(Movie), count_movies(filepath), file);
    int size = count_movies(filepath);
    for (int i = 0; i < size; i++){
        Movie movie;
        fread(&movie, sizeof(Movie), 1, file);
        if (movie.id == id){
            fclose(file);
            return i;
        }
    }
    fclose(file);
    return -1;
}

// Escreva uma função que adiciona um registro ao final de um arquivo de filmes. A função deve
// retornar 1 (true) para sucesso ou 0 (false) em caso de erro. OBS: você não deve trazer todos os
// registros para a RAM, em um array.
int add_movie(const char* filepath, const Movie* movie){
    FILE* file = fopen(filepath, "a");
    if (file == NULL){
        return 0;
    }

    fwrite(movie, sizeof(Movie), 1, file);

    fclose(file);
    return 1;
}

// Escreva uma função que grava um registro em um arquivo de filmes a partir de seu ID (Movie::id),
// substituindo o existente. A função deve retornar 1 (true) para sucesso ou 0 (false), em caso de erro
// ou ID inexistente. OBS: você não deve trazer todos os registros para a RAM, em um array. A
// função deve acessar somente o registro especificado.
int update_movie(const char* filepath, const Movie* movie){
    FILE* file = fopen(filepath, "r+");
    if (file == NULL){
        return 0;
    }

    int id_orig = movie->id;
    int pos = find_movie(filepath, id_orig);

    fwrite(movie, sizeof(Movie), 1, file);

    fclose(file);
    return 1;
}

// Escreva uma função que remove um registro em um arquivo de filmes, a partir de seu ID
// (Movie::id). A função não apaga os dados do registro, mas apenas marca-o como removido,
// definindo ID = -1. A função deve retornar 1 (true) para sucesso ou 0 (false) em caso de erro. OBS:
// você não deve trazer todos os registros para a RAM, em um array. A função deve acessar somente
// o registro especificado.
int delete_movie(const char* filepath, int id){
    FILE* file = fopen(filepath, "r+");
    if (file == NULL){
        return 0;
    }

    int pos = find_movie(filepath, id);

    Movie mv = {-1, "Deleted"};
    fseek(file, pos*sizeof(Movie), SEEK_SET);
    fwrite(&mv, sizeof(Movie), 1, file);    
    rewind(file);
    fclose(file);
    return 1;
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
    printf("Total de filmes em registro: %d\n", count_movies(path));
    int pos = 2;
    Movie movie = read_movie(path, pos);
    printf("%d - Filme de ID <%d>: <%s>\n", pos, movie.id, movie.name);
    printf("Posição do Filme com ID: <%d> = <%d>\n", 23, find_movie(path, 23));
    Movie new_movie = {13, "Drive My Car"};
    add_movie(path, &new_movie);
    printf("Total de filmes em registro: %d\n", count_movies(path));
    Movie newest_movie = {6, "Ran"};
    update_movie(path, &newest_movie);
    delete_movie(path, 11);
    show_all_movies(path);
    return 0;
}
