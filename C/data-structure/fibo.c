#include <stdio.h>

// Função para calcular e salvar a sequência de Fibonacci
// Retorna o último número da sequência
int fibonacci(int n, FILE *fp) {
    // Primeiros dois números da sequência
    int t1 = 0, t2 = 1, fib;

    // Caso n seja 1 ou 2, escrevemos apenas o primeiro número
    if (n == 1) {
        fprintf(fp, "%d\n", t1);
        return t1;
    } else if (n == 2) {
        fprintf(fp, "%d\n%d\n", t1, t2);
        return t2;
    }

    // Caso n seja maior que 2, calculamos e escrevemos a sequência
    fprintf(fp, "%d\n%d\n", t1, t2);
    for (int i = 3; i <= n; i++) {
        fib = t1 + t2;
        t1 = t2;
        t2 = fib;
        fprintf(fp, "%d\n", fib);
    }

    // Retornamos o último número da sequência
    return t2;
}

int main() {
    // Variáveis
    int num, result = 0;
    FILE *fp;

    // Perguntamos ao usuário qual número da sequência ele deseja calcular
    printf("Digite o valor de n: ");
    scanf("%d", &num);

    // Abrimos o arquivo para escrita
    fp = fopen("fibonacci.txt", "w");

    // Calculamos a sequência de Fibonacci e salvamos no arquivo
    int last_fib = fibonacci(num, fp);

    // Fechamos o arquivo
    fclose(fp);

    // Somamos os números da sequência
    for (int i = 1; i < num; i++) {
        // Abrimos o arquivo para leitura
        fp = fopen("fibonacci.txt", "r");

        // Ignoramos os números já contabilizados
        for (int j = 1; j < i; j++) {
            int temp;
            fscanf(fp, "%d", &temp);
        }

        // Lemos o próximo número e somamos ao resultado
        int fib;
        fscanf(fp, "%d", &fib);
        result += fib;

        // Fechamos o arquivo
        fclose(fp);
    }

    // Imprimimos o resultado
    printf("A soma dos numeros da sequencia de Fibonacci é %d\n", result + last_fib);

    return 0;
}
