/*Fazer o programa para o algoritmo representado no fluxograma a seguir.
Responda:
a) Que estrutura de repeti��o est� representada neste fluxograma?
b) O que faz o programa implementado com base neste fluxograma?
c) Qual o problema verificado no funcionamento do programa?
d) Quais modifica��es s�o necess�rias para que o programa funcione adequadamente?*/

/*
a - Do - while, pois a condi��o esta no final.
b - L� n�meros e apresenta a soma total deles.
c - Se um n�mero negativo for utilizado para interromper o programa,
ele ser� agregado a soma.
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
