#include <stdio.h>

// Para testar sem depuracao, comente a linha abaixo e recompile.
#define DEBUG

int somaAteN(int n);

int main(void) {
    int numero;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O numero deve ser positivo.\n");
        return 0;
    }

    printf("Soma final: %d\n", somaAteN(numero));

    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;

    for (i = 1; i <= n; i++) {
        soma = soma + i;

#ifdef DEBUG
        printf("Iteracao %d: soma parcial = %d\n", i, soma);
#endif
    }

    return soma;
}

// Com DEBUG definido, o programa mostra as somas parciais e a final.
// Sem DEBUG definido, mostra apenas a soma final apos a leitura.