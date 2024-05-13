#include "draft.c"
#include <stdio.h>

int main() {
    int tam1, tam2;
    
    scanf("%d", &tam1);
    int pescador1[tam1];

    for (int i = 0; i < tam1; i++)
        scanf("%d", &pescador1[i]);

    scanf("%d", &tam2);
    int pescador2[tam2];

    for (int i = 0; i < tam2; i++)
        scanf("%d", &pescador2[i]);

    char* resultado = torneio_pesca(pescador1, &tam1, pescador2, &tam2);
    printf("%s", resultado);
}