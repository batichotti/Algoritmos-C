#include <stdio.h>
/*
Modifique a função do exercício anterior para que receba o endereço de um Point e o imprima
dentro de um tablado de dimensões definido por um Rect. As coordenadas do Point devem ser
relativas à do Rect, isto é, um Point na posição (0,0) deve ser desenhado no canto esquerdo
superior do Rect. Caso a posição do Point extrapole os limites do Rect, não deve ser desenhado.
*/

struct rect{
    int x;
    int y;
    int width;
    int height;
};

typedef struct rect Rect;

struct point {
    int x, y;
    char symbol;
};

typedef struct point Point;

void print_board(Point* point, Rect *board){
    for (int i = 0; i < board->x; i++){
        printf("\n");
    }

    for (int i = 0; i < board->height; i++){
        for (int espaco = 0; espaco < board->y; espaco++){
            printf("  ");
        }
        for (int largura = 0; largura < board->width; largura++){
            if (point->y == i && point->x == largura){
                printf("%c%c", point->symbol, point->symbol);
            } else {
                printf("░░");
            }
        }
        printf("\n");
    }
}

int main(){

    Rect rect = {5,5,10,10}; // posição 5,5 (x,y) e dimensões 10x10 (width,height)
    Point point = {2,4,'A'}; // posição 0,0 dentro do tablado
    print_board(&point, &rect);
    return 0;
}