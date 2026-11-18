#include <stdio.h>

#define PI 3.14f

float area(float r);

int main(void) {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    if (raio < 0) {
        printf("O raio nao pode ser negativo.\n");
    } else {
        printf("Area da esfera: %.2f\n", area(raio));
    }

    return 0;
}

float area(float r) {
    return 4 * PI * r * r;
}