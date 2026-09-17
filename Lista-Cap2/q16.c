#include <stdio.h>
#include <math.h>

int main(void) {
    double degrau, altura, quantidade;

    printf("Digite a altura do degrau em centimetros: ");
    scanf("%lf", &degrau);

    printf("Digite a altura desejada em metros: ");
    scanf("%lf", &altura);

    quantidade = ceil(altura * 100.0 / degrau);

    printf("Quantidade minima de degraus: %.0f\n", quantidade);

    return 0;
}