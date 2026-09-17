#include <stdio.h>

int main(void) {
    int horas, minutos, segundos, duracao, total;

    printf("Digite a hora inicial: ");
    scanf("%d", &horas);

    printf("Digite o minuto inicial: ");
    scanf("%d", &minutos);

    printf("Digite o segundo inicial: ");
    scanf("%d", &segundos);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    total = horas * 3600 + minutos * 60 + segundos + duracao;

    horas = (total / 3600) % 24;
    minutos = (total / 60) % 60;
    segundos = total % 60;

    printf("Horario de termino: %02d:%02d:%02d\n",
           horas, minutos, segundos);

    return 0;
}