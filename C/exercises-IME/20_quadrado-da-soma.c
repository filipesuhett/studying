// 20.  (FIS 88) Qualquer número natural de quatro algarismos pode ser dividido em duas dezenas formadas pelos seus dois primeiros e dois últimos dígitos.

#include <math.h>;
#include <stdio.h>;

int main()
{
    // Variaveis

    int cont, come, final, conaux = 1;
    
    // Código
    
    for (cont = 1000; cont <= 9999; cont++) {
        final = cont%100;
        come = cont/100;
        
        if (final + come == (float) pow(cont, 0.5)) {
            printf("%d. | %d |\n", conaux, cont);
            ++conaux;
        }
    }

    return 0;
}