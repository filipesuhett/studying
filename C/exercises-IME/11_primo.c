// 11.  Dado um inteiro positivo n, verificar se n é primo.

#include <stdio.h>

int main()
{
    // Variaveis

    int cont, num, divn = 0;
    
    // Explicação

    printf("---------------------------------------\n");
    printf("VERIFICAMOS SE UM NUMERO É PRIMO OU NÃO\n");
    printf("---------------------------------------\n");

    // Código

    printf("Qual numero quer verificar? ");
    scanf("%d", &num);

    for (cont = 1; cont <= num; cont++) {
        if (num%cont == 0) {
            divn++;
        }
    }

    if (divn == 2) {
        printf("| %d | - É Primo", num);
    }
    else {
        printf("| %d | - Não é Primo", num);
    }

    return 0;
}