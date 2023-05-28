// 5.  Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos. Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia. 

#include <stdio.h>

int main()
{
    // Variaveis

    int vendi = -1;
    
    int cont = 0;

    int dia;

    int discos;

    // Código

    while (cont < 31)
    {   printf("| DIA %d | - Quantos discos foram vendidos? ", cont+1);
        scanf("%d", &discos);

        if (vendi < discos) {
            dia = cont + 1;
            vendi = discos;
        }
        cont++;
    }

    printf("Dia do Mês: %d | Discos Vendidos no dia: %d", dia, vendi);

    return 0;
}