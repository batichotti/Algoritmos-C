#include <stdio.h>
/*
transformar um vetor inteiro (valores em modulo ate 9) em string
*/

void integer_vector_to_string(int n, const int* v, char* str){
    
    int k = 0;
    for (int i = 0; i < n; i++){
        if (v[i] >= 0){
            str[k] = v[i] + 48;
            str[k+1] = ' ';
            k += 1;
        } else {
            str[k] = '(';
            str[k+1] = -1*v[i] + 48;
            str[k+2] = ')';
            str[k+3] = ' ';
            k += 3;
        }
        k++;
    }
}

int main() {

    int v[10] = {-1, 2, -3, 4, -5, 6, -7, 8, 9, 0};
    char str[100];

    integer_vector_to_string(10, v, str);

    printf("%s", str);

    return 0;
}