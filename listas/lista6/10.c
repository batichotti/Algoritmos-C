#include <stdio.h>
#include <string.h>
/*
Escreva uma função que remove os espaços que possam existir antes e depois de uma string.
Neste caso, a função deverá, necessariamente, modificar a string de entrada str.
*/

void string_trim(char* str) {
    int i;
    for (i = 0; str[i] != 0; i++){ // encontra o primeiro caracter diferente de espaço
        if (str[i] != ' '){
            break;
        }
    }

    int j;
    for (j = strlen(str)-1; j > 0; j--){ //encontra o último caracter diferente de espaço
        if (str[j] != ' '){
            break;
        }
    }

    int k;
    for (k = 0; k+i <= j; k++){ // reconstroi a string sem os espacos
        str[k] = str[k+i];
    }
    str[k] = 0;
}

int main() {
    char str[] = "         em dezembro de oitenta e um        ";
    string_trim(str);
    printf("%s\n", str);

    return 0;
}
