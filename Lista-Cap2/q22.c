#include <stdio.h>

int main(void) {
    int caractere;

    printf("Digite um caractere ASCII: ");
    caractere = getchar();

    if (caractere != EOF) {
        // Em ASCII, esse numero identifica o caractere. A letra A vale 65.
        printf("Codigo: %d\n", caractere);
    }

    return 0;
}