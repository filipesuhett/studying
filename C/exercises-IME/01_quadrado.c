// 1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.

#include <stdio.h>

int main() {
     // Variaveis
    
    int numero = 0;

    int quadrado;

    // Aviso

    printf("--------------------------------\n");
    printf("O numero ZERO Encerra o Programa\n");
    printf("--------------------------------\n");
    
    // Código

    printf("Qual numero deseja saber o quadrado? ");
    
    scanf("%d", &numero);

    while (numero != 0) {
        quadrado = numero*numero;
        printf("O Quadrado de %d é: %d\n", numero, quadrado);
        printf("Qual numero deseja saber o quadrado? ");
        scanf("%d", &numero);
    }

    return 0;
}