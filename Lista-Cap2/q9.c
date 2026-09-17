#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Quadrado: %d\n", numero * numero);
    printf("Decima parte: %.2f\n", numero / 10.0);

    return 0;
}