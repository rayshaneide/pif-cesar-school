#include <stdio.h>

int main(void) {
    int caractere;

    printf("Digite um caractere: ");

    do {
        caractere = getchar();
    } while (caractere == '\n' || caractere == '\r');

    if (caractere != EOF) {
        printf("Caractere lido: %c\n", caractere);
    }

    return 0;
}

