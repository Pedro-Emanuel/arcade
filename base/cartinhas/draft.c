#include <stdio.h>
#include <string.h>

struct Carta {
    char remetente[10];
    char destinatario[10];
    char mensagem[200];
};

struct Carta criar_carta(char remetente[], char destinatario[], char mensagem[]) {
    struct Carta carta;
    strcpy(carta.remetente, remetente);
    strcpy(carta.destinatario, destinatario);
    strcpy(carta.mensagem, mensagem);
    return carta;
}

void ler_carta(struct Carta carta) {
    printf("%s,\n\n", carta.destinatario);
    printf("%s\n\n", carta.mensagem);
    printf("Com carinho,\n%s.\n", carta.remetente);
}

int main() {
    char remetente[10], destinatario[10], mensagem[200];
    scanf("%[^\n] %[^\n] %[^\n]", remetente, destinatario, mensagem);
    struct Carta carta = criar_carta(remetente, destinatario, mensagem);
    ler_carta(carta);
}