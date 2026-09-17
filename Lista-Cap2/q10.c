#include <stdio.h>

int main(void) {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);

    // Para evitar divisao por zero, o divisor deve ser diferente de zero.
    if (b != 0) {
        printf("Divisao: %.2f\n", (double) a / b);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}