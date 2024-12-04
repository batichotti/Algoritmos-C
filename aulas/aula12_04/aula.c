#include <stdio.h>

struct Person{
    int id;
    char nome[51];
};

typedef struct Person Person;

void set_person(Person* p){
    p->id = 0;
    sprintf(p->nome, "Oscar");
}

int main() {

    int a = 9;
    int* p = &a;

    int v[] = {1,2,3,4,5,6,7};
    int* pv = v; // pv = &v[0]
    pv++; //pv = &v[1]
    pv--; //pv = &v[0]

    for (int i = 0;i < 7;i++) {
        printf("%d\n", *pv);
        pv++;
    }

    //Ponteiros + Struct
    Person p1 = {1, "João Ninguém"};
    Person* pp = &p1;

    printf("%d\n", (*pp).id);
    printf("%d\n", pp->id);

    Person vP[10];
    Person *vector_pp = vP;
    
    for (int i = 0; i < 10; i++){
        vP[i].id = i;
        sprintf(vector_pp->nome, "Kepa");
        vector_pp++;
    }

    vector_pp -= 10;
    set_person(vector_pp+4);

    for (int i = 0; i < 10; i++){
        printf("{%d, %s}\n", vector_pp->id, vector_pp->nome);
        vector_pp++;
    }

    return 0;
}