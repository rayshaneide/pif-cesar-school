#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main(void) {
    printf("Macro sem protecao: %d\n", DOBRO(2 + 3));
    printf("Funcao: %d\n", dobro(2 + 3));

    // A macro gera 2 + 3 * 2, resultando em 8.
    // A funcao recebe 5 e retorna 10.

#undef DOBRO
#define DOBRO(x) ((x) * 2)

    // Agora a macro gera ((2 + 3) * 2), resultando em 10.
    printf("Macro corrigida: %d\n", DOBRO(2 + 3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}