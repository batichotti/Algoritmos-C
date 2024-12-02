#include <stdio.h>

int main() {
    int a = 5; // 00 00 00 05 ou 05 00 00 00
    char* b = (char*) &a;

    for (int i = 0; i < 4; i++){
        printf("%02X\n", b[i]);
    }
    

    return 0;
}