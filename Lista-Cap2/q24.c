#include <stdio.h>

int main(void) {
    double velocidade;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &velocidade);

    printf("Velocidade em m/s: %.2f\n", velocidade / 3.6);

    return 0;
}