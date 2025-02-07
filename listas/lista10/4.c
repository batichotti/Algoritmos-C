#include <stdio.h>
#include <stdlib.h>
// Escreva uma função que receba o endereço de uma string. A função deve retornar o endereço de
// uma cópia reversa da string alocada na heap.

char* copy_reverse(const char* str){
    int i;
    for(i = 0; str[i] != 0; i++){}
    char* p = malloc(sizeof(char)*(i+1));

    int j = 0;
    i--;
    while(i >= 0){
        p[j] = str[i];
        j++;
        i--;
    }
    p[j] = '\0';

    return p;
}

int main(int argc, char const *argv[]){
    char* p = copy_reverse("Tottenham Hotspourt Sport Club de Regatas!");

    for (int i = 0; p[i] != 0; i++){
        printf("p[%d] = %c\n", i, *(p+i));
    }
    
    free(p);
    return 0;
}
