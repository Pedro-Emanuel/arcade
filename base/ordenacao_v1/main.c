#include "draft.c"
#include <stdio.h>

int main() {
    int vetor[3];
        
    for (int i = 0; i < 3; i++)
        scanf("%d", &vetor[i]);

    int* ordenado = ordenar(vetor);

    for (int i = 0; i < 3; i++)
        printf("%d ", ordenado[i]);
}