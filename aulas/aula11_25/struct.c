#include <stdio.h>

struct Person{
    int id;
    char nome[61];
    char email[61];
    char ra[9];
};

typedef struct Person Person;

int main(){
    Person p1 = {2, "Jhon Doe", "john.doe@email.com", "a2222222"};

    printf("{%d, %s, %s, %s}\n", p1.id, p1.nome, p1.email, p1.ra);

    return 0;
}