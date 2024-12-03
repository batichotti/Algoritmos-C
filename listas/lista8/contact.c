#include <stdio.h>
/*
Escreva uma função que recebe um Contact (ver struct abaixo) e imprime seu conteúdo. A função
também recebe um vetor de strings contendo os nomes dos tipos type_names e seu tamanho n. O
campo type do contato deve ser utilizado como índice no vetor type_names.
*/

struct contact {
    int id;
    char name[51];
    char email[51];
    int type;
};
typedef struct contact Contact;

void print_contact(Contact c, int n, char type_names[n][50]){
    printf("{%d, %s, %s, %s}\n", c.id, c.name, c.email, type_names[c.type]);
}

int main(){
    char types[5][50] = {"Família","Amigos","Trabalho","Escola","Outros"};
    Contact c = {1, "John Doe", "john.doe@email.com", 2};
    print_contact(c, 5, types);

    return 0;
}