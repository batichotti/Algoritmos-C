#include <stdio.h>

struct Person{
    int id;
    char nome[61];
    char email[61];
    char ra[9];
};

typedef struct Person Person;

void print_person(Person p){
    printf("{%d, %s, %s, %s}\n", p.id, p.nome, p.email, p.ra);
}

int main(){
    Person p1 = {2, "Jhon Doe", "john.doe@email.com", "a2222222"};
    Person p2 = p1;

    print_person(p1);
    print_person(p2);

    return 0;
}