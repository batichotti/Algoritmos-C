#include <stdio.h>

struct Person{
    int id;
    char nome[61];
    char email[61];
    char ra[9];
};

typedef struct Person Person;

int main(){
    Person p1 = {2, "Jhon Doe", "john.doe@email.com"};

    return 0;
}