#include <stdio.h>
#include <stdlib.h>
// Escreva uma função que recebe o endereço e as dimensões de uma matriz alocada na heap. A
// função deve imprimir seu conteúdo. Lembre-se: dentro da função, o acesso aos elementos da
// matriz v ocorre normalmente por meio do operador de índice. Ex: v[0][2].

void print_vector2D(int m, int n, const int** v){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("v[%d][%d] = %d\n", i, j, v[i][j]);
        }
    }
}

int main(int argc, char const *argv[]){
  int m = 3;
  int n = 4;

  int** v = (int**)malloc(m * sizeof(int*));
  for (int i = 0; i < m; i++) {
    v[i] = (int*)malloc(n * sizeof(int));
  }

  int valor = 1;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      v[i][j] = valor++;
    }
  }
    
    print_vector2D(3, 4, v);

    return 0;
}
