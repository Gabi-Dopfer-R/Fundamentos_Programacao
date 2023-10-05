/*Fazer o programa para o algoritmo representado no fluxograma a seguir.
Responda:
a) Que estrutura de repetição está representada neste fluxograma?
b) O que faz o programa implementado com base neste fluxograma?*/

/*
a - A estrutura for é a utilizada.
Já que para ser do - while a condição viria depois da impressão e no caso de while a++ viria depois da impressão.
b - Ele mostra os números no intervalo de 0 a 100.*/

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
