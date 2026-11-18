#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(void) {
    float preco, subtotal, total, pago, troco;
    int quantidade, opcaoPagamento;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if (preco < 0 || quantidade <= 0) {
        printf("Preco ou quantidade invalida.\n");
        return 0;
    }

    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Outro pagamento (sem desconto)\n");
    printf("Escolha a forma de pagamento: ");
    scanf("%d", &opcaoPagamento);

    if (opcaoPagamento != 1 && opcaoPagamento != 2) {
        printf("Opcao de pagamento invalida.\n");
        return 0;
    }

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Digite o valor pago: ");
    scanf("%f", &pago);

    if (pago < total) {
        printf("Valor insuficiente para o pagamento.\n");
    } else {
        troco = calculaTroco(total, pago);
        printf("Troco: R$ %.2f\n", troco);
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90f;
    }

    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}