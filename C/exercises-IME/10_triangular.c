// 10.  Dizemos que um número natural é triangular se ele é produto de três números naturais consecutivos.
//Exemplo: 120 é triangular, pois 4.5.6 = 120.
//Dado um inteiro não-negativo n, verificar se n é triangular.

#include <stdio.h>

int main()
{
    // Variaveis

    int cont = 0, num, bol = 0;
    
    // Explicação

    printf("-----------------------------------------\n");
    printf("VERIFICA SE UM NUMERO É TRIANGULAR OU NÃO\n");
    printf("-----------------------------------------\n");

    // Código

    printf("Qual numero quer ver se é Triangular? ");
    scanf("%d", &num);

    while (bol == 0 ) {
        if (((cont+1)*(cont+2)*(cont+3)) == num) {
            bol = 1;
            printf("%d é triangular, pois %d.%d.%d = %d", num, cont+1, cont+2, cont+3, num);
        }
        if (((cont+1)*(cont+2)*(cont+3)) > num) {
            bol = 1;
            printf("%d não é Triangular", num);
        }
        cont++;
    }

    return 0;
}