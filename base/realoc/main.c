#include "draft.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    scanf("%d", &tamanho);

    char** vetor = (char**) malloc(tamanho * sizeof(char*));

    ler_strings(vetor, &tamanho);
    ordenar(vetor, &tamanho);

    for (int i = 0; i < tamanho; i++)
        printf("%s\n", vetor[i]);
}