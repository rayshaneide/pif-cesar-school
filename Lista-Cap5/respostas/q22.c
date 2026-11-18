#include <stdio.h>
#include "areas.h"

void exibeTitulo(void);

int main(void) {
    float raio;
    float baseRetangulo, alturaRetangulo;
    float baseTriangulo, alturaTriangulo;

    exibeTitulo();

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &baseRetangulo, &alturaRetangulo);

    printf("Digite a base e a altura do triangulo: ");
    scanf("%f %f", &baseTriangulo, &alturaTriangulo);

    if (raio < 0 || baseRetangulo < 0 || alturaRetangulo < 0 ||
        baseTriangulo < 0 || alturaTriangulo < 0) {
        printf("As medidas nao podem ser negativas.\n");
        return 0;
    }

    printf("Area do circulo: %.2f\n", A_CIRC(raio));
    printf("Area do retangulo: %.2f\n",
           A_RET(baseRetangulo, alturaRetangulo));
    printf("Area do triangulo: %.2f\n",
           A_TRI(baseTriangulo, alturaTriangulo));

    return 0;
}

void exibeTitulo(void) {
    printf("Calculo de areas\n");
}