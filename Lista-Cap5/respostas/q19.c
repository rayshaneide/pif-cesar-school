#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main(void) {
    int numero;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O numero deve ser positivo.\n");
        return 0;
    }

    printf("Contagem regressiva:\n");
    contagem(numero);

    printf("Contagem crescente:\n");
    contagemCrescente(numero);
    printf("Fogo!\n");

    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    // Imprime antes da chamada recursiva: ordem decrescente.
    printf("%d\n", n);
    contagem(n - 1);
}

void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }

    // Imprime depois da chamada recursiva: ordem crescente.
    contagemCrescente(n - 1);
    printf("%d\n", n);
}