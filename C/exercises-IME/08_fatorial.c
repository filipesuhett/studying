// 8.  Dado um inteiro não-negativo n, determinar n!

#include <stdio.h>

int main()
{
    // Variaveis

    int cont = 1;
    int num;
    int fato = 1;
    
    // Explicação

    printf("----------------------------------------\n");
    printf("FAZ O FATORIAL DE UM NUMERO NÃO NEGATIVO\n");
    printf("----------------------------------------\n");

    // Código

    printf("Qual fatorial quer que façamos? ");
    scanf("%d", &num);

    while (cont < num ) {
        fato = fato + (fato * cont);
        cont++;
    }

    printf("| FATORIAL DE %d | = %d", num, fato);

    return 0;
}