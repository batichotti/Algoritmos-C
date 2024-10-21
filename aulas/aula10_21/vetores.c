#include <stdio.h>

int main(){
    int v[16], n;
    v[13] = 13;
    n = 64;
    int vec_variable[n];
    int v0[13] = {0}; // vetores de valor fixo se preenchem sozinhos com 0 nesse caso (preenche a primeira com o valor dito e o resto mandatoriamente com zeros)
    int v_misterioso = {1,2,34,5,6,77,8,99,-1};

    for (int i = 0; i < n; i++){
        printf("%d\n", vec_variable[i]);
    }
    
    return 0;
}
