// 12.  Dados dois números inteiros positivos, determinar o máximo divisor comum entre eles usando o algoritmo de Euclides.

#include <stdio.h>;

int main()
{
    // Variaveis

    int bol = 0, num1, num2, divn, i1, i2;
    
    // Explicação

    printf("----------------------------------------------------\n");
    printf("VAMOS CALCULAR O MDC DE DOIS NUMEROS USANDO EUCLIDES\n");
    printf("----------------------------------------------------\n");

    // Código

    printf("Qual o primeiro numero do MDC? |MAIOR| ");
    scanf("%d", &num1);

    printf("Qual o segudno numero do MDC? |MENOR| ");
    scanf("%d", &num2);

    i1 = num1;
    i2 = num2;
    
    while (bol == 0) {
        divn = i1%i2;
        if (divn == 0) {
            printf(" MDC de: | %d | e | %d | é | %d | ", num1, num2, i2);
            bol = 1;
        }
        else {
            i1 = i2;
            i2 = divn;
        }
    }
    return 0;
}