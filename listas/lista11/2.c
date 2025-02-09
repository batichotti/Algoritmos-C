#include <stdio.h>
// Escreva uma função que receba um caminho de arquivo. Se o mesmo existir, faz nada. Se o
// arquivo não existir, tenta criá-lo. A função deve retornar 1 (um) caso arquivo exista ou tenha sido
// criado e, 0 (zero), caso contrário.

int check_or_create(const char *filepath){
    FILE* file = fopen(filepath, "a");

    if (file == NULL){
        fclose(file);
        return 0;
    } else {
        fclose(file);
        return 1;
    }
    
}

int main(){
    int i = check_or_create("kakaroto.txt");
    printf("%d", i);

    return 0;
}