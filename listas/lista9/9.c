#include <stdio.h>
#include <string.h>
#include <limits.h>
/*
Escreva uma função que recebe o endereço de uma string str e de um vetor de strings words (de
até 49 caracteres). A função deve devolver o endereço da string de words que seja mais similar à
str, isto é, com a menor distância de Hamming. OBS: faça chamadas à função do exercício anterior
para encontrar as distâncias entre str e cada uma das palavras em words.
*/

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

char* find_most_similar(const char* str, int n, char list[n][50]){
    int simillarity = INT_MAX;
    char* p_sim;

    for (int i = 0; i < n; i++){
        int hamming = get_hamming_distance(str, *(list+i));
        if (hamming < simillarity){
            simillarity = hamming;
            p_sim = list[i];
        }
    }

    return p_sim;
}

int main(){
    char words[][50] = {"cabana", "savana", "bacana", "halana"};
    char* most_similar = find_most_similar("banana", 4, words);
    printf("%s\n", most_similar);
    return 0;
}