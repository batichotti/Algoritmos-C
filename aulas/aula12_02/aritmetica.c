#include <stdio.h>

int main() {
    int a = 5; // 00 00 00 05 ou 05 00 00 00
    char* b = (char*) &a;

    for (int i = 0; i < 4; i++){
        printf("%02X ", b[i]);
    }
    
    printf("\n\n");

    int v[] = {1,4,9,1,2,5,7}; // vetores são ponteiros
    int* p = v;

    printf("addr -> %p\n", p);
    printf("*p -> %d\n", *p);
    
    for (int i = 0; i < 7; i++){
        printf("%d ", *p); // ou *(v + i)
        p++;
    }
    printf("\n");
    return 0;
}