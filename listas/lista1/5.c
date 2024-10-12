/*
Escreva um programa que lê o raio (r) de um círculo. O programa deve informar:
a. Diâmetro (2r)
b. Circunferência (2πr)
c. Área do círculo (πr2).
*/
#include <stdio.h>

int main(){
    const float PI = 3.141593;
    float radius;

    printf("Radius: \n> ");
    scanf(" %f", &radius);

    printf("Diameter: %f\n", 2*radius);
    printf("Circle: %f\n", 2*PI*radius);
    printf("Area: %f\n", PI*radius*radius);

    return 0;
}