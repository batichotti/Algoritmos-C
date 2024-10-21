#include <stdio.h>

float mean3(float a, float b, float c){
    float mean = (a+b+c)/3;

    return mean;
}

int main(){
    float a, b, c, mean;
    printf("Insira valores para descobrir a média:\n> ");
    scanf(" %f %f %f", &a, &b, &c);
    mean = mean3(a, b, c);
    printf("Mean: %f", mean);
    return 0;
}