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

void print_person(const Person* p){
    printf("{%d, %s}\n", p->id, p->nome);
}

void print_hello(){
    printf("Hello!\n");
}

void for_each(int n, int* v, int (*fun)(int e)){
    for (int i = 0; i < n; i++){
        v[i] = fun(v[i]);
    }
}

int sum_one(int i){
    return i+1;
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
        print_person(vector_pp);
        vector_pp++;
    }

    vector_pp -= 10;

    //Ponteiro de funções

    void (*p_func)() = print_hello;
    p_func();

    void (*init_person)(Person* p) = set_person;
    init_person(vector_pp);

    int v1[] = {12,45,8};
    for_each(3,v1,sum_one);
    
    for (int i = 0; i < 3; i++){
        printf("%d\n", *(v1+i) );
    }
    
    return 0;
}