#include <stdio.h>
// Escreva uma função que conta todas as ocorrências de uma dada palavra, em um arquivo.

int count_word(const char* filepath, const char* word){

    int flag = 0;
    int idx = 0;
    int count = 0;
    int size;
    for(size = 0; word[size] != 0;size++){}
    FILE* file = fopen(filepath, "r");
    char c = (fgetc(file));
    while(c != EOF){
        if (c == word[idx] && flag == 0){
            flag = 1;
            idx++;
        } else if(flag == 1 && c != word[idx]){
            flag = 0;
            if (idx == ){
                /* code */
            }
            
        }
        
    }
}

int main(int argc, char const *argv[]){
    
    return 0;
}
