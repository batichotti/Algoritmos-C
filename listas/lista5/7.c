#include <stdio.h>
#include <math.h>
/*
Escreva uma função que recebe pontos X,Y em um vetor points de tamanho n. O vetor conterá os
pontos sequencialmente: [X1, Y1, X2, Y2, X3, Y3,...]. A função deve informar a distância entre cada
par de pontos consecutivos. Distância: sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) ). Função square
root: https://www.tutorialspoint.com/c_standard_library/c_function_sqrt.htm).
*/

void distances(int n, int* points){
    for (int i = 0; i < n; i += 4){
        printf("%d\n", sqrt( (points[i+2]-points[i])*(points[i+1]-points[i]) + (points[i+3]-points[i+1])*(points[i+3]-points[i+1]) ));
        if ((i+=4)>n){
            printf("Apenas %d distancias calculadas por conta da quantidade de pontos informados", (n/4));
            break;
        }
        
    }
    
}

int main(){
    int n;
    n = 10;
    int vector[n];

    distances(n, vector);
    return 0;
}