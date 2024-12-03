#include <stdio.h>
/*
Escreva uma função que recebe um ponto x,y (Point) e o imprime com 2 casas de precisão.
*/

struct point {
    float x;
    float y;
};

typedef struct point Point;

void print_point(Point p){
    printf("(%.2f, %.2f)", p.x, p.y);
}

int main(){

    Point p = {6.66, 3.14159265359278};

    print_point(p);

    return 0;
}