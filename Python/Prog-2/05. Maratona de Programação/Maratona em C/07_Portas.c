#include <stdio.h>

int portas(int n)
{
    // Código

    for (int cont = 1; cont*cont <= n; cont++) {
        printf("%d ", cont*cont);
    }

    return 0;
}