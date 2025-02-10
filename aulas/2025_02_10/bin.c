#include <stdio.h>
#include <stdlib.h>

struct Person {
    int id;
    char name[61];
    char email[61];
    int age;
};

typedef struct Person person;

void write_data(FILE* file){
    int a = 5;
    fwrite(&a, sizeof(int), 1, file);

    float b = 2.7;
    fwrite(&b, sizeof(int), 1, file);

    person p = {1, "John Doe", "john@email.com", 28};
    fwrite(&p, sizeof(person), 1, file);

    int v[] = {1,2,3,4,5,6,7,8,9,10};
    fwrite(v, sizeof(int), 10, file);
}

void read_data(FILE* file){
    int a;
    fread(&a, sizeof(int), 1, file);

    float b;
    fread(&b, sizeof(int), 1, file);

    person p;
    fread(&p, sizeof(person), 1, file);

    int v[10];
    fread(v, sizeof(int), 10, file);

    printf("int: %d\n", a);
    printf("float: %f\n", b);
    printf("Person: {%d, %s, %s, %d}\n", p.id, p.name, p.email, p.age);
    printf("Vetor: [ ");
    for (int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("]\n");
}

int main(int argc, char const *argv[]){
    // fread(&addr, sizeof(type), amount, FILE*) -> lê qualquer coisa em um arquivo
    //fwrite(&addr, sizeof(type), amount, FILE*) -> escreve qualquer coisa em um arquivo
    char* filepath = "dados.txt";
    FILE* file = fopen(filepath, "w+");

    if (file == NULL){
        printf("Somehing went wrong...\n");
        return 1;
    }

    // write_data(file);

    // rewind(file);

    // read_data(file);

    person v[20];
    for (int i = 0; i < 20; i++){
        person p;
        p.id = i+1;
        p.age = rand() % 100 + 1;
        sprintf(p.name, "John Doe %d", p.id);
        sprintf(p.email, "john@email.com");
        v[i] = p;
    }
    
    fwrite(v, sizeof(person), 20, file);

    // posiciona o cursor no inicio do quarto registro
    int pos = 4;
    fseek(file, sizeof(person)*pos, SEEK_SET);
    
    // lê o registro
    person p;
    fread(&p, sizeof(person), 1, file);

    // altera o registro
    p.id = 99;
    sprintf(p.email, "outro@email.pocotó");

    // 'volta' na pessoa a ser alterada
    fseek(file, sizeof(person)*pos, SEEK_SET);
    //substitui o registro escolhido
    fwrite(&p, sizeof(person), 1, file);

    fclose(file);
    return 0;
}
