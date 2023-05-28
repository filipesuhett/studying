#include <stdlib.h>
#include <stdio.h>

int main() {
   int i, j, n = 100;
   int **matriz;

   // Alocando memória para a matriz
   matriz = (int**) malloc(n * sizeof(int*));
   for(i = 0; i < n; i++) {
      matriz[i] = (int*) malloc(n * sizeof(int));
   }

   // Liberando memória da matriz
   for(i = 0; i < n; i++) {
      free(matriz[i]);
   }
   free(matriz);

   return 0;
}