#include <stdio.h>

void reset(int* n){ // retorno via parâmetro
    *n = 0;
}

int main(){
    int a = 5;
    char b = 'F';
    printf(" &a: %d -> %p\n", a, &a);
    printf(" &b: %c -> %p\n", b, &b);

    int* p_a = &a; // o ponteiro avisa o tipo de dado contido no endereço (tamanho varia com a arquitetura)
    printf("p_a: %d -> %p\n", *p_a, p_a);
    *p_a = 6; // a = 6

    reset(&a);
    int** p_pa = &p_a;
    printf("%p\n", p_pa); // &p_a
    printf("%p\n", *p_pa); // &a == p_a
    printf("%d\n", **p_pa); // a

    // Artimetica de ponteiros: ponteiro referencia QUALQUER endereço de memória
    int v1[] = {1,2,3,4,5,6};
    int* p_v1 = v1;
    p_v1 += 3; // essencialmente v1[3] (vetores são ponteiros de leitura)
    *p_v1 = 99; // literalmente v1[3] = 99
    p_v1 = v1;
    for (int i = 0; i < 6; i++){
        printf("loop -> p_v1[%d] == %d\n", i, *p_v1);
        p_v1++;
    }
    
    return 0;
}