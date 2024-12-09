#include <stdio.h>

struct rect {
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

void print_board(int qtd, Point *points, Rect *board) {
    for (int i = 0; i < board->x; i++) {
        printf("\n");
    }

    for (int i = 0; i < board->height; i++) {
        for (int espaco = 0; espaco < board->y; espaco++) {
            printf("  ");
        }

        for (int largura = 0; largura < board->width; largura++) {
            int flag = 0;

            for (int k = 0; k < qtd; k++) {
                if (points[k].y == i && points[k].x == largura) {
                    printf("%c%c", points[k].symbol, points[k].symbol);
                    flag = 1;
                    break;
                }
            }

            if (!flag) {
                printf("░░");
            }
        }
        printf("\n");
    }
}

int main() {
    Rect rect = {5, 5, 10, 10};
    Point points[] = {{0, 0, 'A'}, {2, 7, 'B'}, {9, 9, 'C'}};
    print_board(3, points, &rect);
    return 0;
}
