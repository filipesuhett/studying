// 3. Escreva funções para lidar com matrizes triangulares inferiores de dimensão n * n, onde todos os elementos abaixo da diagonal são iguais a
// zero e não devem ser alocados. No entanto, um acesso a um elemento abaixo da diagonal deve retornar o valor zero. Escreva as seguintes
// funções, usando a estratégia de vetor de ponteiros para armazenar a matriz.

//(a) Função para criar uma matriz, onde n representa a dimensão da matriz, inicialmente com os valores todos iguais a zero:

//(b)Função para atribuir o valor de um elemento da matriz, assumindo que i >=j:

//(c) Função para acessar o valor de um elemento da matriz, inclusive elementos acima da diagonal:

//(d)Função para liberar a memória da matriz alocada:

// Escreva uma função main para testar as funções implementadas.

#include <stdio.h>
#include <stdlib.h>

// Função que cria uma matriz triangular superior n x n e a retorna
float **ti_cria(int n)
{
    // Aloca um vetor de n ponteiros para float
    float **mat = malloc(n * sizeof(float *));
    for (int i = 0; i < n; i++)
    {
        // Para cada posição i, aloca um vetor de n floats e atribui a mat[i]
        mat[i] = malloc(n * sizeof(float));
        for (int j = 0; j < n; j++)
        {
            // Inicializa as posições abaixo da diagonal principal com zero
            if (i >= j)
            {
                mat[i][j] = 0;
            }
        }
    }
    return mat;
}

// Função que atribui o valor x à posição (i,j) da matriz triangular superior
void ti_atribui(int i, int j, float x, float **matriz)
{
    if (i >= j)
    {
        // Se i >= j, a posição (i,j) pertence à matriz triangular superior e pode ser atribuída
        matriz[i][j] = x;
        printf("ADICIONADO!");
    }
    else
    {
        // Caso contrário, a posição (i,j) pertenceria à matriz triangular inferior e não pode ser atribuída
        printf("| CANCELADO | i é menor que j, logo a matriz deixaria de ser triangular inferior\n");
    }
}

// Função que retorna o valor da posição (i,j) da matriz triangular superior
float ti_acessa(int i, int j, float **matriz)
{
    if (i >= j)
    {
        // Se i >= j, a posição (i,j) pertence à matriz triangular superior e pode ser acessada
        return matriz[i][j];
    }
    else
    {
        // Caso contrário, a posição (i,j) pertenceria à matriz triangular inferior e não pode ser acessada
        return 0;
    }
}

// Função para imprimir a matriz triangular superior
void ti_imprime(float **matriz, int n)
{
    // Imprime o título da matriz
    printf("Matriz:\n");
    // Loop para percorrer as linhas da matriz
    for (int i = 0; i < n; i++)
    {
        // Loop para percorrer as colunas da matriz
        for (int j = 0; j < n; j++)
        {
            // Imprime o elemento (i,j) da matriz usando a função ti_acessa
            printf("%.2f ", ti_acessa(i, j, matriz));
        }
        // Pula uma linha ao final de cada linha da matriz
        printf("\n");
    }
}

// Função que libera a memória alocada para a matriz triangular superior
void ti_libera(float **matriz, int n)
{
    printf("Memória liberada!\n");
    for (int i = 0; i < n; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}

// Função principal
int main()
{
    int n;
    printf("Qual será a dimensão da matriz? ");
    scanf("%d", &n);

    // Cria uma matriz triangular superior n x n
    float **matriz = ti_cria(n);
    int opcao;
    int i, j;
    float x;

    do
    {
        // Exibe o menu de opções
        printf("\n\n--- Menu ---\n");
        printf("1 - Atribuir valor\n");
        printf("2 - Acessar valor\n");
        printf("3 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor de i: ");
            scanf("%d", &i);
            printf("Digite o valor de j: ");
            scanf("%d", &j);
            printf("Digite o valor de x: ");
            scanf("%f", &x);
            if (i >= n || j >= n)
            {
                printf("Impossivel Adicionar o Numero, Lembre que a Matriz é | %d | x | %d |, não aceitamos numeros menores que 0 ou maiores que %d", n, n, n - 1);
            }
            else
            {
                ti_atribui(i, j, x, matriz);
            }
            break;
        case 2:
            printf("Digite o valor de i: ");
            scanf("%d", &i);
            printf("Digite o valor de j: ");
            scanf("%d", &j);
            printf("Valor de (%d, %d) = %.2f\n", i, j, ti_acessa(i, j, matriz));
            break;
        case 3:
            ti_imprime(matriz, n);
            ti_libera(matriz, n);
            break;
        default:
            printf("Opção inválida!\n");
        }
    } while (opcao != 3);

    return 0;
}