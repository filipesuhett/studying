// 22.  (POLI 89) Dados n e uma seqüência de n números inteiros, determinar o comprimento de um segmento crescente de comprimento máximo.
// Exemplos:
// Na seqüência   5,  10,  3,  2,  4,  7,  9,  8,  5   o comprimento do segmento crescente máximo é 4.
// Na seqüência   10,  8,  7,  5,  2   o comprimento de um segmento crescente máximo é 1.

#include <math.h>;
#include <stdio.h>;

int main() {
    // Variaveis

    int tam, num1, num2, maior = 1, cont, salvo = 0;
    
    // Código

    printf("Quantos numeros serão digitados? ");
    scanf("%d", &tam);

    printf("Qual o primeiro numero da sequencia? ");
    scanf("%d", &num1);
    
    for (cont = 1; cont < tam; cont++) {
        
        printf("Qual o proximo numero da sequencia? ");
        scanf("%d", &num2);
        
        if (num1 < num2) {
            maior++;
        }

        else if (maior > salvo) {
            salvo = maior;
            maior = 1;
        }
        
        num1 = num2;
    }

    if (maior > salvo) {
            salvo = maior;
        }

    printf("| %d |", salvo);

    return 0;

}