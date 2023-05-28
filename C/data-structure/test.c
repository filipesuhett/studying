#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
    char caractere;
    struct no *prox;
} No;

typedef struct lista {
    No *inicio;
    No *fim;
    int tamanho;
} Lista;

void inserir_fim(Lista *lst, char caractere) {
    No *novo = (No *) malloc(sizeof(No));
    novo->caractere = caractere;
    novo->prox = NULL;

    if (lst->inicio == NULL) {
        lst->inicio = novo;
        lst->fim = novo;
    } else {
        lst->fim->prox = novo;
        lst->fim = novo;
    }

    lst->tamanho++;
}

void imprimir_lista(Lista *lst) {
    No *atual = lst->inicio;

    while (atual != NULL) {
        printf("%c ", atual->caractere);
        atual = atual->prox;
    }

    printf("\n");
}

void separar_caracteres(Lista *lst, char *string) {
    int tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++) {
        inserir_fim(lst, string[i]);
    }
}

int main() {
    Lista lst;
    lst.inicio = NULL;
    lst.fim = NULL;
    lst.tamanho = 0;

    char string[] = "exemplo";
    separar_caracteres(&lst, string);

    imprimir_lista(&lst);

    return 0;
}
