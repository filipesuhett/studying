// 13.  (MAT 89) Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.
//Exemplo: 6 é perfeito, pois 1+2+3 = 6.
//Dado um inteiro positivo n, verificar se n é perfeito.

#include <stdio.h>

int main()
{
    // Variaveis

    int cont, num, soma = 0;
    
    // Explicação

    printf("----------------------------------------------\n");
    printf("VAMOS VERIFICAR SE UM NUMERO É PERFEITO OU NÃO\n");
    printf("----------------------------------------------\n");

    // Código

    printf("Qual numero quer verficar se é Perfeito? ");
    scanf("%d", &num);
    
    for (cont = 1; cont <= num/2; cont++) {
        if (num%cont == 0) {
            soma = soma + cont;
        }
    }
        
    if (soma == num) {
        printf("| %d | - É perfeito", num);
    }
    else {
        printf("| %d | - Não é perfeito", num);
    }
    return 0;
}