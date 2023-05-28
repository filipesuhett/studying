// 9.  Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.
//Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8.

#include <stdio.h>

int main() 
{
  
  // variaveis
  int num1, num2, n,
      multi, multj,
      k;
  
    // prints e inputs

  printf("\n\tCalculo dos n primeiros multiplos de i ou de j\n");
  printf("\nDigite o numero de multiplos a serem impressos: ");
  scanf("%d", &n);
  printf("Digite os dois numeros: ");
  scanf("%d %d", &num1, &num2);
  
  /* inicializacoes */
  multi = 0;
  multj = 0;
  
  printf("Os %d primeiros multiplos de %d ou de %d sao:", n, num1, num2);
  for (k = 0; k < n; k++)
    {
      if (multi < multj)
	{
	  printf("| %d ", multi);
	  multi = multi + num1;
	}
      else if (multi > multj)
	{
	  printf("| %d ", multj);
	  multj = multj + num2;      
	}
      else
        { 
          printf("| %d ", multj);
          multi = multi + num1;
          multj = multj + num2;
	} 
    }
  printf("|");
  
  return 0;
}