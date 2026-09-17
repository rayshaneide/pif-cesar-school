#include <stdio.h>

int main(void) {
    double base, liquido;

    printf("Digite o salario-base: ");
    scanf("%lf", &base);

    liquido = base + base * 0.05 - base * 0.07;

    printf("Salario liquido: R$ %.2f\n", liquido);

    return 0;
}