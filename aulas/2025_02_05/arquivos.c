#include <stdio.h>


int main(int argc, char const *argv[]) {

    FILE* file;
    char* path = "texto.txt";
    file = fopen(path, "r");

    char c = fgetc(file);
    for (int i = 0; c != EOF; i++){
        printf("%c", c);
        c = fgetc(file);
    }
    
    return 0;
}