/*

Q 01. 

#include <stdio.h>
#include <stdlib.h>
int main() {
 int valor_inteiro;
 valor_inteiro = 2.97;
 printf("O valor armazenado eh: %d\n", valor_inteiro);
 system("PAUSE");
 return 0;

}


*/




// RESPOSTAS:

//A) Vai ser exibido o valor 2.
//B) Ao atribuir 2.97 a uma var. int, ocorre uma conversao implicita de tipo, descartando a parte decimal. Esse processo se chama truncamento e acontece 
//C) Para mantermos a parte decimal, utilizamos float ou double; para tornar o truncamento explicito, usamos um cast; e para arredondar ao inteiro mais proximo, utilize round(), da biblioteca <math.h>