#include <stdio.h>

long potencia(int base, int expoente);

int main(void) {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("O expoente nao pode ser negativo.\n");
    } else {
        printf("Resultado: %ld\n", potencia(base, expoente));
    }

    return 0;
}

long potencia(int base, int expoente) {
    // Caso base: expoente zero retorna 1.
    if (expoente == 0) {
        return 1;
    }

    // Passo recursivo: diminui o expoente em uma unidade.
    return base * potencia(base, expoente - 1);
}