// 15.  Dizemos que um número i é congruente módulo m a j se i % m = j % m.
//Exemplo: 35 é congruente módulo 4 a 39, pois 35 % 4 = 3 = 39 % 4.
//Dados inteiros positivos n, j e m, imprimir os n primeiros naturais congruentes a j módulo m.

#include <stdio.h>

int main()
{
    // Variaveis

    int cont = 1, num, divi, divm, divj = 0;
    
    // Explicação

    printf("-----------------------------------------\n");
    printf("VAMOS VERIFICAR SE UM NUMERO É CONGRUENTE\n");
    printf("-----------------------------------------\n");

    // Código

    printf("Quantos numeros você quer na sequencia? ");
    scanf("%d", &num);

    printf("Qual numero você quer testar sendo dividido? ");
    scanf("%d", &divi);

    printf("Qual numero você quer testar sendo dividendo? ");
    scanf("%d", &divm);
    
    while (cont <= num) {
        if (divi%divm == divj%divm) {
            printf("%d. | %d | - O resto é Igual a - | %d |\n",cont, divi, divj);
            cont++;
        }
        divj++;
    }
    return 0;
}