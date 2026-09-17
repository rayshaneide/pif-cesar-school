/*

//a) A biblioteca <conio.h> nao faz parte do padrao da linguagem C. Por isso, funcoes como getch() e getche() nao estao disponiveis em todos os sistemas, comprometendo a portabilidade do programa.
//b)As funcoes padrao sao getchar(), para ler um caractere, e putchar(), para exibi-lo. Mas, elas nao substituem integralmente o comportamento de getch() e getche(): em um terminal comum, a entrada continua dependendo de Enter. A leitura imediata de cada tecla exige recursos especificos do sistema operacional.
*/
c) 
#include <stdio.h>

int main(void) {
    int caractere;

    printf("Digite um caractere: ");

    do {
        caractere = getchar();
    } while (caractere == '\n' || caractere == '\r');

    if (caractere != EOF) {
        printf("Caractere lido: %c\n", caractere);
    }

    return 0;
}


