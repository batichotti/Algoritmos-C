#include <stdio.h>
/*
Escreva uma função que retorna a quantidade de palavras em um array de n linhas de texto
(strings de até len-1 letras). Considere que poderá haver mais de um espaço entre cada palavra,
bem como, espaços no início ou final de cada string.
*/

int count_words(int n, int len, char lines[n][len]){
    int flag = 0; // 0 -> espaço e 1 -> letra
    int counter = 0;

    for (int j = 0; j < n; j++){
        for (int i = 0; lines[j][i] != 0; i++){
            if (lines[j][i] == ' ' && flag == 1){
                counter++;
                flag = 0;
            }
            if (lines[j][i] != ' ' && flag == 0){
                flag = 1;
            }
        }
        if (flag == 1){
            counter++;
            flag = 0;
        }
    }

    return counter;
}

int main(){
    char v[2][200] = {
        " Computer programming is the process of designing and building an executable computer program for accomplishing a specific computing task.",
        " Programming involves tasks such as analysis, generating algorithms, profiling algorithms accuracy and resource consumption, and the implementation of algorithms in a chosen programming language."
        };
    int count = count_words(2, 200, v);
    printf("Numero de palavras: %d\n", count);
}
