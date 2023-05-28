// Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
// Exemplo: Para n=4 a saída deverá ser 1,3,5,7.

#include <stdio.h>

int main()
{
    // Variaveis

    int numero;

    int cont = 0;

    int impar = 1;

    // Código

    printf("Quantos numeros impares deseja ver? ");
    scanf("%d", &numero);

    printf("Os %d primeiros numeros impares são: \n", numero);

    while (cont < numero)
    {
        printf("| %d ", impar);
        impar = impar + 2;
        cont++;
    }
    printf("|");
    return 0;
}