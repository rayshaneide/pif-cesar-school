//a) #include <stdio.h> é usado normalmente para cabeçalhos das bibliotecas, procurados nos locais configurados pelo compilador.

#include "areas.h" é usado normalmente para cabeçalhos do projeto, com busca que geralmente começa na pasta do arquivo que faz a inclusão.

b) #undef SOMA remove a definição da macro SOMA. A forma #undef SOMA(x,y) está incorreta porque essa diretiva recebe apenas o nome da macro.

c) A mensagem será:
Modo normal

A escolha ocorre no pré-processamento. As diretivas são processadas antes da compilação e apenas o trecho selecionado segue para o compilador.

Os comandos printf desse exemplo precisam estar dentro de uma função, como a main, para formar um programa válido.\\