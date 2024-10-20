#include <stdio.h>

int main(){
    char operador;
    int numero1, numero2;
    float resultado;

    printf("Operador\n> ");
    scanf(" %c", &operador);

    printf("Numero01\n> ");
    scanf(" %d", &numero1);

    printf("Numero02\n> ");
    scanf(" %d", &numero2);

    if (operador == '+'){
        resultado = numero1 + numero2;
    } else if (operador == '-'){
        resultado = numero1 - numero2;
    } else if (operador == '*'){
        resultado = numero1 * numero2;
    } else if (operador == '/'){
        resultado = numero1 / numero2;
    } else if (operador == '%'){
        resultado = numero1 % numero2;
    } else {
        printf("Invalid operator\n");
        return 0;
    }
    

    printf("Expression:\n%d %c %d = %.2f\n", numero1, operador, numero2, resultado);

    return 0;
}