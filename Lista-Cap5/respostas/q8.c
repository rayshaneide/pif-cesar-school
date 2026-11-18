#include <stdio.h>

float celsius(float fahr);

int main(void) {
    float fahrenheit, resultado;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    resultado = celsius(fahrenheit);

    printf("Temperatura em Celsius: %.2f\n", resultado);

    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0f) * 5.0f / 9.0f;
}