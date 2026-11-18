#include <stdio.h>

float celsiusParaFahrenheit(float temperatura);
float celsiusParaKelvin(float temperatura);
float fahrenheitParaCelsius(float temperatura);
float kelvinParaCelsius(float temperatura);

int main(void) {
    int opcao;
    float temperatura;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida.\n");
        return 0;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao) {
        case 1:
            printf("Temperatura: %.2f F\n",
                   celsiusParaFahrenheit(temperatura));
            break;
        case 2:
            printf("Temperatura: %.2f K\n",
                   celsiusParaKelvin(temperatura));
            break;
        case 3:
            printf("Temperatura: %.2f C\n",
                   fahrenheitParaCelsius(temperatura));
            break;
        case 4:
            printf("Temperatura: %.2f C\n",
                   kelvinParaCelsius(temperatura));
            break;
    }

    return 0;
}

float celsiusParaFahrenheit(float temperatura) {
    return temperatura * 9.0f / 5.0f + 32.0f;
}

float celsiusParaKelvin(float temperatura) {
    return temperatura + 273.15f;
}

float fahrenheitParaCelsius(float temperatura) {
    return (temperatura - 32.0f) * 5.0f / 9.0f;
}

float kelvinParaCelsius(float temperatura) {
    return temperatura - 273.15f;
}