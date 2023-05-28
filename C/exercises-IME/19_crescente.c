// 19.  Dados três números, imprimi-los em ordem crescente.

#include <stdio.h>

int main()
{
    // Variaveis

    int a, b, c, aux;
    
    // Explicação

    printf("----------------------------------------------\n");
    printf("DADOS 3 NUMEROS IMPRIMI-LOS NA ORDEM CRESCENTE\n");
    printf("----------------------------------------------\n");

    // Código

    printf("Digite 3 Numeros inteiros? | DIFERENTES |: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a > b && b > c && a > c) {
        printf("| %d | > | %d | > | %d | ", a, b, c);
    }

    else if (b > c && c > a) {
        printf("| %d | > | %d | > | %d | ", b, c, a);
    }

    else if (b > c && a > c) {
        printf("| %d | > | %d | > | %d | ", b, a, c);
    }

    else {
        printf("| %d | > | %d | > | %d | ", c, b, a);
    }
    return 0;
}