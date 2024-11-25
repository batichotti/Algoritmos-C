#include <stdio.h>
#include <stdlib.h>

int main(){

    char nomes[][15] = {
        "Marcos", "Bernabei", "Rocha", "Guardiola", "Eder", "Pinto", "Grande", "Cuca", "Beludo", "Giorno", "Giovanna", "Pierre"
    };

    for (int i = 0; i < 10; i++){
        for (int j = 0; j <= rand()%3+2; j++){
            printf("%s ", nomes[rand()%13]);
        }
        printf("\n");
    }
    
    return 0;
}