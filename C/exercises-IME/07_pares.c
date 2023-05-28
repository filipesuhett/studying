// 7.  Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares.

#include <stdio.h>

int main()
{
    // Variaveis

    float resto;
    int cont = 0;
    int tam;
    int num;
    int soma = 0;
    
    // Explicação

    printf("--------------------------------------------------------------------------------------\n");
    printf("ESSE PROGRAMA SOMA OS NUMEROS PARES DE UMA SEQUENCIA DE NUMEROS DIGITADAS PELO USUARIO\n");
    printf("--------------------------------------------------------------------------------------\n");

    // Código

    printf("Quantos numeros vai digitar? ");
    scanf("%d", &tam);

    while (cont < tam)
    {   printf("| ITEM %d | - Qual o numero que deseja digitar? ", cont+1);
        scanf("%d", &num);

        if (num%2 == 0) {
            soma = soma + num;
        }
        cont++;
    }

    printf("A soma dos numeros pares é: %d", soma);

    return 0;
}