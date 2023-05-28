// 21.  (POLI 87) Dados n e uma seqüência de n números inteiros, determinar quantos segmentos de números iguais consecutivos compõem essa seqüência.
// Exemplo: A seguinte seqüência é formada por 5 segmentos de números iguais:   5,  2,  2,  3,  4,  4,  4,  4,  1,  1

#include <math.h>;
#include <stdio.h>;

int main() {
    // Variaveis

    int tam, num1, num2, troca = 1, cont;
    
    // Código

    printf("Quantos numeros serão digitados? ");
    scanf("%d", &tam);

    printf("Qual o primeiro numero da sequencia? ");
    scanf("%d", &num1);
    
    for (cont = 1; cont < tam; cont++) {
        
        printf("Qual o proximo numero da sequencia? ");
        scanf("%d", &num2);
        
        if (num1 != num2) {
            troca++;
        }
        
        num1 = num2;
    }

    printf("| %d |", troca);

    return 0;

}