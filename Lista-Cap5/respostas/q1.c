//a) O protótipo é float celsius(float);. Ele informa que a função recebe um valor float e retorna um float.

A chamada é c = celsius(f)
A definição é:\\

float celsius(float fahr) {
    return (fahr - 32.0) * 5.0 / 9.0;
}
//Ela contém as instruções que fazem a conversão.
b) O protótipo permite que o compilador conheça o retorno e confira a quantidade e os tipos dos argumentos antes da definição da função. Sem ele, o compilador não teria essas informações na chamada. Nas versões atuais de C, chamar uma função sem uma declaração anterior exige um diagnóstico do compilador.
c) O retorno da função é do tipo float. O tipo de retorno indica qual valor a função devolve. Os parâmetros indicam os valores que ela recebe e podem ter tipos diferentes do retorno.\\
