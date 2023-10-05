/*
1 - O que faz o algoritmo a seguir?
2 - Por que a variável s foi inicializada com 1?
3 - Qual o problema observado neste algoritmo?
4 - Qual seria a solução correta?

Respostas:
1 - Esse algoritmo cálcula o fator de 4.

2 - Porque a váriavel é o resulatado do produto.
E para ser utilizada em for ela necessita de um valor nulo inicial,
caso contrário a conta estará errada.

3 - O problema observado é que o resultado da conta termina em 0 em vez de 24.
Pois o primeiro cálculo seria 0 * 1, deixando assim todas as contas sucessivas com resultado 0.

4 - Trocar o valor inicial de i para 1 em vez de 0.
*/

#include <stdio.h>

int main (void)

{
    int i, s;

    s = 1;

    for(i = 1; i < 5; i++)
    {
        s = s * i;
    }

    printf("%d", s);

    return 0;
}
