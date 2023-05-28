// 6.  Dados o número n de alunos de uma turma de Introdução aos Autômatos a Pilha (MAC 414) e suas notas da primeira prova, determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e nota mínima = 0).

#include <stdio.h>

int main()
{
    // Variaveis

    int mennota = 101;
    int mainota = -1;
    int cont = 0;
    int alunomai;
    int alunomen;
    int alunos;
    int nota;

    // Código

    printf("Qual a quantidade de alunos? ");
    scanf("%d", &alunos);

    while (cont < alunos)
    {   printf("| ALUNO %d | - Qual a nota do aluno? ", cont+1);
        scanf("%d", &nota);

        if (mainota < nota) {
            alunomai = cont + 1;
            mainota = nota;
        }
        if (mennota > nota) {
            alunomen = cont + 1;
            mennota = nota;
        }
        cont++;
    }

    printf("O Aluno %d teve a maior nota que foi: %d\n", alunomai, mainota);
    printf("O Aluno %d teve a menor nota que foi: %d\n", alunomen, mennota);

    return 0;
}