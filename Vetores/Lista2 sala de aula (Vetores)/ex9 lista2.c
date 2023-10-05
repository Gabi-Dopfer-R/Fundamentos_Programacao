/*O que faz o algoritmo a seguir:
R= Ele gera um vetor e imprime o mesmo junto com a média.

Implemente a solução na linguagem C para esse algoritmo. 
Deve ser utilizada a função para gerar os valores do
vetor aleatoriamente e a função para mostrar os elementos do vetor, 
já implementadas na biblioteca Vetores.h e também criar uma função chamada SomarVetorInteiro(), 
que deve ser incluída na biblioteca Vetores.h e receberá como parâmetros o vetor e o tamanho do vetor
e retornará o valor da soma dos elementos do vetor. Considere que os valores do vetor devem estar 
compreendidos em um intervalo de 0 a 100 , dessa forma, a função
GerarVetorInteiro () deve ser modificada para aceitar essa faixa de valores
Exemplo:*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main (void)
{
    char resp;

    do
    {
        int a[50], i, soma;
        float media;

        soma=0;
        srand(time (NULL));

        printf("\n================== Vetor ===========================\n");
        for(i = 0; i< 50; i++)
        {
            a[i] = GerarVetor(101);
            a[i] -= 1;

            soma += SomarVetorInteiro(a, i);
            
            MostrarVetor(a[i]);
        }
        
        media = soma / 50.00;

        printf("\n\nM%cdia: %.2f\n", 130, media);

        printf("\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');
}