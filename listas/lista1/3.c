/*
Escreva um programa que lê a largura e o comprimento de um retângulo. O programa deve
imprimir o perímetro e a área do retângulo
*/
#include <stdio.h>

int main(){

    float width, length;
    float perimeter, area;

    printf("Input width\n>");
    scanf(" %f", &width);
    printf("Input length\n>");
    scanf(" %f", &length);

    perimeter = (2*width)+(2*length);
    area = width*length;

    printf("Perimeter: ");
    printf("%f\n", perimeter);
    printf("Area: ");
    printf("%f\n", area);

    return 0;
}