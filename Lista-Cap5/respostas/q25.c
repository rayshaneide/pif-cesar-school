#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
    int numerador, denominador;

    printf("Digite dois inteiros positivos (numerador e denominador): ");
    scanf("%d %d", &numerador, &denominador);

    if (numerador <= 0 || denominador <= 0) {
        printf("Os dois numeros devem ser positivos.\n");
        return 0;
    }

    printf("MDC: %d\n", mdc(numerador, denominador));
    simplifica(numerador, denominador);

    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }

    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor;

    divisor = mdc(num, den);

    printf("Fracao simplificada: %d/%d\n",
           num / divisor, den / divisor);
}