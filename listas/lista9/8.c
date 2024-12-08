#include <stdio.h>
#include <string.h>

int get_hamming_distance(const char* str1, const char* str2){
    int hamming = 0;
    if (strlen(str1) != strlen(str2)){
        printf("Strings with different sizes");
        return -1;
    }

    for (int i = 0; *(str1+i) != 0; i++){
        if (*(str1+i) != *(str2+i)){
            hamming++;
        }
    }

    return hamming;
}

int main(){
    printf("%d", get_hamming_distance("banana", "cabana"));
    return 0;
}