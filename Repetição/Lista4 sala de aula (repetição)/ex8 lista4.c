/*Fazer o programa para o algoritmo representado no fluxograma a seguir.
Responda:
a) Que estrutura de repeti��o est� representada neste fluxograma?
b) O que faz o programa implementado com base neste fluxograma?*/

/*
a - A estrutura for � a utilizada.
J� que para ser do - while a condi��o viria depois da impress�o e no caso de while a++ viria depois da impress�o.
b - Ele mostra os n�meros no intervalo de 0 a 100.*/

#include <stdio.h>

int main (void)

{
    int num;

    for(num = 0; num <= 100; num++)
    {
        printf("%d\t", num);
    }

    return 0;
}
