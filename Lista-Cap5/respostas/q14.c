#include <stdio.h>

int somaDigitos(int n);

int main(void) {
    int numero;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O numero deve ser positivo.\n");
    } else {
        printf("Soma dos digitos: %d\n", somaDigitos(numero));
    }

    return 0;
}

int somaDigitos(int n) {
    // Caso base: um numero com apenas um digito.
    if (n < 10) {
        return n;
    }

    // Passo recursivo: soma o ultimo digito com os demais.
    return n % 10 + somaDigitos(n / 10);
}