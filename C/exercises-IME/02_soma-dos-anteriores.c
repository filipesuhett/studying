// Programa que lê um inteiro positivo n e imprime o valor da soma 1 + 2 + 3 + ... + n.

#include <stdio.h>

int main() {
     // Variaveis
    
    int numero;

    int cont;

    int soma = 0;
    
    // Código

    printf("Qual numero deseja somar com seus anteriores? ");
    scanf("%d", &numero);

    cont = numero;

    while (cont > 0) {
        soma = cont + soma;
        cont--;
    }

    printf("A soma dos numeros anteriores de %d é: %d\n", numero, soma);

    return 0;
}