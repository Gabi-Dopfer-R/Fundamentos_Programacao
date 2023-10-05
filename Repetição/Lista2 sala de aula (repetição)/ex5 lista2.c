/*
1 - O que faz o algoritmo a seguir?
2 - Como alterar o algoritmo para não ser necessário fazer uma leitura do valor
antes da estrutura for?*/

/* Resposta:
1 - Este algoritmo imprime o maior valor dentre os 5 valores lidos.
*/


#include <stdio.h>

int main (void)

{
    int valor, maior, j;

    maior = 0;/*Trocar o valor por 0.*/

    for(j = 0; j <= 4; j++)/*Acrescentar o sinal de igual no <= .*/
    {
        printf("Valor:");
        scanf("%d", &valor);

        if(valor > maior)
        {
            maior = valor;
        }
    }

    printf("%d", maior);

    return 0;
}
