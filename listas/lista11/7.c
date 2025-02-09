#include <stdio.h>
// Escreva uma função que receba um caminho de arquivo e escreva linhas de strings no mesmo. Ela
// deve (re)criar o arquivo especificado. A função recebe um vetor de strings e cada uma deve ser
// escrita em uma linha do arquivo. Retorna 1 para sucesso ou 0, em caso de erro.

int save_lines(const char *filepath, int n, const char text_lines[n][51]){
    FILE* file = fopen(filepath, "w");
    for(int i = 0; i < n; i++){
        for (int j = 0; text_lines[i][j] != 0; j++){
            fputc(text_lines[i][j], file);
        }
        fputc('\n', file);
    }
    fclose(file);
    return 1;
}

int main() {
    const char lines[5][51] = {
        "Vini Jr",
        "Mbappé",
        "Endrick",
        "Rodrygo",
        "Bellingham"
    };
    save_lines("RRR.txt", 5, lines);
    return 0;
}