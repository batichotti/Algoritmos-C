#include <stdio.h>
#include <string.h>

void make_mirrored(char* str){
    int i;
    for (i = 0; *(str+i) != 0; i++){
        printf("%c", *(str+i));
    }
    printf("|");
    for (i = i; i > 0; i--){
        printf("%c", *(str+i));
    }

}

int main(){
    char name[40] = "John Doe";
    make_mirrored(name);
    printf("%s\n", name);
    return 0;
}