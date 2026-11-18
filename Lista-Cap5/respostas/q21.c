#include <stdio.h>

#define SQR(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

void exibeTitulo(void);

int main(void) {
    int a, b;

    exibeTitulo();

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Quadrado do primeiro: %d\n", SQR(a));
    printf("Quadrado do segundo: %d\n", SQR(b));
    printf("Maior: %d\n", MAX(a, b));
    printf("Menor: %d\n", MIN(a, b));

    return 0;
}

void exibeTitulo(void) {
    printf("Calculos com macros\n");
}