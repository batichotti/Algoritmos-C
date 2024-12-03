#include <stdio.h>
/*
Escreva uma função que imprime um array de n strings de até len-1 letras.
*/

void print_strings(int n, int len, char list[n][len]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < len-1; j++){
            printf("%c", list[i][j]);
        }
        printf("\n");
    }
    
}

int main(){
    char v[6][20] = {"John", "Mary", "Jake", "Finn", "Ada", "Michael"};
    print_strings(6, 20, v);

    return 0;
}