/*Fazer o programa para o algoritmo representado no fluxograma a seguir.
Responda:
a) Que estrutura de repetição está representada neste fluxograma?
b) O que faz o programa implementado com base neste fluxograma?*/

#include <stdio.h>

int main (void)

{
    int num, cont;

    printf("Informe um n%cmero:", 163);
    scanf("%d", &num);

    cont = 0;

    while(cont <= 10)
    {
        printf("%d * %d = %d\n", num, cont, num*cont);
        cont++;
    }

    return 0;
}
