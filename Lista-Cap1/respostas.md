 sem deixar ambíguo.

### Atividade 1



#### 1)

```c
#include <stdio.h>
#include <stdlib.h>
int main() {
int nro = 2007;
printf("%i \n", nro);
system("pause");

    return 0;
}
```



#### 2)
```c
#include <stdio.h>
#include <stdlib.h>
int main() {
float n = 2.977;
printf("%.3f\n", n);
system("pause");

    return 0;
}
```




#### 3)
```c
#include <stdio.h>
#include <stdlib.h>
int main() {

    printf("Olá, esse é meu primeiro programa em C! <3");
    return 0;
}
```
#### 4)
Os problemas são: não se coloca ponto e vírgula no include; no int main é necessário adicionar () antes de abrir as chaves para a execução do código,  o que justamente está errado, já que o  bloco de função da linguagem C é chaves {} e não parênteses ();  o texto do printf precisa estar entre aspas, e o cout << endl; pertence ao C++, não ao C. O código corrigido ficaria assim:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
printf("Existem %d semanas no ano.\n", 52);

    system("PAUSE");
    return 0;
}
```

Faltam as 2 bibliotecas: stdio e stdlib; falta o tipo de retorno da função que é int main; a declaração das variáveis está errada, apenas o a foi declarado como inteiro, e o restante não; no printf as aspas não são fechadas; existem 3%d mas o código fornece 4 valores; e falta terminar o código com return 0;


#### 6)
Saída: Bom dia! Shirley

Existe primeiro uma quebra de linha e depois uma tabulação

Saída: Você já tomou café?

O cursor termina na linha seguinte.

A solução não existe!

Não insista.

Saída: Duas	linhas	de	saída

ou	uma?

Saída:

um

dois

três

#### 8) 

No comando printf possuem os seguintes caracteres:
```
   \n: quebra de linha
   \t:   tabulação
   \":   caractere "
```
Saída: Primeiro programa
E como não tem `\n` no final, o último comando sendo o `system(pause)` vai começar após os fins das aspas do printf.

#### 9) No primeiro comando printf cada `%c` recebe um caractere, gerando na saída “Primeiro programa”, 
mas existe um problema na segunda linha, no segundo comando do printf, %c espera receber uma 
caractere mas acaba recebendo uma string, assim a saída não fica bem definido. O correto seria `printf("%c", '\"');` 
assim acabaria saindo corretamente “Primeiro programa”.

#### 10)

b) Verdadeiro, em C tem diferença entre letras maiúsculas e minúsculas, então há 3 identificadores diferentes

#### 11)
```c
\r: Sequência de escape, retorno de carro, tipo char
2130: Constante inteira decimal, tipo int
-123: Constante inteira decimal negativa, tipo int
33.28: Constante de ponto flutuante, tipo double
0XFA: Constante inteira hexadecimal, tipo int
0101: Constante inteira octal, tipo int
2.0e30: Ponto flutuante em notação científica, tipo double
\xDC: Sequência de escapa hexadecimal, tipo char
‘\”’: Constante de caractere, tipo char
‘F’: Constante de caractere, tipo char
0: Constante inteira decimal, tipo int
‘\0’: Caractere nulo, tipo char
“F”: String, tipo char
-4567.89: Constante de ponto flutuante negativa, tipo double
```

#### 12)

```c
Int a; - correto, declara um inteiro
Float b; - correto, declara ponto flutuante simples
Double float c; - incorreto, double e float não podem ser combinados
Unsigned char d; -  correto, char sem sinal
Unsigned e; - correto, equivale a unsigned int e;
Long float f; - incorreto, long float não é um tipo válido em C
Long g; - correto, equivale a long int g;
Long double h; - correto, tipo de ponto flutuante de precisão estendida
```

#### 13)

c) São arquivos de texto contendo declarações/protótipos de funções, macros, constantes e definições de tipos.

#### 14)

O cabeçalho fornece ao compilador declarações necessárias, como os protótipos das funções

#### 15)

c) `#include` é uma diretiva do pré-processador C, processada antes da compilação propriamente dita.

#### 16)

c) pré-processador, por exemplo #include, que são tratados na etapa de pré-processamento

#### 17) Estão corretas esses printf:
```c
    a) printf ( "Primeiro programa" );
    b) printf( "Primeiro programa" );
    c) printf("Primeiro programa");
    Já a errada é: d) printf "Primeiro programa" ; - porque precisa dos parênteses para funcionar.
```
#### 18) 
```c
#include <stdio.h>

int main()
{
float lapis = 4.88;
float borrachas = 234.54;
float canetas = 42.04;
float cadernos = 8.00;
float fitas = 13.05;

    printf("%-12s%12.2f\n", "Lapis", lapis);
    printf("%-12s%12.2f\n", "Borrachas", borrachas);
    printf("%-12s%12.2f\n", "Canetas", canetas);
    printf("%-12s%12.2f\n", "Cadernos", cadernos);
    printf("%-12s%12.2f\n", "Fitas", fitas);

    return 0;
}
```
#### 19) 

```c
#include <stdio.h>


int main()
{
printf("um\n\tdois\n\t\ttrês\n");

    return 0;
}
```
Saída:

um

dois

três

#### 20) 
```c
#include <stdio.h>

int main()
{
printf("\xC9\xCD\xCD\xBB\n");
printf("\xBA  \xBA\n");
printf("\xBA  \xBA\n");
printf("\xC8\xCD\xCD\xBC\n");

    return 0;
}
```


#### 21)
##### Versão 1:
```c
#include <stdio.h>

int main()
{
printf("Treinamento em programação.\nLinguagem C.\n");

    return 0;
}
```
##### Versão 2:
```c
#include <stdio.h>

int main()
{
printf("Treinamento em programação.\n");
printf("Linguagem C.\n");

    return 0;
}
```
##### Versão 3:
```c
#include <stdio.h>

int main()
{
printf("╔══════════════════════════════╗\n");
printf("║ Treinamento em programação. ║\n");
printf("║ Linguagem C.                 ║\n");
printf("╚══════════════════════════════╝\n");

    return 0;
}
```


#### 22)
```c
#include <stdio.h>

int main()
{
printf("  \xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC\n");
printf("\xDFO\xDF\xDF\xDF\xDF\xDF\xDFO\xDF\n");

    printf("\n");

    printf(" \xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF\n");

    return 0;
}
```


#### 23)
```c
#include <stdio.h>

int main()
{
printf("XXXXX\n");
printf("X   X\n");
printf("X   X\n");
printf("X   X\n");
printf("XXXXX\n");

    return 0;
}
```


#### 24)
```c
#include <stdio.h>

int main()
{
printf("%-10s %5s\n", "ALUNO(A)", "NOTA");
printf("%-10s %5s\n", "=========", "=====");

    printf("%-10s %5s\n", "ALINE", "9.0");
    printf("%-10s %5s\n", "MÁRIO", "DEZ");
    printf("%-10s %5s\n", "SÉRGIO", "4.5");
    printf("%-10s %5s\n", "SHIRLEY", "7.0");

    return 0;
}
```


#### 25)
```c
#include <stdio.h>

int main()
{
printf("CCCCC\nC\nC\nCCCCC\n");

    return 0;
}
```


#### 26) 
```c
#include <stdio.h>

int main()
{
printf("CCCCC\nC\nC\nCCCCC\n");

    return 0;
}
```

