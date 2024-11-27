#include <stdio.h>

int main(){
    int a = 5;
    char b = 'F';
    printf(" &a: %d -> %p\n", a, &a);
    printf(" &b: %c -> %p\n", b, &b);

    int* p_a = &a; // o ponteiro avisa o tipo de dado contido no endereço (tamanho varia com a arquitetura)
    printf("p_a: %d -> %p\n", *p_a, p_a);
    return 0;
}