// 18.  Dados três números naturais, verificar se eles formam os lados de um triângulo retângulo.

#include <stdio.h>

int main()
{
    // Variaveis

    int hip, cata, catb, aux;
    
    // Explicação

    printf("-------------------------------------------------------\n");
    printf("VERIFICAR SE TRES NUMEROS FORMAM UM TRIANGULO RETANGULO\n");
    printf("-------------------------------------------------------\n");

    // Código

    printf("Digite 3 Numeros inteiros? ");
    scanf("%d", &hip);
    scanf("%d", &cata);
    scanf("%d", &catb);

    
    if (cata > hip) {
        aux = cata;
        cata = hip;
        hip = aux;
    }

    if (catb > hip) {
        aux = catb;
        catb = hip;
        hip = aux;
    }

    if (hip*hip == catb*catb + cata*cata) {
        printf("É um triangulo Retangulo\n");
    }
    else {
        printf("Não é um triangulo Retangulo\n");
    }
    return 0;
}