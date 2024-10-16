#include <stdio.h>

int main(){
    printf("Informe inteiros (0 para sair):\n> ");

    int sum = 0;
    int num;

    scanf(" %d", num); // 1 - LÊ
    while(num != 0){   // 2 - VERIFICA
        sum += num;    // 3 - SOMA
        scanf(" %d", num); // 1 - LÊ
    }

    return 0;
}