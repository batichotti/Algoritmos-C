#include <stdio.h>
#include <string.h>

struct Contato{
    int id;
    char nome[51];
    char email[51];
};

typedef struct Contato Contato;

void print_contato(Contato* c){
    printf("{%d, %s, %s}", c->id, c->nome, c->email);
}

void replace_email_extension(Contato* c, char email[15]){
    int pos = -1;
    char* email_original = c->email;
    for (int i = 0; i < 51; i++){
        if (*(email_original+i) == '@'){
            pos = i+1;
            break;
        }
    }

    if ((pos != -1) && (pos < 51-15)){
        for (int i = pos;(i < 51) || (*(email+(i-pos)) == 0); i++){
            *(email_original+i) = *(email+(i-pos));
        }
    }   
}

int main(){
    Contato c1 = {1, "Pablo", "pablo@gmail.com"};
    replace_email_extension(&c1, "hotmail.com");
    print_contato(&c1);
    return 0;
}