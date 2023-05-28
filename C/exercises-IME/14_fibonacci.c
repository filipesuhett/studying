// 14.  Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento da população de coelhos (1) através de uma seqüência de números naturais que passou a ser conhecida como seqüência de Fibonacci (2). O n-ésimo número da seqüência de Fibonacci Fn é dado pela seguinte fórmula de recorrência:
//Faça um programa que, dado n, calcula Fn.

#include <stdio.h>

int main()
{
    // Variaveis

    int cont, num, soma = 0, a1 = 1, a2 = 1, seg;
    
    // Explicação

    printf("---------------------------------\n");
    printf("FIBONACCI VAMOS FAZER A SEQUENCIA\n");
    printf("---------------------------------\n");

    // Código

    printf("Quantos numeros quer na sequencia? ");
    scanf("%d", &num);
    
    if (num < 3) { 
        printf("A soma da sequencia de %d itens de fibonacci é - | 1 |", num);
    }
    else {
        for (cont = 2; cont < num; cont++) {
            seg = a2;
            soma = a1 + a2;
            a1 = seg;
            a2 = soma;
        }
        printf("A soma da sequencia de %d itens de fibonacci é - | %d |", num, soma);
    }
    return 0;
}