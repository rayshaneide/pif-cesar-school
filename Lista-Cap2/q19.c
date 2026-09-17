#include <stdio.h>

int main(void) {
    const double PI = 3.141593;
    double raio;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    printf("Area: %.2f\n", 4 * PI * raio * raio);
    printf("Volume: %.2f\n", (4.0 / 3.0) * PI * raio * raio * raio);

    return 0;
}