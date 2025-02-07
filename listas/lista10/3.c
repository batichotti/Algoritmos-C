#include <stdio.h>
#include <stdlib.h>
// Escreva uma função que receba o endereço de uma string. A função deve retornar o endereço de
// uma cópia da string alocada na heap.

char* copy_string(const char* str){
    int i;
    for(i = 0; str[i] != 0; i++){}
    char* p = malloc(sizeof(char)*(i+1));

    for (int j = 0; j < i+1; j++){
        p[j] = str[j];
    }
    return p;
}

int main(int argc, char const *argv[]){
    char* p = copy_string("Tottenham Hotspourt Sport Club de Regatas!");

    for (int i = 0; p[i] != 0; i++){
        printf("p[%d] = %c\n", i, *(p+i));
    }
    
    free(p);
    return 0;
}
