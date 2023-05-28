#include <stdlib.h>
#include <stdio.h>

int main() {
   int *p;

   // Alocando memória
   p = (int*) malloc(3 * sizeof(int));
   p[0] = 1;
   p[1] = 2;
   p[2] = 3;

   // Realocando memória
   p = (int*) realloc(p, 5 * sizeof(int));
   p[3] = 4;
   p[4] = 5;

   // Usando a memória alocada e realocada
   for(int i = 0; i < 5; i++) {
      printf("%d ", p[i]);
   }

   // Liberando memória
   free(p);

   return 0;
}
