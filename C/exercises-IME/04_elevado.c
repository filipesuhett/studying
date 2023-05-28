// 4. Dados um inteiro x e um inteiro não-negativo n, calcular x^n.

#include <stdio.h>
#include <math.h>

int main()
{
    // Variaveis

    int numero;

    int cofi;

    int elevar;

    // Código

    printf("Qual numero quer que seja a base? ");
    scanf("%d", &numero);

    printf("Qual numero quer elevar a essa base? ");
    scanf("%d", &cofi);

    elevar = (pow(numero, cofi) + 0.5);
    printf("A potenciação desses dois numero da: %d \n", elevar);

    return 0;
}