//) O caso base é n == 0, que retorna 1. O passo recursivo é n * fatorial(n - 1).

Sem o caso base, as chamadas continuariam sem uma condição de parada, podendo esgotar a pilha de execução e causar uma falha.

b) Empilhamento:\\

fatorial(4) aguarda 4 * fatorial(3)
fatorial(3) aguarda 3 * fatorial(2)
fatorial(2) aguarda 2 * fatorial(1)
fatorial(1) aguarda 1 * fatorial(0)
fatorial(0) retorna 1

//Desempilhamento:\\

fatorial(1) retorna 1 * 1 = 1
fatorial(2) retorna 2 * 1 = 2
fatorial(3) retorna 3 * 2 = 6
fatorial(4) retorna 4 * 6 = 24

//c) Cada chamada ocupa espaço na pilha para guardar informações, como o parâmetro e o ponto para onde o programa deve voltar. Quando a chamada termina, esse espaço é liberado. Sem uma condição de parada, a pilha pode ficar sem espaço.\\