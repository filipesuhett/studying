#include <stdio.h>

int coffe(int a, int b, int c)
{
    // Variaveis

    int a1, b1, c1;

    // Código

    a1 = 2*b + 4*c;
    b1 = 2*a + 2*c;
    c1 = 4*a + 2*b;
    
    if (a1 <= b1 & a1 <= c1) {
        printf("%d", a1);
    }
    else if (b1 <= c1) {
        printf("%d", b1);
    }
    else {
        printf("%d", c1);
    }

    return 0;
}