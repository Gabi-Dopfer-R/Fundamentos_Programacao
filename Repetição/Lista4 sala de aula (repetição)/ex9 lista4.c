/*Fazer o programa para o algoritmo representado no fluxograma a seguir.
Responda:
a) Que estrutura de repeti��o est� representada neste fluxograma?
b) O que faz o programa implementado com base neste fluxograma?
c) Para que o programa forne�a os mesmos n�meros gerados pelo programa implementado no Exerc�cio 8,
quais modifica��es s�o necess�rias, considerando manter a estrutura de repeti��o apresentada neste
fluxograma? Implemente essas modifica��es.*/

/*
a - A estrutura que est� apresentada e a do - while, pois a condi��o est� no final.
b - Apresenta os n�meros entre 0 a 100.
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
