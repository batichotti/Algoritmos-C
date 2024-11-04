#include <stdio.h>
/*
 Escreva uma função que recebe uma string e imprime:
a. A quantidade de letras (maiúsculas ou minúsculas);
b. A quantidade de dígitos;
c. A quantidade de símbolos.
OBS: considere apenas a porção dos caracteres imprimíveis da tabela ASCII, isto
é, dos índices 32 ao 126.
*/

void string_report(char* str){
    int count_letters = 0;
    int count_numbers = 0;
    int count_symbols = 0;

    for (int i = 0; str[i] != 0; i++){
        if (str[i] >= 48 && str[i] <= 57){
            count_numbers++;
        } else if ( ( str[i] >= 65 && str[i] <= 90 ) || ( str[i] >= 97 && str[i] <= 122) ){
            count_letters++;
        } else {
            count_symbols++;
        }
    }

    printf("Symbols: %d\nLetters: %d\nNumbers: %d", count_symbols, count_letters, count_numbers);
}

int main(){
    char str[] = "A porra do Gabigol fez 2 gols depois de 1 ano sem fazer nada!!";

    string_report(str);

    return 0;
}