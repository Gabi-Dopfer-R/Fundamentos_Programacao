/*Fazer o programa para o algoritmo representado no fluxograma a seguir.
Responda:
a) Que estrutura de repetição está representada neste fluxograma?
b) O que faz o programa implementado com base neste fluxograma?
c) Para que o programa forneça os mesmos números gerados pelo programa implementado no Exercício 8,
quais modificações são necessárias, considerando manter a estrutura de repetição apresentada neste
fluxograma? Implemente essas modificações.*/

/*
a - A estrutura que está apresentada e a do - while, pois a condição está no final.
b - Apresenta os números entre 0 a 100.
c - Imprimir o valor para depois acrescentar 1.
*/

#include <stdio.h>

int main (void)

{
    int num;

    num = 0;

    do
    {
        printf("%d\t", num);
        num++;

    }while(num <= 100);

    return 0;
}
