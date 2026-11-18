#include <stdio.h>

long fibonacci(int n);

int main(void) {
    int quantidade, i;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("A quantidade deve ser positiva.\n");
        return 0;
    }

    for (i = 0; i < quantidade; i++) {
        printf("%ld ", fibonacci(i));
    }

    printf("\n");

    return 0;
}

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    // Esta versao repete o calculo dos mesmos termos muitas vezes.
    // Por isso, fica lenta para valores grandes de n.
    return fibonacci(n - 1) + fibonacci(n - 2);
}