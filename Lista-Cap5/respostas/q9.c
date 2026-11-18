#include <stdio.h>

int maior(int a, int b);

int main(void) {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Maior numero: %d\n", maior(a, b));

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    }

    return b;
}