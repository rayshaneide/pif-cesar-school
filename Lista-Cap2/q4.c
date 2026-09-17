/*
Inicialmente:

a = 1, b = 2, c = 3, d = 4

1)

a += b + c;

Somamos b + c, obtendo 5, e adicionamos ao valor anterior de a:

a = 1 + 5 = 6

2)

b *= c = d + 2;

O agrupamento e b *= (c = d + 2). Assim:

c = 4 + 2 = 6
b = 2 * 6 = 12

3)

d %= a + a + a;

A soma resulta em 18. O resto da divisao de 4 por 18 e igual a 4:

d = 4 % 18 = 4

4)

d -= c -= b -= a;

As atribuicoes sao agrupadas da direita para a esquerda:

b = 12 - 6 = 6
c = 6 - 6 = 0
d = 4 - 0 = 4

5)

a += b += c += 7;

Novamente, o agrupamento ocorre da direita para a esquerda:

c = 0 + 7 = 7
b = 6 + 7 = 13
a = 6 + 13 = 19

Portanto, os valores finais sao:

a = 19, b = 13, c = 7, d = 4
*/