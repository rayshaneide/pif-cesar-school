//a) Uma função pode devolver um único valor por return. O programador tentou devolver a soma e a média, mas return soma, media; utiliza o operador vírgula e devolve apenas media.

b) O comando return; encerra a função imediatamente, sem devolver um valor. Ele não é obrigatório no final de uma função void, pois ela também termina quando chega à última chave.

c) As funções podem ser escritas assim:\\

int calcular(int a, int b, int c);
int calcularSoma(int a, int b, int c);

int calcular(int a, int b, int c) {
    return (a + b + c) / 3;
}

int calcularSoma(int a, int b, int c) {
    return a + b + c;
}
//Como cada função retorna apenas um inteiro, usamos uma para a média e outra para a soma. A média será inteira, descartando a parte decimal. Também seria possível retornar uma struct com os dois resultados, mas isso não é necessário nesta solução.\\