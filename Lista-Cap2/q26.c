#include <stdio.h>

int main(void) {
    double comprimento, largura, preco, arame, custo;

    printf("Digite o comprimento e a largura do terreno: ");
    scanf("%lf %lf", &comprimento, &largura);

    printf("Digite o preco do metro de arame: ");
    scanf("%lf", &preco);

    arame = 2 * (comprimento + largura) * 3;
    custo = arame * preco;

    printf("Quantidade de arame: %.2f metros\n", arame);
    printf("Custo total: R$ %.2f\n", custo);

    return 0;
}