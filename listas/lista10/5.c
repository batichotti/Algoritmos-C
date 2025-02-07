#include <stdio.h>
#include <stdlib.h>
// Escreva uma função que concatene duas strings e retorne o resultado em uma nova string, alocada
// na heap.

char* concat_string(const char* str1, const char* str2){
    int size1;
    for(size1=0;str1[size1]!=0;size1++){}
    int size2;
    for(size2=0;str2[size2]!=0;size2++){}
    
    char* p = malloc(sizeof(char)*(size1+size2));

    for (int i = 0; i < size1; i++){
        p[i] = str1[i];
    }
    for (int i = 0; i < size2; i++){
        p[i+size1] = str2[i];
    }

    p[size1+size2] = 0;

    return p;
}

int main(int argc, char const *argv[]){
    
    char* p = concat_string("Mengão Malvadeza", " Campeão Mundial de 1981!");

    for (int i = 0; p[i] != 0; i++){
        printf("%c", p[i]);
    }
    
    return 0;
}
