//a) As saídas são: 25, 8

SQR(2+3) é substituído por ((2+3)*(2+3)), resultando em 25.

DOBRO(2+3) é substituído por 2+3*2. Como a multiplicação vem antes da soma, o resultado é 8.

b) O #define é uma diretiva de pré-processamento, não uma instrução executada pelo programa. Um ponto e vírgula colocado no final passa a fazer parte do texto substituído.

As letras maiúsculas são uma convenção para facilitar a identificação de macros.

c) O espaço entre PRN e os parênteses faz com que a definição não seja reconhecida como uma macro com argumentos. A forma correta é:
#define PRN(n) printf("%d", (n))

Uma macro faz substituição de texto no pré-processamento. Uma função possui parâmetros com tipos definidos e realiza uma chamada durante a execução.\\