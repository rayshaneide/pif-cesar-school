#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
    int opcao;
    float a, b;

    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida.\n");
        return 0;
    }

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", soma(a, b));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrai(a, b));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplica(a, b));
            break;
        case 4:
            if (b == 0) {
                printf("Nao e possivel dividir por zero.\n");
            } else {
                printf("Resultado: %.2f\n", divide(a, b));
            }
            break;
    }

    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}