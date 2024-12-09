#include <stdio.h>
/*
Escreva uma função que recebe o endereço de um Rect e imprime um tablado de acordo com a
posição x,y e as dimensões width e height. Você pode considerar cada caractere do terminal
como uma unidade para posição/tamanho.
*/

struct rect{
    int x;
    int y;
    int width;
    int height;
};

typedef struct rect Rect;

void print_board(Rect *board){
    for (int i = 0; i < board->y; i++){
        printf("\n");
    }

    for (int i = 0; i < board->height; i++){
        for (int espaco = 0; espaco < board->x; espaco++){
            printf("  ");
        }
        for (int largura = 0; largura < board->width; largura++){
            printf("░░");
        }
        printf("\n");
    }
}

int main(){

    Rect retangulo = {5, 5, 10, 10};
    print_board(&retangulo);
    return 0;
}