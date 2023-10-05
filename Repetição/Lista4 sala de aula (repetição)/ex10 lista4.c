/*Fazer o programa para o algoritmo representado no fluxograma a seguir.
Responda:
a) Que estrutura de repetição está representada neste fluxograma?
b) O que faz o programa implementado com base neste fluxograma?
c) Qual o problema verificado no funcionamento do programa?
d) Quais modificações são necessárias para que o programa funcione adequadamente?*/

/*
a - Do - while, pois a condição esta no final.
b - Lê números e apresenta a soma total deles.
c - Se um número negativo for utilizado para interromper o programa,
ele será agregado a soma.
d - Adicionar um if com break antes de realizar a soma;
*/

#include <stdio.h>

int main (void)

{
    int num, soma;

    soma = 0;

    do
    {
        printf("Insira um n%cmero positivo:", 163);
        scanf("%d", &num);

        if(num <= 0)
        {
            break;
        }

        soma = num + soma;

    }while(num > 0);

    printf("A soma dos valores informadors %c: %d", 130, soma);

    return 0;
}
