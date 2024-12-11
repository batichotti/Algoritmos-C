#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Escreva uma função que recebe um ponto x,y (Point) e o imprime com 2 casas de precisão.
Escreva uma função que recebe dois pontos x,y (Point) e devolve a distância entre os mesmos
Escreva uma função que recebe um vetor de pontos (Point), bem como seu tamanho, e informa
(imprime) a distância a cada dois pontos consecutivos do vetor.
Escreva uma função que recebe um vetor de pontos (Point) e os inicia com valores float aleatórios
entre [-50, 50].
*/

struct point {
    float x;
    float y;
};

typedef struct point Point;

void print_point(Point p){
    printf("(%.2f, %.2f)\n", p.x, p.y);
}

float distance(Point p1, Point p2){
    return sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y-p1.y)*(p2.y-p1.y));
}

void distance_vector(int n, Point v[]){
    for (int i = 0; i <= n-1; i++){
        printf("%f\n", distance(*(v+i), *(v+i+1)));
        i++;
    }
}

void random_points(int n, Point v[n]){
    for (int i = 0; i < n; i++){
        int x = rand() % 50;
        int y = rand() % 50;
        Point p = {x, y};
        v[i] = p;
    }
}

int main(){
    Point p0 = {6.66, 3.14159265359278};

    print_point(p0);

    Point p1 = {-2.0f, 7.5f};
    Point p2 = {5.0f, 12.4f};
    float dist = distance(p1, p2);

    printf("distancia: %f\n", dist);

    Point p3 = {-1.0f, -1.0f};
    Point array[] = {p0, p1, p2, p3};
    distance_vector(4, array);

    Point vp[10];
    random_points(10, vp);

    for (int i = 0; i < 10; i++){
        print_point(vp[i]);
    }
    
    return 0;
}