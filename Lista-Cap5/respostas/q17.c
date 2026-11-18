#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int numero;
    long iterativo, recursivo;

    printf("Digite um inteiro de 0 a 12: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("Valor fora do intervalo permitido.\n");
        return 0;
    }

    iterativo = fatorialIterativo(numero);
    recursivo = fatorialRecursivo(numero);

    printf("Fatorial iterativo: %ld\n", iterativo);
    printf("Fatorial recursivo: %ld\n", recursivo);

    if (iterativo == recursivo) {
        printf("Os resultados coincidem.\n");
    } else {
        printf("Os resultados sao diferentes.\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;

    for (i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }

    return n * fatorialRecursivo(n - 1);
}