/*
1 - O que faz o algoritmo a seguir?
2 - Por que a vari�vel s foi inicializada com 1?
3 - Qual o problema observado neste algoritmo?
4 - Qual seria a solu��o correta?

Respostas:
1 - Esse algoritmo c�lcula o fator de 4.

2 - Porque a v�riavel � o resulatado do produto.
E para ser utilizada em for ela necessita de um valor nulo inicial,
caso contr�rio a conta estar� errada.

3 - O problema observado � que o resultado da conta termina em 0 em vez de 24.
Pois o primeiro c�lculo seria 0 * 1, deixando assim todas as contas sucessivas com resultado 0.

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
