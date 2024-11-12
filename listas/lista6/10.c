#include <stdio.h>
/*
Escreva uma função que remove os espaços que possam existir antes e depois de uma string.
Neste caso, a função deverá, necessariamente, modificar a string de entrada str.
*/

void string_trim(char* str){
    int i;
    for (i = 0; str[i+1] != 0; i++){
        for (int j = 0; j != i; j++){
            if ( str[i] == ' ' && str[i+1] != ' '){
                str[i] = str[i+1];
                str[i+1] = ' ';
                break;
            }
        }
    }
    
    for (int i = 0; str[i] != 0; i++){
        /* code */
    }
    
}

int main(){
    char str[] = "   em      dez e m b r     o    de      oitenta e  um    ";
    string_trim(str);
    printf("%s", str);

    return 0;
}